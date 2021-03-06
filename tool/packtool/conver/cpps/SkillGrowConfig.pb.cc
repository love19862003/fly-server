// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SkillGrowConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SkillGrowConfig.pb.h"

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

const ::google::protobuf::Descriptor* SkillGrowConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SkillGrowConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_SkillGrowConfig_2eproto() {
  protobuf_AddDesc_SkillGrowConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "SkillGrowConfig.proto");
  GOOGLE_CHECK(file != NULL);
  SkillGrowConfig_descriptor_ = file->message_type(0);
  static const int SkillGrowConfig_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkillGrowConfig, max_level_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkillGrowConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkillGrowConfig, min_level_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkillGrowConfig, rate_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkillGrowConfig, skill_id_),
  };
  SkillGrowConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SkillGrowConfig_descriptor_,
      SkillGrowConfig::default_instance_,
      SkillGrowConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkillGrowConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkillGrowConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SkillGrowConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_SkillGrowConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SkillGrowConfig_descriptor_, &SkillGrowConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_SkillGrowConfig_2eproto() {
  delete SkillGrowConfig::default_instance_;
  delete SkillGrowConfig_reflection_;
}

void protobuf_AddDesc_SkillGrowConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025SkillGrowConfig.proto\022\022DianShiTech.Con"
    "fig\032\025ConfigTypeGroup.proto\"c\n\017SkillGrowC"
    "onfig\022\021\n\tmax_level\030\004 \001(\005\022\n\n\002id\030\001 \001(\005\022\021\n\t"
    "min_level\030\003 \001(\005\022\014\n\004rate\030\005 \003(\005\022\020\n\010skill_i"
    "d\030\002 \001(\005", 167);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SkillGrowConfig.proto", &protobuf_RegisterTypes);
  SkillGrowConfig::default_instance_ = new SkillGrowConfig();
  SkillGrowConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_SkillGrowConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_SkillGrowConfig_2eproto {
  StaticDescriptorInitializer_SkillGrowConfig_2eproto() {
    protobuf_AddDesc_SkillGrowConfig_2eproto();
  }
} static_descriptor_initializer_SkillGrowConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int SkillGrowConfig::kMaxLevelFieldNumber;
const int SkillGrowConfig::kIdFieldNumber;
const int SkillGrowConfig::kMinLevelFieldNumber;
const int SkillGrowConfig::kRateFieldNumber;
const int SkillGrowConfig::kSkillIdFieldNumber;
#endif  // !_MSC_VER

SkillGrowConfig::SkillGrowConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SkillGrowConfig::InitAsDefaultInstance() {
}

SkillGrowConfig::SkillGrowConfig(const SkillGrowConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SkillGrowConfig::SharedCtor() {
  _cached_size_ = 0;
  max_level_ = 0;
  id_ = 0;
  min_level_ = 0;
  skill_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SkillGrowConfig::~SkillGrowConfig() {
  SharedDtor();
}

void SkillGrowConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void SkillGrowConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SkillGrowConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SkillGrowConfig_descriptor_;
}

const SkillGrowConfig& SkillGrowConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_SkillGrowConfig_2eproto();
  return *default_instance_;
}

SkillGrowConfig* SkillGrowConfig::default_instance_ = NULL;

SkillGrowConfig* SkillGrowConfig::New() const {
  return new SkillGrowConfig;
}

void SkillGrowConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    max_level_ = 0;
    id_ = 0;
    min_level_ = 0;
    skill_id_ = 0;
  }
  rate_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SkillGrowConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_skill_id;
        break;
      }

      // optional int32 skill_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_skill_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &skill_id_)));
          set_has_skill_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_min_level;
        break;
      }

      // optional int32 min_level = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_min_level:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &min_level_)));
          set_has_min_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_max_level;
        break;
      }

      // optional int32 max_level = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_max_level:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &max_level_)));
          set_has_max_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_rate;
        break;
      }

      // repeated int32 rate = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rate:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 40, input, this->mutable_rate())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_rate())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_rate;
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

void SkillGrowConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 skill_id = 2;
  if (has_skill_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->skill_id(), output);
  }

  // optional int32 min_level = 3;
  if (has_min_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->min_level(), output);
  }

  // optional int32 max_level = 4;
  if (has_max_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->max_level(), output);
  }

  // repeated int32 rate = 5;
  for (int i = 0; i < this->rate_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      5, this->rate(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* SkillGrowConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 skill_id = 2;
  if (has_skill_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->skill_id(), target);
  }

  // optional int32 min_level = 3;
  if (has_min_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->min_level(), target);
  }

  // optional int32 max_level = 4;
  if (has_max_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->max_level(), target);
  }

  // repeated int32 rate = 5;
  for (int i = 0; i < this->rate_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(5, this->rate(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int SkillGrowConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 max_level = 4;
    if (has_max_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->max_level());
    }

    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 min_level = 3;
    if (has_min_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->min_level());
    }

    // optional int32 skill_id = 2;
    if (has_skill_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->skill_id());
    }

  }
  // repeated int32 rate = 5;
  {
    int data_size = 0;
    for (int i = 0; i < this->rate_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->rate(i));
    }
    total_size += 1 * this->rate_size() + data_size;
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

void SkillGrowConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SkillGrowConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SkillGrowConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SkillGrowConfig::MergeFrom(const SkillGrowConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  rate_.MergeFrom(from.rate_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_max_level()) {
      set_max_level(from.max_level());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_min_level()) {
      set_min_level(from.min_level());
    }
    if (from.has_skill_id()) {
      set_skill_id(from.skill_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SkillGrowConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SkillGrowConfig::CopyFrom(const SkillGrowConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SkillGrowConfig::IsInitialized() const {

  return true;
}

void SkillGrowConfig::Swap(SkillGrowConfig* other) {
  if (other != this) {
    std::swap(max_level_, other->max_level_);
    std::swap(id_, other->id_);
    std::swap(min_level_, other->min_level_);
    rate_.Swap(&other->rate_);
    std::swap(skill_id_, other->skill_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SkillGrowConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SkillGrowConfig_descriptor_;
  metadata.reflection = SkillGrowConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
