/*
 * Created by Xianke Liu on 2018/5/14.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "corpc_memcached.h"

using namespace corpc;

MemcachedConnectPool::Proxy::Proxy(MemcachedConnectPool *pool) {
    InnerRpcClient *client = InnerRpcClient::instance();
    
    InnerRpcClient::Channel *channel = new InnerRpcClient::Channel(client, pool->_server);
    
    _stub = new thirdparty::ThirdPartyService::Stub(channel, thirdparty::ThirdPartyService::STUB_OWNS_CHANNEL);
}

MemcachedConnectPool::Proxy::~Proxy() {
    delete _stub;
}

void MemcachedConnectPool::Proxy::callDoneHandle(::google::protobuf::Message *request, corpc::Controller *controller) {
    delete controller;
    delete request;
}

memcached_st* MemcachedConnectPool::Proxy::take() {
    Void *request = new Void();
    thirdparty::TakeResponse *response = new thirdparty::TakeResponse();
    Controller *controller = new Controller();
    
    _stub->take(controller, request, response, NULL);
    
    if (controller->Failed()) {
        fprintf(stderr, "Rpc Call Failed : %s\n", controller->ErrorText().c_str());
        return NULL;
    }
    
    memcached_st* memc = (memcached_st*)response->handle();
    
    delete controller;
    delete response;
    delete request;
    
    return memc;
}

void MemcachedConnectPool::Proxy::put(memcached_st* memc, bool error) {
    thirdparty::PutRequest *request = new thirdparty::PutRequest();
    Controller *controller = new Controller();
    
    request->set_handle((intptr_t)memc);
    if (error) {
        request->set_error(error);
    }
    
    _stub->put(controller, request, NULL, google::protobuf::NewCallback<::google::protobuf::Message *>(&callDoneHandle, request, controller));
}

MemcachedConnectPool::MemcachedConnectPool(memcached_server_st *memcServers, uint32_t maxConnectNum, uint32_t maxIdleNum): _memcServers(memcServers), _maxConnectNum(maxConnectNum), _maxIdleNum(maxIdleNum), _realConnectCount(0) {
    
}

void MemcachedConnectPool::take(::google::protobuf::RpcController* controller,
                            const Void* request,
                            thirdparty::TakeResponse* response,
                            ::google::protobuf::Closure* done) {
    if (_idleList.size() > 0) {
        intptr_t handle = (intptr_t)_idleList.front();
        _idleList.pop_front();
        
        response->set_handle(handle);
    } else if (_realConnectCount < _maxConnectNum) {
        // 建立新连接
        memcached_st *memc = memcached_create(NULL);
        memcached_return rc = memcached_server_push(memc, _memcServers);
        
        if (rc == MEMCACHED_SUCCESS) {
            response->set_handle((intptr_t)memc);
            _realConnectCount++;
        } else {
            fprintf(stderr, "Couldn't add server: %s\n", memcached_strerror(memc, rc));
            memcached_free(memc);
            // MYSQL对象创建失败
            controller->SetFailed("Couldn't add memcached server");
        }
    } else {
        // 等待空闲连接
        _waitingList.push_back(co_self());
        co_yield_ct();
        
        if (_idleList.size() == 0) {
            controller->SetFailed("can't connect to memcached server");
        } else {
            intptr_t handle = (intptr_t)_idleList.front();
            _idleList.pop_front();
            
            response->set_handle(handle);
        }
    }
}

void MemcachedConnectPool::put(::google::protobuf::RpcController* controller,
                           const thirdparty::PutRequest* request,
                           Void* response,
                           ::google::protobuf::Closure* done) {
    memcached_st *memc = (memcached_st *)request->handle();
    
    if (_idleList.size() < _maxIdleNum) {
        if (request->error()) {
            _realConnectCount--;
            memcached_free(memc);
            
            // 若有等待协程，尝试重连
            if (_waitingList.size() > 0) {
                assert(_idleList.size() == 0);
                
                if (_realConnectCount < _maxConnectNum) {
                    memcached_st *memc = memcached_create(NULL);
                    memcached_return rc = memcached_server_push(memc, _memcServers);
                    
                    if (rc == MEMCACHED_SUCCESS) {
                        _realConnectCount++;
                        _idleList.push_back(memc);
                        
                        stCoRoutine_t *co = _waitingList.front();
                        _waitingList.pop_front();
                        
                        co_resume(co);
                    } else {
                        memcached_free(memc);
                        
                        // 唤醒当前所有等待协程
                        while (!_waitingList.empty()) {
                            stCoRoutine_t *co = _waitingList.front();
                            _waitingList.pop_front();
                            
                            co_resume(co);
                        }
                    }
                }
            }
        } else {
            _idleList.push_back(memc);
            
            if (_waitingList.size() > 0) {
                assert(_idleList.size() == 1);
                stCoRoutine_t *co = _waitingList.front();
                _waitingList.pop_front();
                
                co_resume(co);
            }
        }
    } else {
        assert(_waitingList.size() == 0);
        _realConnectCount--;
        memcached_free(memc);
    }
}

MemcachedConnectPool* MemcachedConnectPool::create(memcached_server_st *memcServers, uint32_t maxConnectNum, uint32_t maxIdleNum) {
    MemcachedConnectPool *pool = new MemcachedConnectPool(memcServers, maxConnectNum, maxIdleNum);
    pool->init();
    
    return pool;
}

void MemcachedConnectPool::init() {
    _server = InnerRpcServer::create();
    _server->registerService(this);
}

MemcachedConnectPool::Proxy* MemcachedConnectPool::getProxy() {
    pid_t pid = GetPid();
    
    auto iter = _threadProxyMap.find(pid);
    if (iter != _threadProxyMap.end()) {
        return iter->second;
    }
    
    // 为当前线程创建proxy
    Proxy *proxy = new Proxy(this);
    _threadProxyMap.insert(std::make_pair(pid, proxy));
    
    return proxy;
}
