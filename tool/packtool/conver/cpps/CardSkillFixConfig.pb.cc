// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CardSkillFixConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CardSkillFixConfig.pb.h"

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

const ::google::protobuf::Descriptor* CardSkillFixConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CardSkillFixConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CardSkillFixConfig_2eproto() {
  protobuf_AddDesc_CardSkillFixConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CardSkillFixConfig.proto");
  GOOGLE_CHECK(file != NULL);
  CardSkillFixConfig_descriptor_ = file->message_type(0);
  static const int CardSkillFixConfig_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardSkillFixConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardSkillFixConfig, power_add_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardSkillFixConfig, card_max_rank_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardSkillFixConfig, fix_value_),
  };
  CardSkillFixConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CardSkillFixConfig_descriptor_,
      CardSkillFixConfig::default_instance_,
      CardSkillFixConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardSkillFixConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardSkillFixConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CardSkillFixConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CardSkillFixConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CardSkillFixConfig_descriptor_, &CardSkillFixConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CardSkillFixConfig_2eproto() {
  delete CardSkillFixConfig::default_instance_;
  delete CardSkillFixConfig_reflection_;
}

void protobuf_AddDesc_CardSkillFixConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030CardSkillFixConfig.proto\022\022DianShiTech."
    "Config\032\025ConfigTypeGroup.proto\"]\n\022CardSki"
    "llFixConfig\022\n\n\002id\030\001 \001(\005\022\021\n\tpower_add\030\004 \001"
    "(\005\022\025\n\rcard_max_rank\030\002 \001(\005\022\021\n\tfix_value\030\003"
    " \001(\005", 164);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CardSkillFixConfig.proto", &protobuf_RegisterTypes);
  CardSkillFixConfig::default_instance_ = new CardSkillFixConfig();
  CardSkillFixConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CardSkillFixConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CardSkillFixConfig_2eproto {
  StaticDescriptorInitializer_CardSkillFixConfig_2eproto() {
    protobuf_AddDesc_CardSkillFixConfig_2eproto();
  }
} static_descriptor_initializer_CardSkillFixConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CardSkillFixConfig::kIdFieldNumber;
const int CardSkillFixConfig::kPowerAddFieldNumber;
const int CardSkillFixConfig::kCardMaxRankFieldNumber;
const int CardSkillFixConfig::kFixValueFieldNumber;
#endif  // !_MSC_VER

CardSkillFixConfig::CardSkillFixConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CardSkillFixConfig::InitAsDefaultInstance() {
}

CardSkillFixConfig::CardSkillFixConfig(const CardSkillFixConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CardSkillFixConfig::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  power_add_ = 0;
  card_max_rank_ = 0;
  fix_value_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CardSkillFixConfig::~CardSkillFixConfig() {
  SharedDtor();
}

void CardSkillFixConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CardSkillFixConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CardSkillFixConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CardSkillFixConfig_descriptor_;
}

const CardSkillFixConfig& CardSkillFixConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CardSkillFixConfig_2eproto();
  return *default_instance_;
}

CardSkillFixConfig* CardSkillFixConfig::default_instance_ = NULL;

CardSkillFixConfig* CardSkillFixConfig::New() const {
  return new CardSkillFixConfig;
}

void CardSkillFixConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
    power_add_ = 0;
    card_max_rank_ = 0;
    fix_value_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CardSkillFixConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_card_max_rank;
        break;
      }

      // optional int32 card_max_rank = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_card_max_rank:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &card_max_rank_)));
          set_has_card_max_rank();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_fix_value;
        break;
      }

      // optional int32 fix_value = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_fix_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &fix_value_)));
          set_has_fix_value();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_power_add;
        break;
      }

      // optional int32 power_add = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_power_add:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &power_add_)));
          set_has_power_add();
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

void CardSkillFixConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 card_max_rank = 2;
  if (has_card_max_rank()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->card_max_rank(), output);
  }

  // optional int32 fix_value = 3;
  if (has_fix_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->fix_value(), output);
  }

  // optional int32 power_add = 4;
  if (has_power_add()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->power_add(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CardSkillFixConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 card_max_rank = 2;
  if (has_card_max_rank()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->card_max_rank(), target);
  }

  // optional int32 fix_value = 3;
  if (has_fix_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->fix_value(), target);
  }

  // optional int32 power_add = 4;
  if (has_power_add()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->power_add(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CardSkillFixConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 power_add = 4;
    if (has_power_add()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->power_add());
    }

    // optional int32 card_max_rank = 2;
    if (has_card_max_rank()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->card_max_rank());
    }

    // optional int32 fix_value = 3;
    if (has_fix_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->fix_value());
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

void CardSkillFixConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CardSkillFixConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CardSkillFixConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CardSkillFixConfig::MergeFrom(const CardSkillFixConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_power_add()) {
      set_power_add(from.power_add());
    }
    if (from.has_card_max_rank()) {
      set_card_max_rank(from.card_max_rank());
    }
    if (from.has_fix_value()) {
      set_fix_value(from.fix_value());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CardSkillFixConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CardSkillFixConfig::CopyFrom(const CardSkillFixConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CardSkillFixConfig::IsInitialized() const {

  return true;
}

void CardSkillFixConfig::Swap(CardSkillFixConfig* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(power_add_, other->power_add_);
    std::swap(card_max_rank_, other->card_max_rank_);
    std::swap(fix_value_, other->fix_value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CardSkillFixConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CardSkillFixConfig_descriptor_;
  metadata.reflection = CardSkillFixConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
