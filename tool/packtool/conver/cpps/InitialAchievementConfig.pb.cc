// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: InitialAchievementConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "InitialAchievementConfig.pb.h"

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

const ::google::protobuf::Descriptor* InitialAchievementConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  InitialAchievementConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_InitialAchievementConfig_2eproto() {
  protobuf_AddDesc_InitialAchievementConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "InitialAchievementConfig.proto");
  GOOGLE_CHECK(file != NULL);
  InitialAchievementConfig_descriptor_ = file->message_type(0);
  static const int InitialAchievementConfig_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InitialAchievementConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InitialAchievementConfig, initial_achievement_),
  };
  InitialAchievementConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      InitialAchievementConfig_descriptor_,
      InitialAchievementConfig::default_instance_,
      InitialAchievementConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InitialAchievementConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InitialAchievementConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(InitialAchievementConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_InitialAchievementConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    InitialAchievementConfig_descriptor_, &InitialAchievementConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_InitialAchievementConfig_2eproto() {
  delete InitialAchievementConfig::default_instance_;
  delete InitialAchievementConfig_reflection_;
}

void protobuf_AddDesc_InitialAchievementConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\036InitialAchievementConfig.proto\022\022DianSh"
    "iTech.Config\032\025ConfigTypeGroup.proto\"C\n\030I"
    "nitialAchievementConfig\022\n\n\002id\030\001 \001(\005\022\033\n\023i"
    "nitial_achievement\030\002 \003(\005", 144);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "InitialAchievementConfig.proto", &protobuf_RegisterTypes);
  InitialAchievementConfig::default_instance_ = new InitialAchievementConfig();
  InitialAchievementConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_InitialAchievementConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_InitialAchievementConfig_2eproto {
  StaticDescriptorInitializer_InitialAchievementConfig_2eproto() {
    protobuf_AddDesc_InitialAchievementConfig_2eproto();
  }
} static_descriptor_initializer_InitialAchievementConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int InitialAchievementConfig::kIdFieldNumber;
const int InitialAchievementConfig::kInitialAchievementFieldNumber;
#endif  // !_MSC_VER

InitialAchievementConfig::InitialAchievementConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void InitialAchievementConfig::InitAsDefaultInstance() {
}

InitialAchievementConfig::InitialAchievementConfig(const InitialAchievementConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void InitialAchievementConfig::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

InitialAchievementConfig::~InitialAchievementConfig() {
  SharedDtor();
}

void InitialAchievementConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void InitialAchievementConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* InitialAchievementConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return InitialAchievementConfig_descriptor_;
}

const InitialAchievementConfig& InitialAchievementConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_InitialAchievementConfig_2eproto();
  return *default_instance_;
}

InitialAchievementConfig* InitialAchievementConfig::default_instance_ = NULL;

InitialAchievementConfig* InitialAchievementConfig::New() const {
  return new InitialAchievementConfig;
}

void InitialAchievementConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
  }
  initial_achievement_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool InitialAchievementConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_initial_achievement;
        break;
      }

      // repeated int32 initial_achievement = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_initial_achievement:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 16, input, this->mutable_initial_achievement())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_initial_achievement())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_initial_achievement;
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

void InitialAchievementConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // repeated int32 initial_achievement = 2;
  for (int i = 0; i < this->initial_achievement_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      2, this->initial_achievement(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* InitialAchievementConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // repeated int32 initial_achievement = 2;
  for (int i = 0; i < this->initial_achievement_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(2, this->initial_achievement(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int InitialAchievementConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

  }
  // repeated int32 initial_achievement = 2;
  {
    int data_size = 0;
    for (int i = 0; i < this->initial_achievement_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->initial_achievement(i));
    }
    total_size += 1 * this->initial_achievement_size() + data_size;
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

void InitialAchievementConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const InitialAchievementConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const InitialAchievementConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void InitialAchievementConfig::MergeFrom(const InitialAchievementConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  initial_achievement_.MergeFrom(from.initial_achievement_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void InitialAchievementConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InitialAchievementConfig::CopyFrom(const InitialAchievementConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InitialAchievementConfig::IsInitialized() const {

  return true;
}

void InitialAchievementConfig::Swap(InitialAchievementConfig* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    initial_achievement_.Swap(&other->initial_achievement_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata InitialAchievementConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = InitialAchievementConfig_descriptor_;
  metadata.reflection = InitialAchievementConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
