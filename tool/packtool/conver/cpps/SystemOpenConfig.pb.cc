// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SystemOpenConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SystemOpenConfig.pb.h"

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

const ::google::protobuf::Descriptor* SystemOpenConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SystemOpenConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_SystemOpenConfig_2eproto() {
  protobuf_AddDesc_SystemOpenConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "SystemOpenConfig.proto");
  GOOGLE_CHECK(file != NULL);
  SystemOpenConfig_descriptor_ = file->message_type(0);
  static const int SystemOpenConfig_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemOpenConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemOpenConfig, system_desc_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemOpenConfig, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemOpenConfig, type_value_),
  };
  SystemOpenConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SystemOpenConfig_descriptor_,
      SystemOpenConfig::default_instance_,
      SystemOpenConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemOpenConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemOpenConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SystemOpenConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_SystemOpenConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SystemOpenConfig_descriptor_, &SystemOpenConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_SystemOpenConfig_2eproto() {
  delete SystemOpenConfig::default_instance_;
  delete SystemOpenConfig_reflection_;
}

void protobuf_AddDesc_SystemOpenConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026SystemOpenConfig.proto\022\022DianShiTech.Co"
    "nfig\032\025ConfigTypeGroup.proto\"U\n\020SystemOpe"
    "nConfig\022\n\n\002id\030\001 \001(\005\022\023\n\013system_desc\030\002 \001(\t"
    "\022\014\n\004type\030\003 \001(\005\022\022\n\ntype_value\030\004 \001(\005", 154);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SystemOpenConfig.proto", &protobuf_RegisterTypes);
  SystemOpenConfig::default_instance_ = new SystemOpenConfig();
  SystemOpenConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_SystemOpenConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_SystemOpenConfig_2eproto {
  StaticDescriptorInitializer_SystemOpenConfig_2eproto() {
    protobuf_AddDesc_SystemOpenConfig_2eproto();
  }
} static_descriptor_initializer_SystemOpenConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int SystemOpenConfig::kIdFieldNumber;
const int SystemOpenConfig::kSystemDescFieldNumber;
const int SystemOpenConfig::kTypeFieldNumber;
const int SystemOpenConfig::kTypeValueFieldNumber;
#endif  // !_MSC_VER

SystemOpenConfig::SystemOpenConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SystemOpenConfig::InitAsDefaultInstance() {
}

SystemOpenConfig::SystemOpenConfig(const SystemOpenConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SystemOpenConfig::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  system_desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  type_ = 0;
  type_value_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SystemOpenConfig::~SystemOpenConfig() {
  SharedDtor();
}

void SystemOpenConfig::SharedDtor() {
  if (system_desc_ != &::google::protobuf::internal::kEmptyString) {
    delete system_desc_;
  }
  if (this != default_instance_) {
  }
}

void SystemOpenConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SystemOpenConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SystemOpenConfig_descriptor_;
}

const SystemOpenConfig& SystemOpenConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_SystemOpenConfig_2eproto();
  return *default_instance_;
}

SystemOpenConfig* SystemOpenConfig::default_instance_ = NULL;

SystemOpenConfig* SystemOpenConfig::New() const {
  return new SystemOpenConfig;
}

void SystemOpenConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
    if (has_system_desc()) {
      if (system_desc_ != &::google::protobuf::internal::kEmptyString) {
        system_desc_->clear();
      }
    }
    type_ = 0;
    type_value_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SystemOpenConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(18)) goto parse_system_desc;
        break;
      }

      // optional string system_desc = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_system_desc:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_system_desc()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->system_desc().data(), this->system_desc().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_type;
        break;
      }

      // optional int32 type = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_type_value;
        break;
      }

      // optional int32 type_value = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_type_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_value_)));
          set_has_type_value();
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

void SystemOpenConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional string system_desc = 2;
  if (has_system_desc()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->system_desc().data(), this->system_desc().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->system_desc(), output);
  }

  // optional int32 type = 3;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->type(), output);
  }

  // optional int32 type_value = 4;
  if (has_type_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->type_value(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* SystemOpenConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional string system_desc = 2;
  if (has_system_desc()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->system_desc().data(), this->system_desc().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->system_desc(), target);
  }

  // optional int32 type = 3;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->type(), target);
  }

  // optional int32 type_value = 4;
  if (has_type_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->type_value(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int SystemOpenConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional string system_desc = 2;
    if (has_system_desc()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->system_desc());
    }

    // optional int32 type = 3;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
    }

    // optional int32 type_value = 4;
    if (has_type_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type_value());
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

void SystemOpenConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SystemOpenConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SystemOpenConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SystemOpenConfig::MergeFrom(const SystemOpenConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_system_desc()) {
      set_system_desc(from.system_desc());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_type_value()) {
      set_type_value(from.type_value());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SystemOpenConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SystemOpenConfig::CopyFrom(const SystemOpenConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SystemOpenConfig::IsInitialized() const {

  return true;
}

void SystemOpenConfig::Swap(SystemOpenConfig* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(system_desc_, other->system_desc_);
    std::swap(type_, other->type_);
    std::swap(type_value_, other->type_value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SystemOpenConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SystemOpenConfig_descriptor_;
  metadata.reflection = SystemOpenConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
