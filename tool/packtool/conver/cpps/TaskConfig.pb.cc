// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TaskConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "TaskConfig.pb.h"

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

const ::google::protobuf::Descriptor* TaskConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TaskConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_TaskConfig_2eproto() {
  protobuf_AddDesc_TaskConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "TaskConfig.proto");
  GOOGLE_CHECK(file != NULL);
  TaskConfig_descriptor_ = file->message_type(0);
  static const int TaskConfig_offsets_[13] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskConfig, open_task_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskConfig, rarity_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskConfig, task_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskConfig, desciption_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskConfig, jump_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskConfig, task_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskConfig, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskConfig, jump_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskConfig, last_task_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskConfig, complete_condition_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskConfig, active_level_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskConfig, bonus_),
  };
  TaskConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TaskConfig_descriptor_,
      TaskConfig::default_instance_,
      TaskConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TaskConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_TaskConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TaskConfig_descriptor_, &TaskConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_TaskConfig_2eproto() {
  delete TaskConfig::default_instance_;
  delete TaskConfig_reflection_;
}

void protobuf_AddDesc_TaskConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020TaskConfig.proto\022\022DianShiTech.Config\032\025"
    "ConfigTypeGroup.proto\"\306\002\n\nTaskConfig\022\021\n\t"
    "open_task\030\n \003(\005\022\016\n\006rarity\030\004 \001(\005\022\n\n\002id\030\001 "
    "\001(\005\022\017\n\007task_id\030\002 \001(\005\022\022\n\ndesciption\030\006 \001(\t"
    "\022\022\n\njump_value\030\r \001(\005\022\021\n\ttask_type\030\003 \001(\005\022"
    "\014\n\004name\030\005 \001(\t\022\021\n\tjump_type\030\014 \001(\005\022\021\n\tlast"
    "_task\030\013 \001(\005\022\?\n\022complete_condition\030\010 \003(\0132"
    "#.DianShiTech.Config.ConfigTypeGroup\022\024\n\014"
    "active_level\030\007 \001(\005\0222\n\005bonus\030\t \003(\0132#.Dian"
    "ShiTech.Config.ConfigTypeGroup", 390);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "TaskConfig.proto", &protobuf_RegisterTypes);
  TaskConfig::default_instance_ = new TaskConfig();
  TaskConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_TaskConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_TaskConfig_2eproto {
  StaticDescriptorInitializer_TaskConfig_2eproto() {
    protobuf_AddDesc_TaskConfig_2eproto();
  }
} static_descriptor_initializer_TaskConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int TaskConfig::kOpenTaskFieldNumber;
const int TaskConfig::kRarityFieldNumber;
const int TaskConfig::kIdFieldNumber;
const int TaskConfig::kTaskIdFieldNumber;
const int TaskConfig::kDesciptionFieldNumber;
const int TaskConfig::kJumpValueFieldNumber;
const int TaskConfig::kTaskTypeFieldNumber;
const int TaskConfig::kNameFieldNumber;
const int TaskConfig::kJumpTypeFieldNumber;
const int TaskConfig::kLastTaskFieldNumber;
const int TaskConfig::kCompleteConditionFieldNumber;
const int TaskConfig::kActiveLevelFieldNumber;
const int TaskConfig::kBonusFieldNumber;
#endif  // !_MSC_VER

TaskConfig::TaskConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void TaskConfig::InitAsDefaultInstance() {
}

TaskConfig::TaskConfig(const TaskConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void TaskConfig::SharedCtor() {
  _cached_size_ = 0;
  rarity_ = 0;
  id_ = 0;
  task_id_ = 0;
  desciption_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  jump_value_ = 0;
  task_type_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  jump_type_ = 0;
  last_task_ = 0;
  active_level_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TaskConfig::~TaskConfig() {
  SharedDtor();
}

void TaskConfig::SharedDtor() {
  if (desciption_ != &::google::protobuf::internal::kEmptyString) {
    delete desciption_;
  }
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (this != default_instance_) {
  }
}

void TaskConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TaskConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TaskConfig_descriptor_;
}

const TaskConfig& TaskConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_TaskConfig_2eproto();
  return *default_instance_;
}

