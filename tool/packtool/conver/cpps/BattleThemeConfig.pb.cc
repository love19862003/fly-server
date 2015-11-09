// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BattleThemeConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "BattleThemeConfig.pb.h"

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

const ::google::protobuf::Descriptor* BattleThemeConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BattleThemeConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_BattleThemeConfig_2eproto() {
  protobuf_AddDesc_BattleThemeConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "BattleThemeConfig.proto");
  GOOGLE_CHECK(file != NULL);
  BattleThemeConfig_descriptor_ = file->message_type(0);
  static const int BattleThemeConfig_offsets_[14] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleThemeConfig, empty_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleThemeConfig, effect_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleThemeConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleThemeConfig, guard_towner_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleThemeConfig, wall_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleThemeConfig, forest_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleThemeConfig, barracks_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleThemeConfig, flag_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleThemeConfig, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleThemeConfig, bue_tent_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleThemeConfig, green_tent_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleThemeConfig, hill_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleThemeConfig, bg_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleThemeConfig, tower_),
  };
  BattleThemeConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BattleThemeConfig_descriptor_,
      BattleThemeConfig::default_instance_,
      BattleThemeConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleThemeConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleThemeConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BattleThemeConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_BattleThemeConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BattleThemeConfig_descriptor_, &BattleThemeConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_BattleThemeConfig_2eproto() {
  delete BattleThemeConfig::default_instance_;
  delete BattleThemeConfig_reflection_;
}

void protobuf_AddDesc_BattleThemeConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027BattleThemeConfig.proto\022\022DianShiTech.C"
    "onfig\032\025ConfigTypeGroup.proto\"\357\001\n\021BattleT"
    "hemeConfig\022\r\n\005empty\030\r \001(\005\022\016\n\006effect\030\016 \001("
    "\005\022\n\n\002id\030\001 \001(\005\022\024\n\014guard_towner\030\014 \003(\005\022\014\n\004w"
    "all\030\013 \003(\005\022\016\n\006forest\030\005 \001(\005\022\020\n\010barracks\030\n "
    "\001(\005\022\014\n\004flag\030\t \001(\005\022\014\n\004name\030\002 \001(\t\022\020\n\010bue_t"
    "ent\030\007 \001(\005\022\022\n\ngreen_tent\030\010 \001(\005\022\014\n\004hill\030\004 "
    "\001(\005\022\n\n\002bg\030\003 \001(\005\022\r\n\005tower\030\006 \001(\005", 310);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "BattleThemeConfig.proto", &protobuf_RegisterTypes);
  BattleThemeConfig::default_instance_ = new BattleThemeConfig();
  BattleThemeConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_BattleThemeConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_BattleThemeConfig_2eproto {
  StaticDescriptorInitializer_BattleThemeConfig_2eproto() {
    protobuf_AddDesc_BattleThemeConfig_2eproto();
  }
} static_descriptor_initializer_BattleThemeConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int BattleThemeConfig::kEmptyFieldNumber;
const int BattleThemeConfig::kEffectFieldNumber;
const int BattleThemeConfig::kIdFieldNumber;
const int BattleThemeConfig::kGuardTownerFieldNumber;
const int BattleThemeConfig::kWallFieldNumber;
const int BattleThemeConfig::kForestFieldNumber;
const int BattleThemeConfig::kBarracksFieldNumber;
const int BattleThemeConfig::kFlagFieldNumber;
const int BattleThemeConfig::kNameFieldNumber;
const int BattleThemeConfig::kBueTentFieldNumber;
const int BattleThemeConfig::kGreenTentFieldNumber;
const int BattleThemeConfig::kHillFieldNumber;
const int BattleThemeConfig::kBgFieldNumber;
const int BattleThemeConfig::kTowerFieldNumber;
#endif  // !_MSC_VER

BattleThemeConfig::BattleThemeConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BattleThemeConfig::InitAsDefaultInstance() {
}

