// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: VipAchievementConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "VipAchievementConfig.pb.h"

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

const ::google::protobuf::Descriptor* VipAchievementConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  VipAchievementConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_VipAchievementConfig_2eproto() {
  protobuf_AddDesc_VipAchievementConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "VipAchievementConfig.proto");
  GOOGLE_CHECK(file != NULL);
  VipAchievementConfig_descriptor_ = file->message_type(0);
  static const int VipAchievementConfig_offsets_[13] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VipAchievementConfig, open_task_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VipAchievementConfig, isopen_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VipAchievementConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VipAchievementConfig, condition_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VipAchievementConfig, desc_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VipAchievementConfig, jump_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VipAchievementConfig, jump_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VipAchievementConfig, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VipAchievementConfig, condition_para_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VipAchievementConfig, achievement_point_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VipAchievementConfig, sheet_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VipAchievementConfig, active_level_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VipAchievementConfig, bonus_),
  };
  VipAchievementConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      VipAchievementConfig_descriptor_,
      VipAchievementConfig::default_instance_,
      VipAchievementConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VipAchievementConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VipAchievementConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(VipAchievementConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_VipAchievementConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    VipAchievementConfig_descriptor_, &VipAchievementConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_VipAchievementConfig_2eproto() {
  delete VipAchievementConfig::default_instance_;
  delete VipAchievementConfig_reflection_;
}

void protobuf_AddDesc_VipAchievementConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032VipAchievementConfig.proto\022\022DianShiTec"
    "h.Config\032\025ConfigTypeGroup.proto\"\207\002\n\024VipA"
    "chievementConfig\022\021\n\topen_task\030\t \001(\005\022\016\n\006i"
    "sopen\030\014 \001(\005\022\n\n\002id\030\001 \001(\005\022\021\n\tcondition\030\006 \001"
    "(\005\022\014\n\004desc\030\005 \001(\t\022\022\n\njump_value\030\016 \001(\005\022\021\n\t"
    "jump_type\030\r \001(\005\022\014\n\004name\030\004 \001(\t\022\026\n\016conditi"
    "on_para\030\007 \001(\005\022\031\n\021achievement_point\030\010 \001(\005"
    "\022\022\n\nsheet_type\030\003 \001(\005\022\024\n\014active_level\030\013 \001"
    "(\005\022\r\n\005bonus\030\n \001(\005", 337);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "VipAchievementConfig.proto", &protobuf_RegisterTypes);
  VipAchievementConfig::default_instance_ = new VipAchievementConfig();
  VipAchievementConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_VipAchievementConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_VipAchievementConfig_2eproto {
  StaticDescriptorInitializer_VipAchievementConfig_2eproto() {
    protobuf_AddDesc_VipAchievementConfig_2eproto();
  }
} static_descriptor_initializer_VipAchievementConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int VipAchievementConfig::kOpenTaskFieldNumber;
const int VipAchievementConfig::kIsopenFieldNumber;
const int VipAchievementConfig::kIdFieldNumber;
const int VipAchievementConfig::kConditionFieldNumber;
const int VipAchievementConfig::kDescFieldNumber;
const int VipAchievementConfig::kJumpValueFieldNumber;
const int VipAchievementConfig::kJumpTypeFieldNumber;
const int VipAchievementConfig::kNameFieldNumber;
const int VipAchievementConfig::kConditionParaFieldNumber;
const int VipAchievementConfig::kAchievementPointFieldNumber;
const int VipAchievementConfig::kSheetTypeFieldNumber;
const int VipAchievementConfig::kActiveLevelFieldNumber;
const int VipAchievementConfig::kBonusFieldNumber;
#endif  // !_MSC_VER

VipAchievementConfig::VipAchievementConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void VipAchievementConfig::InitAsDefaultInstance() {
}

