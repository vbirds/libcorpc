// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: foo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "foo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* FooRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FooRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* FooResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FooResponse_reflection_ = NULL;
const ::google::protobuf::ServiceDescriptor* FooService_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_foo_2eproto() {
  protobuf_AddDesc_foo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "foo.proto");
  GOOGLE_CHECK(file != NULL);
  FooRequest_descriptor_ = file->message_type(0);
  static const int FooRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FooRequest, text_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FooRequest, times_),
  };
  FooRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FooRequest_descriptor_,
      FooRequest::default_instance_,
      FooRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FooRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FooRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FooRequest));
  FooResponse_descriptor_ = file->message_type(1);
  static const int FooResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FooResponse, text_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FooResponse, result_),
  };
  FooResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FooResponse_descriptor_,
      FooResponse::default_instance_,
      FooResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FooResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FooResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FooResponse));
  FooService_descriptor_ = file->service(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_foo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FooRequest_descriptor_, &FooRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FooResponse_descriptor_, &FooResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_foo_2eproto() {
  delete FooRequest::default_instance_;
  delete FooRequest_reflection_;
  delete FooResponse::default_instance_;
  delete FooResponse_reflection_;
}

void protobuf_AddDesc_foo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::corpc::protobuf_AddDesc_corpc_5foption_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\tfoo.proto\032\022corpc_option.proto\")\n\nFooRe"
    "quest\022\014\n\004text\030\001 \002(\t\022\r\n\005times\030\002 \001(\005\"+\n\013Fo"
    "oResponse\022\014\n\004text\030\001 \002(\t\022\016\n\006result\030\002 \001(\0102"
    "4\n\nFooService\022 \n\003Foo\022\013.FooRequest\032\014.FooR"
    "esponse\032\004\200\361\004\001B\003\200\001\001", 178);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "foo.proto", &protobuf_RegisterTypes);
  FooRequest::default_instance_ = new FooRequest();
  FooResponse::default_instance_ = new FooResponse();
  FooRequest::default_instance_->InitAsDefaultInstance();
  FooResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_foo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_foo_2eproto {
  StaticDescriptorInitializer_foo_2eproto() {
    protobuf_AddDesc_foo_2eproto();
  }
} static_descriptor_initializer_foo_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int FooRequest::kTextFieldNumber;
const int FooRequest::kTimesFieldNumber;
#endif  // !_MSC_VER

FooRequest::FooRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:FooRequest)
}

void FooRequest::InitAsDefaultInstance() {
}

FooRequest::FooRequest(const FooRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:FooRequest)
}

void FooRequest::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  text_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  times_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FooRequest::~FooRequest() {
  // @@protoc_insertion_point(destructor:FooRequest)
  SharedDtor();
}

void FooRequest::SharedDtor() {
  if (text_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete text_;
  }
  if (this != default_instance_) {
  }
}

void FooRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FooRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FooRequest_descriptor_;
}

const FooRequest& FooRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_foo_2eproto();
  return *default_instance_;
}

FooRequest* FooRequest::default_instance_ = NULL;

FooRequest* FooRequest::New() const {
  return new FooRequest;
}

void FooRequest::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_text()) {
      if (text_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        text_->clear();
      }
    }
    times_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool FooRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:FooRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string text = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_text()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->text().data(), this->text().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "text");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_times;
        break;
      }

      // optional int32 times = 2;
      case 2: {
        if (tag == 16) {
         parse_times:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &times_)));
          set_has_times();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:FooRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:FooRequest)
  return false;
#undef DO_
}

void FooRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:FooRequest)
  // required string text = 1;
  if (has_text()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->text().data(), this->text().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "text");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->text(), output);
  }

  // optional int32 times = 2;
  if (has_times()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->times(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:FooRequest)
}

::google::protobuf::uint8* FooRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:FooRequest)
  // required string text = 1;
  if (has_text()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->text().data(), this->text().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "text");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->text(), target);
  }

  // optional int32 times = 2;
  if (has_times()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->times(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:FooRequest)
  return target;
}

int FooRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string text = 1;
    if (has_text()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->text());
    }

    // optional int32 times = 2;
    if (has_times()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->times());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FooRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const FooRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const FooRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void FooRequest::MergeFrom(const FooRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_text()) {
      set_text(from.text());
    }
    if (from.has_times()) {
      set_times(from.times());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void FooRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FooRequest::CopyFrom(const FooRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FooRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void FooRequest::Swap(FooRequest* other) {
  if (other != this) {
    std::swap(text_, other->text_);
    std::swap(times_, other->times_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata FooRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FooRequest_descriptor_;
  metadata.reflection = FooRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int FooResponse::kTextFieldNumber;
const int FooResponse::kResultFieldNumber;
#endif  // !_MSC_VER

FooResponse::FooResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:FooResponse)
}

void FooResponse::InitAsDefaultInstance() {
}

FooResponse::FooResponse(const FooResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:FooResponse)
}

void FooResponse::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  text_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  result_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FooResponse::~FooResponse() {
  // @@protoc_insertion_point(destructor:FooResponse)
  SharedDtor();
}

void FooResponse::SharedDtor() {
  if (text_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete text_;
  }
  if (this != default_instance_) {
  }
}

void FooResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FooResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FooResponse_descriptor_;
}

const FooResponse& FooResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_foo_2eproto();
  return *default_instance_;
}

FooResponse* FooResponse::default_instance_ = NULL;

FooResponse* FooResponse::New() const {
  return new FooResponse;
}

void FooResponse::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_text()) {
      if (text_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        text_->clear();
      }
    }
    result_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool FooResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:FooResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string text = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_text()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->text().data(), this->text().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "text");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_result;
        break;
      }

      // optional bool result = 2;
      case 2: {
        if (tag == 16) {
         parse_result:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &result_)));
          set_has_result();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:FooResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:FooResponse)
  return false;
#undef DO_
}

void FooResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:FooResponse)
  // required string text = 1;
  if (has_text()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->text().data(), this->text().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "text");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->text(), output);
  }

  // optional bool result = 2;
  if (has_result()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->result(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:FooResponse)
}

::google::protobuf::uint8* FooResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:FooResponse)
  // required string text = 1;
  if (has_text()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->text().data(), this->text().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "text");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->text(), target);
  }

  // optional bool result = 2;
  if (has_result()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->result(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:FooResponse)
  return target;
}

int FooResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string text = 1;
    if (has_text()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->text());
    }

    // optional bool result = 2;
    if (has_result()) {
      total_size += 1 + 1;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FooResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const FooResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const FooResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void FooResponse::MergeFrom(const FooResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_text()) {
      set_text(from.text());
    }
    if (from.has_result()) {
      set_result(from.result());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void FooResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FooResponse::CopyFrom(const FooResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FooResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void FooResponse::Swap(FooResponse* other) {
  if (other != this) {
    std::swap(text_, other->text_);
    std::swap(result_, other->result_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata FooResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FooResponse_descriptor_;
  metadata.reflection = FooResponse_reflection_;
  return metadata;
}


// ===================================================================

FooService::~FooService() {}

const ::google::protobuf::ServiceDescriptor* FooService::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FooService_descriptor_;
}

const ::google::protobuf::ServiceDescriptor* FooService::GetDescriptor() {
  protobuf_AssignDescriptorsOnce();
  return FooService_descriptor_;
}

void FooService::Foo(::google::protobuf::RpcController* controller,
                         const ::FooRequest*,
                         ::FooResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method Foo() not implemented.");
  done->Run();
}

void FooService::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), FooService_descriptor_);
  switch(method->index()) {
    case 0:
      Foo(controller,
             ::google::protobuf::down_cast<const ::FooRequest*>(request),
             ::google::protobuf::down_cast< ::FooResponse*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& FooService::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::FooRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

const ::google::protobuf::Message& FooService::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::FooResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

FooService_Stub::FooService_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
FooService_Stub::FooService_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
FooService_Stub::~FooService_Stub() {
  if (owns_channel_) delete channel_;
}

void FooService_Stub::Foo(::google::protobuf::RpcController* controller,
                              const ::FooRequest* request,
                              ::FooResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