BattleThemeConfig::BattleThemeConfig(const BattleThemeConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BattleThemeConfig::SharedCtor() {
  _cached_size_ = 0;
  empty_ = 0;
  effect_ = 0;
  id_ = 0;
  forest_ = 0;
  barracks_ = 0;
  flag_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  bue_tent_ = 0;
  green_tent_ = 0;
  hill_ = 0;
  bg_ = 0;
  tower_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BattleThemeConfig::~BattleThemeConfig() {
  SharedDtor();
}

void BattleThemeConfig::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (this != default_instance_) {
  }
}

void BattleThemeConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BattleThemeConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BattleThemeConfig_descriptor_;
}

const BattleThemeConfig& BattleThemeConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_BattleThemeConfig_2eproto();
  return *default_instance_;
}

BattleThemeConfig* BattleThemeConfig::default_instance_ = NULL;

BattleThemeConfig* BattleThemeConfig::New() const {
  return new BattleThemeConfig;
}

void BattleThemeConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    empty_ = 0;
    effect_ = 0;
    id_ = 0;
    forest_ = 0;
    barracks_ = 0;
    flag_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    bue_tent_ = 0;
    green_tent_ = 0;
    hill_ = 0;
    bg_ = 0;
    tower_ = 0;
  }
  guard_towner_.Clear();
  wall_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BattleThemeConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }

      // optional string name = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_bg;
        break;
      }

      // optional int32 bg = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_bg:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &bg_)));
          set_has_bg();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_hill;
        break;
      }

      // optional int32 hill = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_hill:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &hill_)));
          set_has_hill();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_forest;
        break;
      }

      // optional int32 forest = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_forest:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &forest_)));
          set_has_forest();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_tower;
        break;
      }

      // optional int32 tower = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_tower:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &tower_)));
          set_has_tower();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_bue_tent;
        break;
      }

      // optional int32 bue_tent = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_bue_tent:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &bue_tent_)));
          set_has_bue_tent();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_green_tent;
        break;
      }

      // optional int32 green_tent = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_green_tent:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &green_tent_)));
          set_has_green_tent();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_flag;
        break;
      }

      // optional int32 flag = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_flag:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &flag_)));
          set_has_flag();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_barracks;
        break;
      }

      // optional int32 barracks = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_barracks:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &barracks_)));
          set_has_barracks();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_wall;
        break;
      }

      // repeated int32 wall = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_wall:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 88, input, this->mutable_wall())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_wall())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_wall;
        if (input->ExpectTag(96)) goto parse_guard_towner;
        break;
      }

      // repeated int32 guard_towner = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_guard_towner:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 96, input, this->mutable_guard_towner())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_guard_towner())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(96)) goto parse_guard_towner;
        if (input->ExpectTag(104)) goto parse_empty;
        break;
      }

      // optional int32 empty = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_empty:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &empty_)));
          set_has_empty();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(112)) goto parse_effect;
        break;
      }

      // optional int32 effect = 14;
      case 14: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_effect:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &effect_)));
          set_has_effect();
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

void BattleThemeConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->name(), output);
  }

  // optional int32 bg = 3;
  if (has_bg()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->bg(), output);
  }

  // optional int32 hill = 4;
  if (has_hill()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->hill(), output);
  }

  // optional int32 forest = 5;
  if (has_forest()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->forest(), output);
  }

  // optional int32 tower = 6;
  if (has_tower()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->tower(), output);
  }

  // optional int32 bue_tent = 7;
  if (has_bue_tent()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->bue_tent(), output);
  }

  // optional int32 green_tent = 8;
  if (has_green_tent()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->green_tent(), output);
  }

  // optional int32 flag = 9;
  if (has_flag()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->flag(), output);
  }

  // optional int32 barracks = 10;
  if (has_barracks()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->barracks(), output);
  }

  // repeated int32 wall = 11;
  for (int i = 0; i < this->wall_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      11, this->wall(i), output);
  }

  // repeated int32 guard_towner = 12;
  for (int i = 0; i < this->guard_towner_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      12, this->guard_towner(i), output);
  }

  // optional int32 empty = 13;
  if (has_empty()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->empty(), output);
  }

  // optional int32 effect = 14;
  if (has_effect()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(14, this->effect(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BattleThemeConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // optional int32 bg = 3;
  if (has_bg()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->bg(), target);
  }

  // optional int32 hill = 4;
  if (has_hill()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->hill(), target);
  }

  // optional int32 forest = 5;
  if (has_forest()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->forest(), target);
  }

  // optional int32 tower = 6;
  if (has_tower()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->tower(), target);
  }

  // optional int32 bue_tent = 7;
  if (has_bue_tent()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->bue_tent(), target);
  }

  // optional int32 green_tent = 8;
  if (has_green_tent()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->green_tent(), target);
  }

  // optional int32 flag = 9;
  if (has_flag()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->flag(), target);
  }

  // optional int32 barracks = 10;
  if (has_barracks()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->barracks(), target);
  }

  // repeated int32 wall = 11;
  for (int i = 0; i < this->wall_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(11, this->wall(i), target);
  }

  // repeated int32 guard_towner = 12;
  for (int i = 0; i < this->guard_towner_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(12, this->guard_towner(i), target);
  }

  // optional int32 empty = 13;
  if (has_empty()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->empty(), target);
  }

  // optional int32 effect = 14;
  if (has_effect()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(14, this->effect(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BattleThemeConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 empty = 13;
    if (has_empty()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->empty());
    }

    // optional int32 effect = 14;
    if (has_effect()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->effect());
    }

    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 forest = 5;
    if (has_forest()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->forest());
    }

    // optional int32 barracks = 10;
    if (has_barracks()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->barracks());
    }

    // optional int32 flag = 9;
    if (has_flag()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->flag());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional string name = 2;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional int32 bue_tent = 7;
    if (has_bue_tent()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->bue_tent());
    }

    // optional int32 green_tent = 8;
    if (has_green_tent()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->green_tent());
    }

    // optional int32 hill = 4;
    if (has_hill()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->hill());
    }

    // optional int32 bg = 3;
    if (has_bg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->bg());
    }

    // optional int32 tower = 6;
    if (has_tower()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->tower());
    }

  }
  // repeated int32 guard_towner = 12;
  {
    int data_size = 0;
    for (int i = 0; i < this->guard_towner_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->guard_towner(i));
    }
    total_size += 1 * this->guard_towner_size() + data_size;
  }

  // repeated int32 wall = 11;
  {
    int data_size = 0;
    for (int i = 0; i < this->wall_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->wall(i));
    }
    total_size += 1 * this->wall_size() + data_size;
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

void BattleThemeConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BattleThemeConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BattleThemeConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BattleThemeConfig::MergeFrom(const BattleThemeConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  guard_towner_.MergeFrom(from.guard_towner_);
  wall_.MergeFrom(from.wall_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_empty()) {
      set_empty(from.empty());
    }
    if (from.has_effect()) {
      set_effect(from.effect());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_forest()) {
      set_forest(from.forest());
    }
    if (from.has_barracks()) {
      set_barracks(from.barracks());
    }
    if (from.has_flag()) {
      set_flag(from.flag());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_bue_tent()) {
      set_bue_tent(from.bue_tent());
    }
    if (from.has_green_tent()) {
      set_green_tent(from.green_tent());
    }
    if (from.has_hill()) {
      set_hill(from.hill());
    }
    if (from.has_bg()) {
      set_bg(from.bg());
    }
    if (from.has_tower()) {
      set_tower(from.tower());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BattleThemeConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BattleThemeConfig::CopyFrom(const BattleThemeConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BattleThemeConfig::IsInitialized() const {

  return true;
}

void BattleThemeConfig::Swap(BattleThemeConfig* other) {
  if (other != this) {
    std::swap(empty_, other->empty_);
    std::swap(effect_, other->effect_);
    std::swap(id_, other->id_);
    guard_towner_.Swap(&other->guard_towner_);
    wall_.Swap(&other->wall_);
    std::swap(forest_, other->forest_);
    std::swap(barracks_, other->barracks_);
    std::swap(flag_, other->flag_);
    std::swap(name_, other->name_);
    std::swap(bue_tent_, other->bue_tent_);
    std::swap(green_tent_, other->green_tent_);
    std::swap(hill_, other->hill_);
    std::swap(bg_, other->bg_);
    std::swap(tower_, other->tower_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BattleThemeConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BattleThemeConfig_descriptor_;
  metadata.reflection = BattleThemeConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
