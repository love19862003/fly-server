// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: QueryGateStateLG2GT.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "QueryGateStateLG2GT.pb.h"

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

namespace Pro {

namespace {

const ::google::protobuf::Descriptor* QueryGateStateLG2GT_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  QueryGateStateLG2GT_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_QueryGateStateLG2GT_2eproto() {
  protobuf_AddDesc_QueryGateStateLG2GT_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "QueryGateStateLG2GT.proto");
  GOOGLE_CHECK(file != NULL);
  QueryGateStateLG2GT_descriptor_ = file->message_type(0);
  static const int QueryGateStateLG2GT_offsets_[1] = {
  };
  QueryGateStateLG2GT_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      QueryGateStateLG2GT_descriptor_,
      QueryGateStateLG2GT::default_instance_,
      QueryGateStateLG2GT_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QueryGateStateLG2GT, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QueryGateStateLG2GT, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(QueryGateStateLG2GT));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_QueryGateStateLG2GT_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    QueryGateStateLG2GT_descriptor_, &QueryGateStateLG2GT::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_QueryGateStateLG2GT_2eproto() {
  delete QueryGateStateLG2GT::default_instance_;
  delete QueryGateStateLG2GT_reflection_;
}

void protobuf_AddDesc_QueryGateStateLG2GT_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031QueryGateStateLG2GT.proto\022\003Pro\"\025\n\023Quer"
    "yGateStateLG2GT", 55);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "QueryGateStateLG2GT.proto", &protobuf_RegisterTypes);
  QueryGateStateLG2GT::default_instance_ = new QueryGateStateLG2GT();
  QueryGateStateLG2GT::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_QueryGateStateLG2GT_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_QueryGateStateLG2GT_2eproto {
  StaticDescriptorInitializer_QueryGateStateLG2GT_2eproto() {
    protobuf_AddDesc_QueryGateStateLG2GT_2eproto();
  }
} static_descriptor_initializer_QueryGateStateLG2GT_2eproto_;

// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

QueryGateStateLG2GT::QueryGateStateLG2GT()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void QueryGateStateLG2GT::InitAsDefaultInstance() {
}

QueryGateStateLG2GT::QueryGateStateLG2GT(const QueryGateStateLG2GT& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void QueryGateStateLG2GT::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

QueryGateStateLG2GT::~QueryGateStateLG2GT() {
  SharedDtor();
}

void QueryGateStateLG2GT::SharedDtor() {
  if (this != default_instance_) {
  }
}

void QueryGateStateLG2GT::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* QueryGateStateLG2GT::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return QueryGateStateLG2GT_descriptor_;
}

const QueryGateStateLG2GT& QueryGateStateLG2GT::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_QueryGateStateLG2GT_2eproto();
  return *default_instance_;
}

QueryGateStateLG2GT* QueryGateStateLG2GT::default_instance_ = NULL;

QueryGateStateLG2GT* QueryGateStateLG2GT::New() const {
  return new QueryGateStateLG2GT;
}

void QueryGateStateLG2GT::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool QueryGateStateLG2GT::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      return true;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
  return true;
#undef DO_
}

void QueryGateStateLG2GT::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* QueryGateStateLG2GT::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int QueryGateStateLG2GT::ByteSize() const {
  int total_size = 0;

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

void QueryGateStateLG2GT::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const QueryGateStateLG2GT* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const QueryGateStateLG2GT*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void QueryGateStateLG2GT::MergeFrom(const QueryGateStateLG2GT& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void QueryGateStateLG2GT::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void QueryGateStateLG2GT::CopyFrom(const QueryGateStateLG2GT& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QueryGateStateLG2GT::IsInitialized() const {

  return true;
}

void QueryGateStateLG2GT::Swap(QueryGateStateLG2GT* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata QueryGateStateLG2GT::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = QueryGateStateLG2GT_descriptor_;
  metadata.reflection = QueryGateStateLG2GT_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Pro

// @@protoc_insertion_point(global_scope)
