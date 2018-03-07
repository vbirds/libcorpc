//
//  testrpc_cli.cpp
//  rpccli
//
//  Created by Xianke Liu on 2017/11/2.
//  Copyright © 2017年 Dena. All rights reserved.
//

#include "corpc_routine_env.h"
#include "corpc_client.h"
#include "corpc_controller.h"

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

#include "foo.pb.h"
#include "bar.pb.h"

using namespace CoRpc;

static int iSuccCnt1 = 0;
static int iFailCnt1 = 0;
static int iSuccCnt2 = 0;
static int iFailCnt2 = 0;

struct Test_Stubs {
    FooService::Stub *foo_clt;
    BarService::Stub *bar_clt;
};

Test_Stubs g_stubs;

static void *log_routine( void *arg )
{
    co_enable_hook_sys();
    
    int totalSucc = 0;
    int totalFail = 0;
    
    while (true) {
        sleep(1);
        
        totalSucc += iSuccCnt1 + iSuccCnt2;
        totalFail += iFailCnt1 + iFailCnt2;
        printf("time %ld, foo:Succ %d Fail %d, bar:Succ %d Fail %d, total:Succ %d Fail %d\n", time(NULL), iSuccCnt1, iFailCnt1, iSuccCnt2, iFailCnt2, totalSucc, totalFail);
        
        iSuccCnt1 = 0;
        iFailCnt1 = 0;
        iSuccCnt2 = 0;
        iFailCnt2 = 0;
    }
    
    return NULL;
}

static void *rpc_routine( void *arg )
{
    co_enable_hook_sys();
    
    Test_Stubs *testStubs = (Test_Stubs*)arg;
    
    // 注意：用于rpc调用参数的request,response和controller对象不能在栈中分配，必须在堆中分配，
    //      这是由于共享栈协程模式下，协程切换时栈会被当前协程栈覆盖，导致指向栈中地址的指针已经不是原来的对象
    if (rand() % 2 == 0) {
        FooRequest *request = new FooRequest();
        FooResponse *response = new FooResponse();
        Controller *controller = new Controller();
        
        request->set_text("test1");
        request->set_times(1);
        
        do {
            controller->Reset();
            testStubs->foo_clt->Foo(controller, request, response, NULL);
            
            if (controller->Failed()) {
                //printf("Rpc Call Failed : %s\n", controller->ErrorText().c_str());
                iFailCnt1++;
                
                usleep(100000);
            } else {
                //printf("++++++ Rpc Response is %s\n", response->text().c_str());
                iSuccCnt1++;
            }
        } while (controller->Failed());
        
        delete controller;
        delete response;
        delete request;
    } else {
        BarRequest *request = new BarRequest();
        BarResponse *response = new BarResponse();
        Controller *controller = new Controller();
        
        request->set_text("test1");
        request->set_times(1);
        
        do {
            controller->Reset();
            testStubs->bar_clt->Bar(controller, request, response, NULL);
            
            if (controller->Failed()) {
                //printf("Rpc Call Failed : %s\n", controller->ErrorText().c_str());
                iFailCnt2++;
                
                usleep(100000);
            } else {
                //printf("++++++ Rpc Response is %s\n", response->text().c_str());
                iSuccCnt2++;
            }
        } while (controller->Failed());
        
        delete controller;
        delete response;
        delete request;
    }
    
    
    return NULL;
}

static void *test_routine( void *arg )
{
    co_enable_hook_sys();
    
    printf("test_routine begin\n");
    
    int waitNum = 0;
    
    for (int i=0; i<1000000; i++) {
        if ( RoutineEnvironment::startCoroutine(rpc_routine, arg) == NULL ) {
            waitNum++;
            
            if (waitNum >= 1000) {
                usleep(10000);
            }
        } else {
            waitNum = 0;
        }
    }
    
    printf("test_routine end\n");
    
    return NULL;
}

int main(int argc, char *argv[]) {
    if(argc<4){
        printf("Usage:\n"
               "rpccli [IP] [PORT] [TASK_COUNT]\n");
        return -1;
    }
    
    char *ip = argv[1];
    unsigned short int port = atoi(argv[2]);
    int cnt = 200000;//atoi( argv[3] );
    
    struct sigaction sa;
    sa.sa_handler = SIG_IGN;
    sigaction( SIGPIPE, &sa, NULL );
    
    start_hook();
    
    IO *io = IO::create(1,1);
    assert(io);
    Client *client = new Client(io);
    Client::Channel *channel = new Client::Channel(client, ip, port, 10);
    
    
    g_stubs.foo_clt = new FooService::Stub(channel);
    g_stubs.bar_clt = new BarService::Stub(channel);
    
    io->start();
    client->start();
    
    RoutineEnvironment::startCoroutine(log_routine, NULL);
    RoutineEnvironment::startCoroutine(test_routine, &g_stubs);
    
    printf("running...\n");
    
    RoutineEnvironment::runEventLoop(100);
}