VipAchievementConfig::VipAchievementConfig(const VipAchievementConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void VipAchievementConfig::SharedCtor() {
  _cached_size_ = 0;
  open_task_ = 0;
  isopen_ = 0;
  id_ = 0;
  condition_ = 0;
  desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  jump_value_ = 0;
  jump_type_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  condition_para_ = 0;
  achievement_point_ = 0;
  sheet_type_ = 0;
  active_level_ = 0;
  bonus_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

VipAchievementConfig::~VipAchievementConfig() {
  SharedDtor();
}

void VipAchievementConfig::SharedDtor() {
  if (desc_ != &::google::protobuf::internal::kEmptyString) {
    delete desc_;
  }
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (this != default_instance_) {
  }
}

void VipAchievementConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VipAchievementConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return VipAchievementConfig_descriptor_;
}

const VipAchievementConfig& VipAchievementConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_VipAchievementConfig_2eproto();
  return *default_instance_;
}

VipAchievementConfig* VipAchievementConfig::default_instance_ = NULL;

VipAchievementConfig* VipAchievementConfig::New() const {
  return new VipAchievementConfig;
}

void VipAchievementConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    open_task_ = 0;
    isopen_ = 0;
    id_ = 0;
    condition_ = 0;
    if (has_desc()) {
      if (desc_ != &::google::protobuf::internal::kEmptyString) {
        desc_->clear();
      }
    }
    jump_value_ = 0;
    jump_type_ = 0;
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    condition_para_ = 0;
    achievement_point_ = 0;
    sheet_type_ = 0;
    active_level_ = 0;
    bonus_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool VipAchievementConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(24)) goto parse_sheet_type;
        break;
      }

      // optional int32 sheet_type = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sheet_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sheet_type_)));
          set_has_sheet_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_name;
        break;
      }

      // optional string name = 4;
      case 4: {
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
        if (input->ExpectTag(42)) goto parse_desc;
        break;
      }

      // optional string desc = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_desc:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_desc()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->desc().data(), this->desc().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_condition;
        break;
      }

      // optional int32 condition = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_condition:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &condition_)));
          set_has_condition();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_condition_para;
        break;
      }

      // optional int32 condition_para = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_condition_para:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &condition_para_)));
          set_has_condition_para();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_achievement_point;
        break;
      }

      // optional int32 achievement_point = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_achievement_point:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &achievement_point_)));
          set_has_achievement_point();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_open_task;
        break;
      }

      // optional int32 open_task = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_open_task:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &open_task_)));
          set_has_open_task();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_bonus;
        break;
      }

      // optional int32 bonus = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_bonus:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &bonus_)));
          set_has_bonus();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_active_level;
        break;
      }

      // optional int32 active_level = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_active_level:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &active_level_)));
          set_has_active_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(96)) goto parse_isopen;
        break;
      }

      // optional int32 isopen = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_isopen:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &isopen_)));
          set_has_isopen();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(104)) goto parse_jump_type;
        break;
      }

      // optional int32 jump_type = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_jump_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &jump_type_)));
          set_has_jump_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(112)) goto parse_jump_value;
        break;
      }

      // optional int32 jump_value = 14;
      case 14: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_jump_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &jump_value_)));
          set_has_jump_value();
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

void VipAchievementConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 sheet_type = 3;
  if (has_sheet_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->sheet_type(), output);
  }

  // optional string name = 4;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->name(), output);
  }

  // optional string desc = 5;
  if (has_desc()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->desc().data(), this->desc().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->desc(), output);
  }

  // optional int32 condition = 6;
  if (has_condition()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->condition(), output);
  }

  // optional int32 condition_para = 7;
  if (has_condition_para()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->condition_para(), output);
  }

  // optional int32 achievement_point = 8;
  if (has_achievement_point()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->achievement_point(), output);
  }

  // optional int32 open_task = 9;
  if (has_open_task()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->open_task(), output);
  }

  // optional int32 bonus = 10;
  if (has_bonus()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->bonus(), output);
  }

  // optional int32 active_level = 11;
  if (has_active_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(11, this->active_level(), output);
  }

  // optional int32 isopen = 12;
  if (has_isopen()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(12, this->isopen(), output);
  }

  // optional int32 jump_type = 13;
  if (has_jump_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->jump_type(), output);
  }

  // optional int32 jump_value = 14;
  if (has_jump_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(14, this->jump_value(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* VipAchievementConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 sheet_type = 3;
  if (has_sheet_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->sheet_type(), target);
  }

  // optional string name = 4;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->name(), target);
  }

  // optional string desc = 5;
  if (has_desc()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->desc().data(), this->desc().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->desc(), target);
  }

  // optional int32 condition = 6;
  if (has_condition()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->condition(), target);
  }

  // optional int32 condition_para = 7;
  if (has_condition_para()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->condition_para(), target);
  }

  // optional int32 achievement_point = 8;
  if (has_achievement_point()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->achievement_point(), target);
  }

  // optional int32 open_task = 9;
  if (has_open_task()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->open_task(), target);
  }

  // optional int32 bonus = 10;
  if (has_bonus()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->bonus(), target);
  }

  // optional int32 active_level = 11;
  if (has_active_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(11, this->active_level(), target);
  }

  // optional int32 isopen = 12;
  if (has_isopen()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(12, this->isopen(), target);
  }

  // optional int32 jump_type = 13;
  if (has_jump_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->jump_type(), target);
  }

  // optional int32 jump_value = 14;
  if (has_jump_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(14, this->jump_value(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int VipAchievementConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 open_task = 9;
    if (has_open_task()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->open_task());
    }

    // optional int32 isopen = 12;
    if (has_isopen()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->isopen());
    }

    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 condition = 6;
    if (has_condition()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->condition());
    }

    // optional string desc = 5;
    if (has_desc()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->desc());
    }

    // optional int32 jump_value = 14;
    if (has_jump_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->jump_value());
    }

    // optional int32 jump_type = 13;
    if (has_jump_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->jump_type());
    }

    // optional string name = 4;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int32 condition_para = 7;
    if (has_condition_para()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->condition_para());
    }

    // optional int32 achievement_point = 8;
    if (has_achievement_point()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->achievement_point());
    }

    // optional int32 sheet_type = 3;
    if (has_sheet_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->sheet_type());
    }

    // optional int32 active_level = 11;
    if (has_active_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->active_level());
    }

    // optional int32 bonus = 10;
    if (has_bonus()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->bonus());
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

void VipAchievementConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const VipAchievementConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const VipAchievementConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void VipAchievementConfig::MergeFrom(const VipAchievementConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_open_task()) {
      set_open_task(from.open_task());
    }
    if (from.has_isopen()) {
      set_isopen(from.isopen());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_condition()) {
      set_condition(from.condition());
    }
    if (from.has_desc()) {
      set_desc(from.desc());
    }
    if (from.has_jump_value()) {
      set_jump_value(from.jump_value());
    }
    if (from.has_jump_type()) {
      set_jump_type(from.jump_type());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_condition_para()) {
      set_condition_para(from.condition_para());
    }
    if (from.has_achievement_point()) {
      set_achievement_point(from.achievement_point());
    }
    if (from.has_sheet_type()) {
      set_sheet_type(from.sheet_type());
    }
    if (from.has_active_level()) {
      set_active_level(from.active_level());
    }
    if (from.has_bonus()) {
      set_bonus(from.bonus());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void VipAchievementConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VipAchievementConfig::CopyFrom(const VipAchievementConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VipAchievementConfig::IsInitialized() const {

  return true;
}

void VipAchievementConfig::Swap(VipAchievementConfig* other) {
  if (other != this) {
    std::swap(open_task_, other->open_task_);
    std::swap(isopen_, other->isopen_);
    std::swap(id_, other->id_);
    std::swap(condition_, other->condition_);
    std::swap(desc_, other->desc_);
    std::swap(jump_value_, other->jump_value_);
    std::swap(jump_type_, other->jump_type_);
    std::swap(name_, other->name_);
    std::swap(condition_para_, other->condition_para_);
    std::swap(achievement_point_, other->achievement_point_);
    std::swap(sheet_type_, other->sheet_type_);
    std::swap(active_level_, other->active_level_);
    std::swap(bonus_, other->bonus_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata VipAchievementConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = VipAchievementConfig_descriptor_;
  metadata.reflection = VipAchievementConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
