// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bar.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "bar.pb.h"

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

const ::google::protobuf::Descriptor* BarRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BarRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* BarResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BarResponse_reflection_ = NULL;
const ::google::protobuf::ServiceDescriptor* BarService_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_bar_2eproto() {
  protobuf_AddDesc_bar_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "bar.proto");
  GOOGLE_CHECK(file != NULL);
  BarRequest_descriptor_ = file->message_type(0);
  static const int BarRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BarRequest, text_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BarRequest, times_),
  };
  BarRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BarRequest_descriptor_,
      BarRequest::default_instance_,
      BarRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BarRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BarRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BarRequest));
  BarResponse_descriptor_ = file->message_type(1);
  static const int BarResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BarResponse, text_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BarResponse, result_),
  };
  BarResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BarResponse_descriptor_,
      BarResponse::default_instance_,
      BarResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BarResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BarResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BarResponse));
  BarService_descriptor_ = file->service(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_bar_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BarRequest_descriptor_, &BarRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BarResponse_descriptor_, &BarResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_bar_2eproto() {
  delete BarRequest::default_instance_;
  delete BarRequest_reflection_;
  delete BarResponse::default_instance_;
  delete BarResponse_reflection_;
}

void protobuf_AddDesc_bar_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::corpc::protobuf_AddDesc_corpc_5foption_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\tbar.proto\032\022corpc_option.proto\")\n\nBarRe"
    "quest\022\014\n\004text\030\001 \002(\t\022\r\n\005times\030\002 \001(\005\"+\n\013Ba"
    "rResponse\022\014\n\004text\030\001 \002(\t\022\016\n\006result\030\002 \001(\0102"
    ":\n\nBarService\022&\n\003Bar\022\013.BarRequest\032\014.BarR"
    "esponse\"\004\220\361\004\001\032\004\200\361\004\002B\003\200\001\001", 184);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "bar.proto", &protobuf_RegisterTypes);
  BarRequest::default_instance_ = new BarRequest();
  BarResponse::default_instance_ = new BarResponse();
  BarRequest::default_instance_->InitAsDefaultInstance();
  BarResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_bar_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_bar_2eproto {
  StaticDescriptorInitializer_bar_2eproto() {
    protobuf_AddDesc_bar_2eproto();
  }
} static_descriptor_initializer_bar_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int BarRequest::kTextFieldNumber;
const int BarRequest::kTimesFieldNumber;
#endif  // !_MSC_VER

BarRequest::BarRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:BarRequest)
}

void BarRequest::InitAsDefaultInstance() {
}

BarRequest::BarRequest(const BarRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:BarRequest)
}

void BarRequest::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  text_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  times_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BarRequest::~BarRequest() {
  // @@protoc_insertion_point(destructor:BarRequest)
  SharedDtor();
}

void BarRequest::SharedDtor() {
  if (text_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete text_;
  }
  if (this != default_instance_) {
  }
}

void BarRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BarRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BarRequest_descriptor_;
}

const BarRequest& BarRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_bar_2eproto();
  return *default_instance_;
}

BarRequest* BarRequest::default_instance_ = NULL;

BarRequest* BarRequest::New() const {
  return new BarRequest;
}

void BarRequest::Clear() {
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

bool BarRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:BarRequest)
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
  // @@protoc_insertion_point(parse_success:BarRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:BarRequest)
  return false;
#undef DO_
}

void BarRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:BarRequest)
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
  // @@protoc_insertion_point(serialize_end:BarRequest)
}

::google::protobuf::uint8* BarRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:BarRequest)
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
  // @@protoc_insertion_point(serialize_to_array_end:BarRequest)
  return target;
}

int BarRequest::ByteSize() const {
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

void BarRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BarRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BarRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BarRequest::MergeFrom(const BarRequest& from) {
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

void BarRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BarRequest::CopyFrom(const BarRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BarRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void BarRequest::Swap(BarRequest* other) {
  if (other != this) {
    std::swap(text_, other->text_);
    std::swap(times_, other->times_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BarRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BarRequest_descriptor_;
  metadata.reflection = BarRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int BarResponse::kTextFieldNumber;
const int BarResponse::kResultFieldNumber;
#endif  // !_MSC_VER

BarResponse::BarResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:BarResponse)
}

void BarResponse::InitAsDefaultInstance() {
}

BarResponse::BarResponse(const BarResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:BarResponse)
}

void BarResponse::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  text_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  result_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BarResponse::~BarResponse() {
  // @@protoc_insertion_point(destructor:BarResponse)
  SharedDtor();
}

void BarResponse::SharedDtor() {
  if (text_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete text_;
  }
  if (this != default_instance_) {
  }
}

void BarResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BarResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BarResponse_descriptor_;
}

const BarResponse& BarResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_bar_2eproto();
  return *default_instance_;
}

BarResponse* BarResponse::default_instance_ = NULL;

BarResponse* BarResponse::New() const {
  return new BarResponse;
}

void BarResponse::Clear() {
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

bool BarResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:BarResponse)
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
  // @@protoc_insertion_point(parse_success:BarResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:BarResponse)
  return false;
#undef DO_
}

void BarResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:BarResponse)
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
  // @@protoc_insertion_point(serialize_end:BarResponse)
}

::google::protobuf::uint8* BarResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:BarResponse)
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
  // @@protoc_insertion_point(serialize_to_array_end:BarResponse)
  return target;
}

int BarResponse::ByteSize() const {
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

void BarResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BarResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BarResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BarResponse::MergeFrom(const BarResponse& from) {
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

void BarResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BarResponse::CopyFrom(const BarResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BarResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void BarResponse::Swap(BarResponse* other) {
  if (other != this) {
    std::swap(text_, other->text_);
    std::swap(result_, other->result_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BarResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BarResponse_descriptor_;
  metadata.reflection = BarResponse_reflection_;
  return metadata;
}


// ===================================================================

BarService::~BarService() {}

const ::google::protobuf::ServiceDescriptor* BarService::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BarService_descriptor_;
}

const ::google::protobuf::ServiceDescriptor* BarService::GetDescriptor() {
  protobuf_AssignDescriptorsOnce();
  return BarService_descriptor_;
}

void BarService::Bar(::google::protobuf::RpcController* controller,
                         const ::BarRequest*,
                         ::BarResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method Bar() not implemented.");
  done->Run();
}

void BarService::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), BarService_descriptor_);
  switch(method->index()) {
    case 0:
      Bar(controller,
             ::google::protobuf::down_cast<const ::BarRequest*>(request),
             ::google::protobuf::down_cast< ::BarResponse*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& BarService::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::BarRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

const ::google::protobuf::Message& BarService::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::BarResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

BarService_Stub::BarService_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
BarService_Stub::BarService_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
BarService_Stub::~BarService_Stub() {
  if (owns_channel_) delete channel_;
}

void BarService_Stub::Bar(::google::protobuf::RpcController* controller,
                              const ::BarRequest* request,
                              ::BarResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)