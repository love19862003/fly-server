// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TalentConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "TalentConfig.pb.h"

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

const ::google::protobuf::Descriptor* TalentConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TalentConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_TalentConfig_2eproto() {
  protobuf_AddDesc_TalentConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "TalentConfig.proto");
  GOOGLE_CHECK(file != NULL);
  TalentConfig_descriptor_ = file->message_type(0);
  static const int TalentConfig_offsets_[16] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TalentConfig, max_level_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TalentConfig, talent_point_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TalentConfig, talent_root_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TalentConfig, talent_cost_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TalentConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TalentConfig, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TalentConfig, skill_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TalentConfig, condition_talent_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TalentConfig, talent_next_level_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TalentConfig, next_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TalentConfig, total_talent_point_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TalentConfig, clear_cd_cost_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TalentConfig, player_level_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TalentConfig, level_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TalentConfig, cost_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TalentConfig, background_),
  };
  TalentConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TalentConfig_descriptor_,
      TalentConfig::default_instance_,
      TalentConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TalentConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TalentConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TalentConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_TalentConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TalentConfig_descriptor_, &TalentConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_TalentConfig_2eproto() {
  delete TalentConfig::default_instance_;
  delete TalentConfig_reflection_;
}

void protobuf_AddDesc_TalentConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022TalentConfig.proto\022\022DianShiTech.Config"
    "\032\025ConfigTypeGroup.proto\"\324\002\n\014TalentConfig"
    "\022\021\n\tmax_level\030\005 \001(\005\022\024\n\014talent_point\030\007 \001("
    "\005\022\023\n\013talent_root\030\003 \001(\005\022\030\n\020talent_cost_ty"
    "pe\030\010 \001(\005\022\n\n\002id\030\001 \001(\005\022\014\n\004type\030\n \001(\005\022\r\n\005sk"
    "ill\030\013 \001(\005\022\030\n\020condition_talent\030\016 \001(\005\022\036\n\026t"
    "alent_next_level_time\030\017 \001(\005\022\017\n\007next_id\030\002"
    " \001(\005\022\032\n\022total_talent_point\030\r \001(\005\022\025\n\rclea"
    "r_cd_cost\030\020 \001(\005\022\024\n\014player_level\030\014 \001(\005\022\r\n"
    "\005level\030\004 \001(\005\022\014\n\004cost\030\t \001(\005\022\022\n\nbackground"
    "\030\006 \001(\005", 406);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "TalentConfig.proto", &protobuf_RegisterTypes);
  TalentConfig::default_instance_ = new TalentConfig();
  TalentConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_TalentConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_TalentConfig_2eproto {
  StaticDescriptorInitializer_TalentConfig_2eproto() {
    protobuf_AddDesc_TalentConfig_2eproto();
  }
} static_descriptor_initializer_TalentConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int TalentConfig::kMaxLevelFieldNumber;
const int TalentConfig::kTalentPointFieldNumber;
const int TalentConfig::kTalentRootFieldNumber;
const int TalentConfig::kTalentCostTypeFieldNumber;
const int TalentConfig::kIdFieldNumber;
const int TalentConfig::kTypeFieldNumber;
const int TalentConfig::kSkillFieldNumber;
const int TalentConfig::kConditionTalentFieldNumber;
const int TalentConfig::kTalentNextLevelTimeFieldNumber;
const int TalentConfig::kNextIdFieldNumber;
const int TalentConfig::kTotalTalentPointFieldNumber;
const int TalentConfig::kClearCdCostFieldNumber;
const int TalentConfig::kPlayerLevelFieldNumber;
const int TalentConfig::kLevelFieldNumber;
const int TalentConfig::kCostFieldNumber;
const int TalentConfig::kBackgroundFieldNumber;
#endif  // !_MSC_VER

TalentConfig::TalentConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void TalentConfig::InitAsDefaultInstance() {
}

TalentConfig::TalentConfig(const TalentConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void TalentConfig::SharedCtor() {
  _cached_size_ = 0;
  max_level_ = 0;
  talent_point_ = 0;
  talent_root_ = 0;
  talent_cost_type_ = 0;
  id_ = 0;
  type_ = 0;
  skill_ = 0;
  condition_talent_ = 0;
  talent_next_level_time_ = 0;
  next_id_ = 0;
  total_talent_point_ = 0;
  clear_cd_cost_ = 0;
  player_level_ = 0;
  level_ = 0;
  cost_ = 0;
  background_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TalentConfig::~TalentConfig() {
  SharedDtor();
}

void TalentConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void TalentConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TalentConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TalentConfig_descriptor_;
}

const TalentConfig& TalentConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_TalentConfig_2eproto();
  return *default_instance_;
}