TaskConfig* TaskConfig::default_instance_ = NULL;

TaskConfig* TaskConfig::New() const {
  return new TaskConfig;
}

void TaskConfig::Clear() {
  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    rarity_ = 0;
    id_ = 0;
    task_id_ = 0;
    if (has_desciption()) {
      if (desciption_ != &::google::protobuf::internal::kEmptyString) {
        desciption_->clear();
      }
    }
    jump_value_ = 0;
    task_type_ = 0;
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    jump_type_ = 0;
    last_task_ = 0;
    active_level_ = 0;
  }
  open_task_.Clear();
  complete_condition_.Clear();
  bonus_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TaskConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_task_id;
        break;
      }

      // optional int32 task_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_task_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &task_id_)));
          set_has_task_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_task_type;
        break;
      }

      // optional int32 task_type = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_task_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &task_type_)));
          set_has_task_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_rarity;
        break;
      }

      // optional int32 rarity = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rarity:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rarity_)));
          set_has_rarity();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_name;
        break;
      }

      // optional string name = 5;
      case 5: {
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
        if (input->ExpectTag(50)) goto parse_desciption;
        break;
      }

      // optional string desciption = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_desciption:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_desciption()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->desciption().data(), this->desciption().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_active_level;
        break;
      }

      // optional int32 active_level = 7;
      case 7: {
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
        if (input->ExpectTag(66)) goto parse_complete_condition;
        break;
      }

      // repeated .DianShiTech.Config.ConfigTypeGroup complete_condition = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_complete_condition:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_complete_condition()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(66)) goto parse_complete_condition;
        if (input->ExpectTag(74)) goto parse_bonus;
        break;
      }

      // repeated .DianShiTech.Config.ConfigTypeGroup bonus = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_bonus:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_bonus()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(74)) goto parse_bonus;
        if (input->ExpectTag(80)) goto parse_open_task;
        break;
      }

      // repeated int32 open_task = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_open_task:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 80, input, this->mutable_open_task())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_open_task())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_open_task;
        if (input->ExpectTag(88)) goto parse_last_task;
        break;
      }

      // optional int32 last_task = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_last_task:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &last_task_)));
          set_has_last_task();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(96)) goto parse_jump_type;
        break;
      }

      // optional int32 jump_type = 12;
      case 12: {
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
        if (input->ExpectTag(104)) goto parse_jump_value;
        break;
      }

      // optional int32 jump_value = 13;
      case 13: {
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

void TaskConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 task_id = 2;
  if (has_task_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->task_id(), output);
  }

  // optional int32 task_type = 3;
  if (has_task_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->task_type(), output);
  }

  // optional int32 rarity = 4;
  if (has_rarity()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->rarity(), output);
  }

  // optional string name = 5;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->name(), output);
  }

  // optional string desciption = 6;
  if (has_desciption()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->desciption().data(), this->desciption().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->desciption(), output);
  }

  // optional int32 active_level = 7;
  if (has_active_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->active_level(), output);
  }

  // repeated .DianShiTech.Config.ConfigTypeGroup complete_condition = 8;
  for (int i = 0; i < this->complete_condition_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, this->complete_condition(i), output);
  }

  // repeated .DianShiTech.Config.ConfigTypeGroup bonus = 9;
  for (int i = 0; i < this->bonus_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->bonus(i), output);
  }

  // repeated int32 open_task = 10;
  for (int i = 0; i < this->open_task_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      10, this->open_task(i), output);
  }

  // optional int32 last_task = 11;
  if (has_last_task()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(11, this->last_task(), output);
  }

  // optional int32 jump_type = 12;
  if (has_jump_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(12, this->jump_type(), output);
  }

  // optional int32 jump_value = 13;
  if (has_jump_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->jump_value(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* TaskConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 task_id = 2;
  if (has_task_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->task_id(), target);
  }

  // optional int32 task_type = 3;
  if (has_task_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->task_type(), target);
  }

  // optional int32 rarity = 4;
  if (has_rarity()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->rarity(), target);
  }

  // optional string name = 5;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->name(), target);
  }

  // optional string desciption = 6;
  if (has_desciption()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->desciption().data(), this->desciption().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->desciption(), target);
  }

  // optional int32 active_level = 7;
  if (has_active_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->active_level(), target);
  }

  // repeated .DianShiTech.Config.ConfigTypeGroup complete_condition = 8;
  for (int i = 0; i < this->complete_condition_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        8, this->complete_condition(i), target);
  }

  // repeated .DianShiTech.Config.ConfigTypeGroup bonus = 9;
  for (int i = 0; i < this->bonus_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        9, this->bonus(i), target);
  }

  // repeated int32 open_task = 10;
  for (int i = 0; i < this->open_task_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(10, this->open_task(i), target);
  }

  // optional int32 last_task = 11;
  if (has_last_task()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(11, this->last_task(), target);
  }

  // optional int32 jump_type = 12;
  if (has_jump_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(12, this->jump_type(), target);
  }

  // optional int32 jump_value = 13;
  if (has_jump_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->jump_value(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int TaskConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    // optional int32 rarity = 4;
    if (has_rarity()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->rarity());
    }

    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 task_id = 2;
    if (has_task_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->task_id());
    }

    // optional string desciption = 6;
    if (has_desciption()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->desciption());
    }

    // optional int32 jump_value = 13;
    if (has_jump_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->jump_value());
    }

    // optional int32 task_type = 3;
    if (has_task_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->task_type());
    }

    // optional string name = 5;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int32 jump_type = 12;
    if (has_jump_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->jump_type());
    }

    // optional int32 last_task = 11;
    if (has_last_task()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->last_task());
    }

    // optional int32 active_level = 7;
    if (has_active_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->active_level());
    }

  }
  // repeated int32 open_task = 10;
  {
    int data_size = 0;
    for (int i = 0; i < this->open_task_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->open_task(i));
    }
    total_size += 1 * this->open_task_size() + data_size;
  }

  // repeated .DianShiTech.Config.ConfigTypeGroup complete_condition = 8;
  total_size += 1 * this->complete_condition_size();
  for (int i = 0; i < this->complete_condition_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->complete_condition(i));
  }

  // repeated .DianShiTech.Config.ConfigTypeGroup bonus = 9;
  total_size += 1 * this->bonus_size();
  for (int i = 0; i < this->bonus_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->bonus(i));
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

void TaskConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TaskConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TaskConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TaskConfig::MergeFrom(const TaskConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  open_task_.MergeFrom(from.open_task_);
  complete_condition_.MergeFrom(from.complete_condition_);
  bonus_.MergeFrom(from.bonus_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from.has_rarity()) {
      set_rarity(from.rarity());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_task_id()) {
      set_task_id(from.task_id());
    }
    if (from.has_desciption()) {
      set_desciption(from.desciption());
    }
    if (from.has_jump_value()) {
      set_jump_value(from.jump_value());
    }
    if (from.has_task_type()) {
      set_task_type(from.task_type());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_jump_type()) {
      set_jump_type(from.jump_type());
    }
    if (from.has_last_task()) {
      set_last_task(from.last_task());
    }
    if (from.has_active_level()) {
      set_active_level(from.active_level());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TaskConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TaskConfig::CopyFrom(const TaskConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TaskConfig::IsInitialized() const {

  return true;
}

void TaskConfig::Swap(TaskConfig* other) {
  if (other != this) {
    open_task_.Swap(&other->open_task_);
    std::swap(rarity_, other->rarity_);
    std::swap(id_, other->id_);
    std::swap(task_id_, other->task_id_);
    std::swap(desciption_, other->desciption_);
    std::swap(jump_value_, other->jump_value_);
    std::swap(task_type_, other->task_type_);
    std::swap(name_, other->name_);
    std::swap(jump_type_, other->jump_type_);
    std::swap(last_task_, other->last_task_);
    complete_condition_.Swap(&other->complete_condition_);
    std::swap(active_level_, other->active_level_);
    bonus_.Swap(&other->bonus_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TaskConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TaskConfig_descriptor_;
  metadata.reflection = TaskConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
