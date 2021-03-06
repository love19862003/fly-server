// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Given_nameConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Given_nameConfig.pb.h"

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

namespace DianShiTech {
namespace Config {

namespace {

const ::google::protobuf::Descriptor* Given_nameConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Given_nameConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Given_5fnameConfig_2eproto() {
  protobuf_AddDesc_Given_5fnameConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Given_nameConfig.proto");
  GOOGLE_CHECK(file != NULL);
  Given_nameConfig_descriptor_ = file->message_type(0);
  static const int Given_nameConfig_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Given_nameConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Given_nameConfig, given_name_),
  };
  Given_nameConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Given_nameConfig_descriptor_,
      Given_nameConfig::default_instance_,
      Given_nameConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Given_nameConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Given_nameConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Given_nameConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Given_5fnameConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Given_nameConfig_descriptor_, &Given_nameConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Given_5fnameConfig_2eproto() {
  delete Given_nameConfig::default_instance_;
  delete Given_nameConfig_reflection_;
}

void protobuf_AddDesc_Given_5fnameConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026Given_nameConfig.proto\022\022DianShiTech.Co"
    "nfig\032\025ConfigTypeGroup.proto\"2\n\020Given_nam"
    "eConfig\022\n\n\002id\030\001 \001(\005\022\022\n\ngiven_name\030\002 \001(\t", 119);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Given_nameConfig.proto", &protobuf_RegisterTypes);
  Given_nameConfig::default_instance_ = new Given_nameConfig();
  Given_nameConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Given_5fnameConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Given_5fnameConfig_2eproto {
  StaticDescriptorInitializer_Given_5fnameConfig_2eproto() {
    protobuf_AddDesc_Given_5fnameConfig_2eproto();
  }
} static_descriptor_initializer_Given_5fnameConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Given_nameConfig::kIdFieldNumber;
const int Given_nameConfig::kGivenNameFieldNumber;
#endif  // !_MSC_VER

Given_nameConfig::Given_nameConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Given_nameConfig::InitAsDefaultInstance() {
}

Given_nameConfig::Given_nameConfig(const Given_nameConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Given_nameConfig::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  given_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Given_nameConfig::~Given_nameConfig() {
  SharedDtor();
}

void Given_nameConfig::SharedDtor() {
  if (given_name_ != &::google::protobuf::internal::kEmptyString) {
    delete given_name_;
  }
  if (this != default_instance_) {
  }
}

void Given_nameConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Given_nameConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Given_nameConfig_descriptor_;
}

const Given_nameConfig& Given_nameConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Given_5fnameConfig_2eproto();
  return *default_instance_;
}

Given_nameConfig* Given_nameConfig::default_instance_ = NULL;

Given_nameConfig* Given_nameConfig::New() const {
  return new Given_nameConfig;
}

void Given_nameConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
    if (has_given_name()) {
      if (given_name_ != &::google::protobuf::internal::kEmptyString) {
        given_name_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Given_nameConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_given_name;
        break;
      }

      // optional string given_name = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_given_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_given_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->given_name().data(), this->given_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Given_nameConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional string given_name = 2;
  if (has_given_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->given_name().data(), this->given_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->given_name(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Given_nameConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional string given_name = 2;
  if (has_given_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->given_name().data(), this->given_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->given_name(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Given_nameConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional string given_name = 2;
    if (has_given_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->given_name());
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

void Given_nameConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Given_nameConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Given_nameConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Given_nameConfig::MergeFrom(const Given_nameConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_given_name()) {
      set_given_name(from.given_name());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Given_nameConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Given_nameConfig::CopyFrom(const Given_nameConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Given_nameConfig::IsInitialized() const {

  return true;
}

void Given_nameConfig::Swap(Given_nameConfig* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(given_name_, other->given_name_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Given_nameConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Given_nameConfig_descriptor_;
  metadata.reflection = Given_nameConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