TalentConfig* TalentConfig::default_instance_ = NULL;

TalentConfig* TalentConfig::New() const {
  return new TalentConfig;
}

void TalentConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    max_level_ = 0;
    talent_point_ = 0;
    talent_root_ = 0;
    talent_cost_type_ = 0;
    id_ = 0;
    type_ = 0;
    skill_ = 0;
    condition_talent_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    talent_next_level_time_ = 0;
    next_id_ = 0;
    total_talent_point_ = 0;
    clear_cd_cost_ = 0;
    player_level_ = 0;
    level_ = 0;
    cost_ = 0;
    background_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TalentConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_next_id;
        break;
      }

      // optional int32 next_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_next_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &next_id_)));
          set_has_next_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_talent_root;
        break;
      }

      // optional int32 talent_root = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_talent_root:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &talent_root_)));
          set_has_talent_root();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_level;
        break;
      }

      // optional int32 level = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_level:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &level_)));
          set_has_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_max_level;
        break;
      }

      // optional int32 max_level = 5;
      case 5: {
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
        if (input->ExpectTag(48)) goto parse_background;
        break;
      }

      // optional int32 background = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_background:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &background_)));
          set_has_background();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_talent_point;
        break;
      }

      // optional int32 talent_point = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_talent_point:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &talent_point_)));
          set_has_talent_point();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_talent_cost_type;
        break;
      }

      // optional int32 talent_cost_type = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_talent_cost_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &talent_cost_type_)));
          set_has_talent_cost_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_cost;
        break;
      }

      // optional int32 cost = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_cost:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &cost_)));
          set_has_cost();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_type;
        break;
      }

      // optional int32 type = 10;
      case 10: {
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
        if (input->ExpectTag(88)) goto parse_skill;
        break;
      }

      // optional int32 skill = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_skill:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &skill_)));
          set_has_skill();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(96)) goto parse_player_level;
        break;
      }

      // optional int32 player_level = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_player_level:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &player_level_)));
          set_has_player_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(104)) goto parse_total_talent_point;
        break;
      }

      // optional int32 total_talent_point = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_total_talent_point:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &total_talent_point_)));
          set_has_total_talent_point();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(112)) goto parse_condition_talent;
        break;
      }

      // optional int32 condition_talent = 14;
      case 14: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_condition_talent:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &condition_talent_)));
          set_has_condition_talent();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(120)) goto parse_talent_next_level_time;
        break;
      }

      // optional int32 talent_next_level_time = 15;
      case 15: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_talent_next_level_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &talent_next_level_time_)));
          set_has_talent_next_level_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(128)) goto parse_clear_cd_cost;
        break;
      }

      // optional int32 clear_cd_cost = 16;
      case 16: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_clear_cd_cost:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &clear_cd_cost_)));
          set_has_clear_cd_cost();
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

void TalentConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 next_id = 2;
  if (has_next_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->next_id(), output);
  }

  // optional int32 talent_root = 3;
  if (has_talent_root()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->talent_root(), output);
  }

  // optional int32 level = 4;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->level(), output);
  }

  // optional int32 max_level = 5;
  if (has_max_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->max_level(), output);
  }

  // optional int32 background = 6;
  if (has_background()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->background(), output);
  }

  // optional int32 talent_point = 7;
  if (has_talent_point()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->talent_point(), output);
  }

  // optional int32 talent_cost_type = 8;
  if (has_talent_cost_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->talent_cost_type(), output);
  }

  // optional int32 cost = 9;
  if (has_cost()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->cost(), output);
  }

  // optional int32 type = 10;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->type(), output);
  }

  // optional int32 skill = 11;
  if (has_skill()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(11, this->skill(), output);
  }

  // optional int32 player_level = 12;
  if (has_player_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(12, this->player_level(), output);
  }

  // optional int32 total_talent_point = 13;
  if (has_total_talent_point()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->total_talent_point(), output);
  }

  // optional int32 condition_talent = 14;
  if (has_condition_talent()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(14, this->condition_talent(), output);
  }

  // optional int32 talent_next_level_time = 15;
  if (has_talent_next_level_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(15, this->talent_next_level_time(), output);
  }

  // optional int32 clear_cd_cost = 16;
  if (has_clear_cd_cost()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(16, this->clear_cd_cost(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* TalentConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 next_id = 2;
  if (has_next_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->next_id(), target);
  }

  // optional int32 talent_root = 3;
  if (has_talent_root()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->talent_root(), target);
  }

  // optional int32 level = 4;
  if (has_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->level(), target);
  }

  // optional int32 max_level = 5;
  if (has_max_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->max_level(), target);
  }

  // optional int32 background = 6;
  if (has_background()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->background(), target);
  }

  // optional int32 talent_point = 7;
  if (has_talent_point()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->talent_point(), target);
  }

  // optional int32 talent_cost_type = 8;
  if (has_talent_cost_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->talent_cost_type(), target);
  }

  // optional int32 cost = 9;
  if (has_cost()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->cost(), target);
  }

  // optional int32 type = 10;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->type(), target);
  }

  // optional int32 skill = 11;
  if (has_skill()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(11, this->skill(), target);
  }

  // optional int32 player_level = 12;
  if (has_player_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(12, this->player_level(), target);
  }

  // optional int32 total_talent_point = 13;
  if (has_total_talent_point()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->total_talent_point(), target);
  }

  // optional int32 condition_talent = 14;
  if (has_condition_talent()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(14, this->condition_talent(), target);
  }

  // optional int32 talent_next_level_time = 15;
  if (has_talent_next_level_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(15, this->talent_next_level_time(), target);
  }

  // optional int32 clear_cd_cost = 16;
  if (has_clear_cd_cost()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(16, this->clear_cd_cost(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int TalentConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 max_level = 5;
    if (has_max_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->max_level());
    }

    // optional int32 talent_point = 7;
    if (has_talent_point()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->talent_point());
    }

    // optional int32 talent_root = 3;
    if (has_talent_root()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->talent_root());
    }

    // optional int32 talent_cost_type = 8;
    if (has_talent_cost_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->talent_cost_type());
    }

    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 type = 10;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
    }

    // optional int32 skill = 11;
    if (has_skill()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->skill());
    }

    // optional int32 condition_talent = 14;
    if (has_condition_talent()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->condition_talent());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int32 talent_next_level_time = 15;
    if (has_talent_next_level_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->talent_next_level_time());
    }

    // optional int32 next_id = 2;
    if (has_next_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->next_id());
    }

    // optional int32 total_talent_point = 13;
    if (has_total_talent_point()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->total_talent_point());
    }

    // optional int32 clear_cd_cost = 16;
    if (has_clear_cd_cost()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->clear_cd_cost());
    }

    // optional int32 player_level = 12;
    if (has_player_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->player_level());
    }

    // optional int32 level = 4;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->level());
    }

    // optional int32 cost = 9;
    if (has_cost()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->cost());
    }

    // optional int32 background = 6;
    if (has_background()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->background());
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

void TalentConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TalentConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TalentConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TalentConfig::MergeFrom(const TalentConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_max_level()) {
      set_max_level(from.max_level());
    }
    if (from.has_talent_point()) {
      set_talent_point(from.talent_point());
    }
    if (from.has_talent_root()) {
      set_talent_root(from.talent_root());
    }
    if (from.has_talent_cost_type()) {
      set_talent_cost_type(from.talent_cost_type());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_skill()) {
      set_skill(from.skill());
    }
    if (from.has_condition_talent()) {
      set_condition_talent(from.condition_talent());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_talent_next_level_time()) {
      set_talent_next_level_time(from.talent_next_level_time());
    }
    if (from.has_next_id()) {
      set_next_id(from.next_id());
    }
    if (from.has_total_talent_point()) {
      set_total_talent_point(from.total_talent_point());
    }
    if (from.has_clear_cd_cost()) {
      set_clear_cd_cost(from.clear_cd_cost());
    }
    if (from.has_player_level()) {
      set_player_level(from.player_level());
    }
    if (from.has_level()) {
      set_level(from.level());
    }
    if (from.has_cost()) {
      set_cost(from.cost());
    }
    if (from.has_background()) {
      set_background(from.background());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TalentConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TalentConfig::CopyFrom(const TalentConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TalentConfig::IsInitialized() const {

  return true;
}

void TalentConfig::Swap(TalentConfig* other) {
  if (other != this) {
    std::swap(max_level_, other->max_level_);
    std::swap(talent_point_, other->talent_point_);
    std::swap(talent_root_, other->talent_root_);
    std::swap(talent_cost_type_, other->talent_cost_type_);
    std::swap(id_, other->id_);
    std::swap(type_, other->type_);
    std::swap(skill_, other->skill_);
    std::swap(condition_talent_, other->condition_talent_);
    std::swap(talent_next_level_time_, other->talent_next_level_time_);
    std::swap(next_id_, other->next_id_);
    std::swap(total_talent_point_, other->total_talent_point_);
    std::swap(clear_cd_cost_, other->clear_cd_cost_);
    std::swap(player_level_, other->player_level_);
    std::swap(level_, other->level_);
    std::swap(cost_, other->cost_);
    std::swap(background_, other->background_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TalentConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TalentConfig_descriptor_;
  metadata.reflection = TalentConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
