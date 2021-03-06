// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DialogueConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "DialogueConfig.pb.h"

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

const ::google::protobuf::Descriptor* DialogueConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DialogueConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_DialogueConfig_2eproto() {
  protobuf_AddDesc_DialogueConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "DialogueConfig.proto");
  GOOGLE_CHECK(file != NULL);
  DialogueConfig_descriptor_ = file->message_type(0);
  static const int DialogueConfig_offsets_[12] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DialogueConfig, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DialogueConfig, side_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DialogueConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DialogueConfig, desc_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DialogueConfig, portrait_pic_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DialogueConfig, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DialogueConfig, card_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DialogueConfig, toward_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DialogueConfig, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DialogueConfig, direction_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DialogueConfig, order_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DialogueConfig, stage_id_),
  };
  DialogueConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DialogueConfig_descriptor_,
      DialogueConfig::default_instance_,
      DialogueConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DialogueConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DialogueConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DialogueConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_DialogueConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DialogueConfig_descriptor_, &DialogueConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_DialogueConfig_2eproto() {
  delete DialogueConfig::default_instance_;
  delete DialogueConfig_reflection_;
}

void protobuf_AddDesc_DialogueConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024DialogueConfig.proto\022\022DianShiTech.Conf"
    "ig\032\025ConfigTypeGroup.proto\"\315\001\n\016DialogueCo"
    "nfig\022\014\n\004type\030\003 \001(\005\022\014\n\004side\030\005 \001(\005\022\n\n\002id\030\001"
    " \001(\005\022\014\n\004desc\030\t \001(\t\022\024\n\014portrait_pic\030\013 \001(\005"
    "\022\014\n\004name\030\r \001(\t\022\017\n\007card_id\030\004 \001(\005\022\016\n\006towar"
    "d\030\014 \001(\005\022\014\n\004time\030\010 \001(\005\022\021\n\tdirection\030\007 \001(\005"
    "\022\r\n\005order\030\006 \001(\005\022\020\n\010stage_id\030\002 \001(\005", 273);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "DialogueConfig.proto", &protobuf_RegisterTypes);
  DialogueConfig::default_instance_ = new DialogueConfig();
  DialogueConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_DialogueConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_DialogueConfig_2eproto {
  StaticDescriptorInitializer_DialogueConfig_2eproto() {
    protobuf_AddDesc_DialogueConfig_2eproto();
  }
} static_descriptor_initializer_DialogueConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int DialogueConfig::kTypeFieldNumber;
const int DialogueConfig::kSideFieldNumber;
const int DialogueConfig::kIdFieldNumber;
const int DialogueConfig::kDescFieldNumber;
const int DialogueConfig::kPortraitPicFieldNumber;
const int DialogueConfig::kNameFieldNumber;
const int DialogueConfig::kCardIdFieldNumber;
const int DialogueConfig::kTowardFieldNumber;
const int DialogueConfig::kTimeFieldNumber;
const int DialogueConfig::kDirectionFieldNumber;
const int DialogueConfig::kOrderFieldNumber;
const int DialogueConfig::kStageIdFieldNumber;
#endif  // !_MSC_VER

DialogueConfig::DialogueConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void DialogueConfig::InitAsDefaultInstance() {
}

DialogueConfig::DialogueConfig(const DialogueConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void DialogueConfig::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0;
  side_ = 0;
  id_ = 0;
  desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  portrait_pic_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  card_id_ = 0;
  toward_ = 0;
  time_ = 0;
  direction_ = 0;
  order_ = 0;
  stage_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DialogueConfig::~DialogueConfig() {
  SharedDtor();
}

void DialogueConfig::SharedDtor() {
  if (desc_ != &::google::protobuf::internal::kEmptyString) {
    delete desc_;
  }
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (this != default_instance_) {
  }
}

void DialogueConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DialogueConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DialogueConfig_descriptor_;
}

const DialogueConfig& DialogueConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_DialogueConfig_2eproto();
  return *default_instance_;
}

DialogueConfig* DialogueConfig::default_instance_ = NULL;

DialogueConfig* DialogueConfig::New() const {
  return new DialogueConfig;
}

void DialogueConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0;
    side_ = 0;
    id_ = 0;
    if (has_desc()) {
      if (desc_ != &::google::protobuf::internal::kEmptyString) {
        desc_->clear();
      }
    }
    portrait_pic_ = 0;
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    card_id_ = 0;
    toward_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    time_ = 0;
    direction_ = 0;
    order_ = 0;
    stage_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DialogueConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_stage_id;
        break;
      }

      // optional int32 stage_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_stage_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &stage_id_)));
          set_has_stage_id();
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
        if (input->ExpectTag(32)) goto parse_card_id;
        break;
      }

      // optional int32 card_id = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_card_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &card_id_)));
          set_has_card_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_side;
        break;
      }

      // optional int32 side = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_side:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &side_)));
          set_has_side();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_order;
        break;
      }

      // optional int32 order = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_order:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &order_)));
          set_has_order();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_direction;
        break;
      }

      // optional int32 direction = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_direction:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &direction_)));
          set_has_direction();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_time;
        break;
      }

      // optional int32 time = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &time_)));
          set_has_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(74)) goto parse_desc;
        break;
      }

      // optional string desc = 9;
      case 9: {
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
        if (input->ExpectTag(88)) goto parse_portrait_pic;
        break;
      }

      // optional int32 portrait_pic = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_portrait_pic:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &portrait_pic_)));
          set_has_portrait_pic();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(96)) goto parse_toward;
        break;
      }

      // optional int32 toward = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_toward:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &toward_)));
          set_has_toward();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(106)) goto parse_name;
        break;
      }

      // optional string name = 13;
      case 13: {
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

void DialogueConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 stage_id = 2;
  if (has_stage_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->stage_id(), output);
  }

  // optional int32 type = 3;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->type(), output);
  }

  // optional int32 card_id = 4;
  if (has_card_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->card_id(), output);
  }

  // optional int32 side = 5;
  if (has_side()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->side(), output);
  }

  // optional int32 order = 6;
  if (has_order()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->order(), output);
  }

  // optional int32 direction = 7;
  if (has_direction()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->direction(), output);
  }

  // optional int32 time = 8;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->time(), output);
  }

  // optional string desc = 9;
  if (has_desc()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->desc().data(), this->desc().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      9, this->desc(), output);
  }

  // optional int32 portrait_pic = 11;
  if (has_portrait_pic()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(11, this->portrait_pic(), output);
  }

  // optional int32 toward = 12;
  if (has_toward()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(12, this->toward(), output);
  }

  // optional string name = 13;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      13, this->name(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DialogueConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 stage_id = 2;
  if (has_stage_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->stage_id(), target);
  }

  // optional int32 type = 3;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->type(), target);
  }

  // optional int32 card_id = 4;
  if (has_card_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->card_id(), target);
  }

  // optional int32 side = 5;
  if (has_side()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->side(), target);
  }

  // optional int32 order = 6;
  if (has_order()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->order(), target);
  }

  // optional int32 direction = 7;
  if (has_direction()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->direction(), target);
  }

  // optional int32 time = 8;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->time(), target);
  }

  // optional string desc = 9;
  if (has_desc()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->desc().data(), this->desc().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        9, this->desc(), target);
  }

  // optional int32 portrait_pic = 11;
  if (has_portrait_pic()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(11, this->portrait_pic(), target);
  }

  // optional int32 toward = 12;
  if (has_toward()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(12, this->toward(), target);
  }

  // optional string name = 13;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        13, this->name(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DialogueConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 type = 3;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
    }

    // optional int32 side = 5;
    if (has_side()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->side());
    }

    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional string desc = 9;
    if (has_desc()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->desc());
    }

    // optional int32 portrait_pic = 11;
    if (has_portrait_pic()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->portrait_pic());
    }

    // optional string name = 13;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional int32 card_id = 4;
    if (has_card_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->card_id());
    }

    // optional int32 toward = 12;
    if (has_toward()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->toward());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int32 time = 8;
    if (has_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->time());
    }

    // optional int32 direction = 7;
    if (has_direction()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->direction());
    }

    // optional int32 order = 6;
    if (has_order()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->order());
    }

    // optional int32 stage_id = 2;
    if (has_stage_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->stage_id());
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

void DialogueConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DialogueConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DialogueConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DialogueConfig::MergeFrom(const DialogueConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_side()) {
      set_side(from.side());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_desc()) {
      set_desc(from.desc());
    }
    if (from.has_portrait_pic()) {
      set_portrait_pic(from.portrait_pic());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_card_id()) {
      set_card_id(from.card_id());
    }
    if (from.has_toward()) {
      set_toward(from.toward());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_time()) {
      set_time(from.time());
    }
    if (from.has_direction()) {
      set_direction(from.direction());
    }
    if (from.has_order()) {
      set_order(from.order());
    }
    if (from.has_stage_id()) {
      set_stage_id(from.stage_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DialogueConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DialogueConfig::CopyFrom(const DialogueConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DialogueConfig::IsInitialized() const {

  return true;
}

void DialogueConfig::Swap(DialogueConfig* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(side_, other->side_);
    std::swap(id_, other->id_);
    std::swap(desc_, other->desc_);
    std::swap(portrait_pic_, other->portrait_pic_);
    std::swap(name_, other->name_);
    std::swap(card_id_, other->card_id_);
    std::swap(toward_, other->toward_);
    std::swap(time_, other->time_);
    std::swap(direction_, other->direction_);
    std::swap(order_, other->order_);
    std::swap(stage_id_, other->stage_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DialogueConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DialogueConfig_descriptor_;
  metadata.reflection = DialogueConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
