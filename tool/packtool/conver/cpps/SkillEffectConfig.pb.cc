// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SkillEffectConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SkillEffectConfig.pb.h"

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

const ::google::protobuf::Descriptor* SkillEffectConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SkillEffectConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_SkillEffectConfig_2eproto() {
  protobuf_AddDesc_SkillEffectConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "SkillEffectConfig.proto");
  GOOGLE_CHECK(file != NULL);
  SkillEffectConfig_descriptor_ = file->message_type(0);
  static const int SkillEffectConfig_offsets_[10] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkillEffectConfig, is_src_flip_y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkillEffectConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkillEffectConfig, selft_effect_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkillEffectConfig, target_effect_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkillEffectConfig, is_dst_flip_y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkillEffectConfig, is_shake_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkillEffectConfig, self_effect_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkillEffectConfig, target_effect_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkillEffectConfig, damage_times_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkillEffectConfig, sound_effect_),
  };
  SkillEffectConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SkillEffectConfig_descriptor_,
      SkillEffectConfig::default_instance_,
      SkillEffectConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkillEffectConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkillEffectConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SkillEffectConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_SkillEffectConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SkillEffectConfig_descriptor_, &SkillEffectConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_SkillEffectConfig_2eproto() {
  delete SkillEffectConfig::default_instance_;
  delete SkillEffectConfig_reflection_;
}

void protobuf_AddDesc_SkillEffectConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027SkillEffectConfig.proto\022\022DianShiTech.C"
    "onfig\032\025ConfigTypeGroup.proto\"\356\001\n\021SkillEf"
    "fectConfig\022\025\n\ris_src_flip_y\030\007 \001(\005\022\n\n\002id\030"
    "\001 \001(\005\022\031\n\021selft_effect_time\030\003 \001(\005\022\032\n\022targ"
    "et_effect_time\030\006 \001(\005\022\025\n\ris_dst_flip_y\030\010 "
    "\001(\005\022\020\n\010is_shake\030\t \001(\005\022\023\n\013self_effect\030\002 \001"
    "(\005\022\025\n\rtarget_effect\030\004 \001(\005\022\024\n\014damage_time"
    "s\030\n \001(\005\022\024\n\014sound_effect\030\013 \001(\005", 309);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SkillEffectConfig.proto", &protobuf_RegisterTypes);
  SkillEffectConfig::default_instance_ = new SkillEffectConfig();
  SkillEffectConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_SkillEffectConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_SkillEffectConfig_2eproto {
  StaticDescriptorInitializer_SkillEffectConfig_2eproto() {
    protobuf_AddDesc_SkillEffectConfig_2eproto();
  }
} static_descriptor_initializer_SkillEffectConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int SkillEffectConfig::kIsSrcFlipYFieldNumber;
const int SkillEffectConfig::kIdFieldNumber;
const int SkillEffectConfig::kSelftEffectTimeFieldNumber;
const int SkillEffectConfig::kTargetEffectTimeFieldNumber;
const int SkillEffectConfig::kIsDstFlipYFieldNumber;
const int SkillEffectConfig::kIsShakeFieldNumber;
const int SkillEffectConfig::kSelfEffectFieldNumber;
const int SkillEffectConfig::kTargetEffectFieldNumber;
const int SkillEffectConfig::kDamageTimesFieldNumber;
const int SkillEffectConfig::kSoundEffectFieldNumber;
#endif  // !_MSC_VER

SkillEffectConfig::SkillEffectConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SkillEffectConfig::InitAsDefaultInstance() {
}

SkillEffectConfig::SkillEffectConfig(const SkillEffectConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SkillEffectConfig::SharedCtor() {
  _cached_size_ = 0;
  is_src_flip_y_ = 0;
  id_ = 0;
  selft_effect_time_ = 0;
  target_effect_time_ = 0;
  is_dst_flip_y_ = 0;
  is_shake_ = 0;
  self_effect_ = 0;
  target_effect_ = 0;
  damage_times_ = 0;
  sound_effect_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SkillEffectConfig::~SkillEffectConfig() {
  SharedDtor();
}

void SkillEffectConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void SkillEffectConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SkillEffectConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SkillEffectConfig_descriptor_;
}

const SkillEffectConfig& SkillEffectConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_SkillEffectConfig_2eproto();
  return *default_instance_;
}

SkillEffectConfig* SkillEffectConfig::default_instance_ = NULL;

SkillEffectConfig* SkillEffectConfig::New() const {
  return new SkillEffectConfig;
}

void SkillEffectConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    is_src_flip_y_ = 0;
    id_ = 0;
    selft_effect_time_ = 0;
    target_effect_time_ = 0;
    is_dst_flip_y_ = 0;
    is_shake_ = 0;
    self_effect_ = 0;
    target_effect_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    damage_times_ = 0;
    sound_effect_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SkillEffectConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_self_effect;
        break;
      }

      // optional int32 self_effect = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_self_effect:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &self_effect_)));
          set_has_self_effect();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_selft_effect_time;
        break;
      }

      // optional int32 selft_effect_time = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_selft_effect_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &selft_effect_time_)));
          set_has_selft_effect_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_target_effect;
        break;
      }

      // optional int32 target_effect = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_target_effect:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &target_effect_)));
          set_has_target_effect();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_target_effect_time;
        break;
      }

      // optional int32 target_effect_time = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_target_effect_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &target_effect_time_)));
          set_has_target_effect_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_is_src_flip_y;
        break;
      }

      // optional int32 is_src_flip_y = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_is_src_flip_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &is_src_flip_y_)));
          set_has_is_src_flip_y();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_is_dst_flip_y;
        break;
      }

      // optional int32 is_dst_flip_y = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_is_dst_flip_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &is_dst_flip_y_)));
          set_has_is_dst_flip_y();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_is_shake;
        break;
      }

      // optional int32 is_shake = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_is_shake:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &is_shake_)));
          set_has_is_shake();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_damage_times;
        break;
      }

      // optional int32 damage_times = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_damage_times:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &damage_times_)));
          set_has_damage_times();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_sound_effect;
        break;
      }

      // optional int32 sound_effect = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sound_effect:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sound_effect_)));
          set_has_sound_effect();
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

void SkillEffectConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 self_effect = 2;
  if (has_self_effect()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->self_effect(), output);
  }

  // optional int32 selft_effect_time = 3;
  if (has_selft_effect_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->selft_effect_time(), output);
  }

  // optional int32 target_effect = 4;
  if (has_target_effect()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->target_effect(), output);
  }

  // optional int32 target_effect_time = 6;
  if (has_target_effect_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->target_effect_time(), output);
  }

  // optional int32 is_src_flip_y = 7;
  if (has_is_src_flip_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->is_src_flip_y(), output);
  }

  // optional int32 is_dst_flip_y = 8;
  if (has_is_dst_flip_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->is_dst_flip_y(), output);
  }

  // optional int32 is_shake = 9;
  if (has_is_shake()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->is_shake(), output);
  }

  // optional int32 damage_times = 10;
  if (has_damage_times()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->damage_times(), output);
  }

  // optional int32 sound_effect = 11;
  if (has_sound_effect()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(11, this->sound_effect(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* SkillEffectConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 self_effect = 2;
  if (has_self_effect()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->self_effect(), target);
  }

  // optional int32 selft_effect_time = 3;
  if (has_selft_effect_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->selft_effect_time(), target);
  }

  // optional int32 target_effect = 4;
  if (has_target_effect()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->target_effect(), target);
  }

  // optional int32 target_effect_time = 6;
  if (has_target_effect_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->target_effect_time(), target);
  }

  // optional int32 is_src_flip_y = 7;
  if (has_is_src_flip_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->is_src_flip_y(), target);
  }

  // optional int32 is_dst_flip_y = 8;
  if (has_is_dst_flip_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->is_dst_flip_y(), target);
  }

  // optional int32 is_shake = 9;
  if (has_is_shake()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->is_shake(), target);
  }

  // optional int32 damage_times = 10;
  if (has_damage_times()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->damage_times(), target);
  }

  // optional int32 sound_effect = 11;
  if (has_sound_effect()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(11, this->sound_effect(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int SkillEffectConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 is_src_flip_y = 7;
    if (has_is_src_flip_y()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->is_src_flip_y());
    }

    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 selft_effect_time = 3;
    if (has_selft_effect_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->selft_effect_time());
    }

    // optional int32 target_effect_time = 6;
    if (has_target_effect_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->target_effect_time());
    }

    // optional int32 is_dst_flip_y = 8;
    if (has_is_dst_flip_y()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->is_dst_flip_y());
    }

    // optional int32 is_shake = 9;
    if (has_is_shake()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->is_shake());
    }

    // optional int32 self_effect = 2;
    if (has_self_effect()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->self_effect());
    }

    // optional int32 target_effect = 4;
    if (has_target_effect()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->target_effect());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int32 damage_times = 10;
    if (has_damage_times()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->damage_times());
    }

    // optional int32 sound_effect = 11;
    if (has_sound_effect()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->sound_effect());
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

void SkillEffectConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SkillEffectConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SkillEffectConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SkillEffectConfig::MergeFrom(const SkillEffectConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_is_src_flip_y()) {
      set_is_src_flip_y(from.is_src_flip_y());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_selft_effect_time()) {
      set_selft_effect_time(from.selft_effect_time());
    }
    if (from.has_target_effect_time()) {
      set_target_effect_time(from.target_effect_time());
    }
    if (from.has_is_dst_flip_y()) {
      set_is_dst_flip_y(from.is_dst_flip_y());
    }
    if (from.has_is_shake()) {
      set_is_shake(from.is_shake());
    }
    if (from.has_self_effect()) {
      set_self_effect(from.self_effect());
    }
    if (from.has_target_effect()) {
      set_target_effect(from.target_effect());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_damage_times()) {
      set_damage_times(from.damage_times());
    }
    if (from.has_sound_effect()) {
      set_sound_effect(from.sound_effect());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SkillEffectConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SkillEffectConfig::CopyFrom(const SkillEffectConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SkillEffectConfig::IsInitialized() const {

  return true;
}

void SkillEffectConfig::Swap(SkillEffectConfig* other) {
  if (other != this) {
    std::swap(is_src_flip_y_, other->is_src_flip_y_);
    std::swap(id_, other->id_);
    std::swap(selft_effect_time_, other->selft_effect_time_);
    std::swap(target_effect_time_, other->target_effect_time_);
    std::swap(is_dst_flip_y_, other->is_dst_flip_y_);
    std::swap(is_shake_, other->is_shake_);
    std::swap(self_effect_, other->self_effect_);
    std::swap(target_effect_, other->target_effect_);
    std::swap(damage_times_, other->damage_times_);
    std::swap(sound_effect_, other->sound_effect_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SkillEffectConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SkillEffectConfig_descriptor_;
  metadata.reflection = SkillEffectConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
