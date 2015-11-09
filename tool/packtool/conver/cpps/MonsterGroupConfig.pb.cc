// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MonsterGroupConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MonsterGroupConfig.pb.h"

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

const ::google::protobuf::Descriptor* MonsterGroupConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MonsterGroupConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MonsterGroupConfig_2eproto() {
  protobuf_AddDesc_MonsterGroupConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MonsterGroupConfig.proto");
  GOOGLE_CHECK(file != NULL);
  MonsterGroupConfig_descriptor_ = file->message_type(0);
  static const int MonsterGroupConfig_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MonsterGroupConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MonsterGroupConfig, monster_group_),
  };
  MonsterGroupConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MonsterGroupConfig_descriptor_,
      MonsterGroupConfig::default_instance_,
      MonsterGroupConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MonsterGroupConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MonsterGroupConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MonsterGroupConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MonsterGroupConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MonsterGroupConfig_descriptor_, &MonsterGroupConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MonsterGroupConfig_2eproto() {
  delete MonsterGroupConfig::default_instance_;
  delete MonsterGroupConfig_reflection_;
}

void protobuf_AddDesc_MonsterGroupConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030MonsterGroupConfig.proto\022\022DianShiTech."
    "Config\032\025ConfigTypeGroup.proto\"\\\n\022Monster"
    "GroupConfig\022\n\n\002id\030\001 \001(\005\022:\n\rmonster_group"
    "\030\002 \003(\0132#.DianShiTech.Config.ConfigTypeGr"
    "oup", 163);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MonsterGroupConfig.proto", &protobuf_RegisterTypes);
  MonsterGroupConfig::default_instance_ = new MonsterGroupConfig();
  MonsterGroupConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MonsterGroupConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MonsterGroupConfig_2eproto {
  StaticDescriptorInitializer_MonsterGroupConfig_2eproto() {
    protobuf_AddDesc_MonsterGroupConfig_2eproto();
  }
} static_descriptor_initializer_MonsterGroupConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MonsterGroupConfig::kIdFieldNumber;
const int MonsterGroupConfig::kMonsterGroupFieldNumber;
#endif  // !_MSC_VER

MonsterGroupConfig::MonsterGroupConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MonsterGroupConfig::InitAsDefaultInstance() {
}

MonsterGroupConfig::MonsterGroupConfig(const MonsterGroupConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MonsterGroupConfig::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MonsterGroupConfig::~MonsterGroupConfig() {
  SharedDtor();
}

void MonsterGroupConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MonsterGroupConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MonsterGroupConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MonsterGroupConfig_descriptor_;
}

const MonsterGroupConfig& MonsterGroupConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MonsterGroupConfig_2eproto();
  return *default_instance_;
}

MonsterGroupConfig* MonsterGroupConfig::default_instance_ = NULL;

MonsterGroupConfig* MonsterGroupConfig::New() const {
  return new MonsterGroupConfig;
}

void MonsterGroupConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
  }
  monster_group_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MonsterGroupConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(18)) goto parse_monster_group;
        break;
      }

      // repeated .DianShiTech.Config.ConfigTypeGroup monster_group = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_monster_group:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_monster_group()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_monster_group;
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

void MonsterGroupConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // repeated .DianShiTech.Config.ConfigTypeGroup monster_group = 2;
  for (int i = 0; i < this->monster_group_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->monster_group(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MonsterGroupConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // repeated .DianShiTech.Config.ConfigTypeGroup monster_group = 2;
  for (int i = 0; i < this->monster_group_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->monster_group(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MonsterGroupConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

  }
  // repeated .DianShiTech.Config.ConfigTypeGroup monster_group = 2;
  total_size += 1 * this->monster_group_size();
  for (int i = 0; i < this->monster_group_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->monster_group(i));
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

void MonsterGroupConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MonsterGroupConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MonsterGroupConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MonsterGroupConfig::MergeFrom(const MonsterGroupConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  monster_group_.MergeFrom(from.monster_group_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MonsterGroupConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MonsterGroupConfig::CopyFrom(const MonsterGroupConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MonsterGroupConfig::IsInitialized() const {

  return true;
}

void MonsterGroupConfig::Swap(MonsterGroupConfig* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    monster_group_.Swap(&other->monster_group_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MonsterGroupConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MonsterGroupConfig_descriptor_;
  metadata.reflection = MonsterGroupConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
