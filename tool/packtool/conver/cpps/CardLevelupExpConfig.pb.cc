// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CardLevelupExpConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CardLevelupExpConfig.pb.h"

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

const ::google::protobuf::Descriptor* CardLevelupExpConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CardLevelupExpConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CardLevelupExpConfig_2eproto() {
  protobuf_AddDesc_CardLevelupExpConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CardLevelupExpConfig.proto");
  GOOGLE_CHECK(file != NULL);
  CardLevelupExpConfig_descriptor_ = file->message_type(0);
  static const int CardLevelupExpConfig_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardLevelupExpConfig, total_exp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardLevelupExpConfig, exp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardLevelupExpConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardLevelupExpConfig, level_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardLevelupExpConfig, card_max_rank_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardLevelupExpConfig, drop_),
  };
  CardLevelupExpConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CardLevelupExpConfig_descriptor_,
      CardLevelupExpConfig::default_instance_,
      CardLevelupExpConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardLevelupExpConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardLevelupExpConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CardLevelupExpConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CardLevelupExpConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CardLevelupExpConfig_descriptor_, &CardLevelupExpConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CardLevelupExpConfig_2eproto() {
  delete CardLevelupExpConfig::default_instance_;
  delete CardLevelupExpConfig_reflection_;
}

void protobuf_AddDesc_CardLevelupExpConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032CardLevelupExpConfig.proto\022\022DianShiTec"
    "h.Config\032\025ConfigTypeGroup.proto\"v\n\024CardL"
    "evelupExpConfig\022\021\n\ttotal_exp\030\005 \001(\005\022\013\n\003ex"
    "p\030\004 \001(\005\022\n\n\002id\030\001 \001(\005\022\r\n\005level\030\002 \001(\005\022\025\n\rca"
    "rd_max_rank\030\003 \001(\005\022\014\n\004drop\030\006 \003(\005", 191);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CardLevelupExpConfig.proto", &protobuf_RegisterTypes);
  CardLevelupExpConfig::default_instance_ = new CardLevelupExpConfig();
  CardLevelupExpConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CardLevelupExpConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CardLevelupExpConfig_2eproto {
  StaticDescriptorInitializer_CardLevelupExpConfig_2eproto() {
    protobuf_AddDesc_CardLevelupExpConfig_2eproto();
  }
} static_descriptor_initializer_CardLevelupExpConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CardLevelupExpConfig::kTotalExpFieldNumber;
const int CardLevelupExpConfig::kExpFieldNumber;
const int CardLevelupExpConfig::kIdFieldNumber;
const int CardLevelupExpConfig::kLevelFieldNumber;
const int CardLevelupExpConfig::kCardMaxRankFieldNumber;
const int CardLevelupExpConfig::kDropFieldNumber;
#endif  // !_MSC_VER

CardLevelupExpConfig::CardLevelupExpConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CardLevelupExpConfig::InitAsDefaultInstance() {
}

CardLevelupExpConfig::CardLevelupExpConfig(const CardLevelupExpConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CardLevelupExpConfig::SharedCtor() {
  _cached_size_ = 0;
  total_exp_ = 0;
  exp_ = 0;
  id_ = 0;
  level_ = 0;
  card_max_rank_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CardLevelupExpConfig::~CardLevelupExpConfig() {
  SharedDtor();
}

void CardLevelupExpConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CardLevelupExpConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CardLevelupExpConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CardLevelupExpConfig_descriptor_;
}

const CardLevelupExpConfig& CardLevelupExpConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CardLevelupExpConfig_2eproto();
  return *default_instance_;
}

CardLevelupExpConfig* CardLevelupExpConfig::default_instance_ = NULL;

CardLevelupExpConfig* CardLevelupExpConfig::New() const {
  return new CardLevelupExpConfig;
}

void CardLevelupExpConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    total_exp_ = 0;
    exp_ = 0;
    id_ = 0;
    level_ = 0;
    card_max_rank_ = 0;
  }
  drop_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CardLevelupExpConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_level;
        break;
      }

      // optional int32 level = 2;
      case 2: {
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
        if (input->ExpectTag(24)) goto parse_card_max_rank;
        break;
      }

      // optional int32 card_max_rank = 3;
      case 3: {
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
        if (input->ExpectTag(32)) goto parse_exp;
        break;
      }

      // optional int32 exp = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_exp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &exp_)));
          set_has_exp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_total_exp;
        break;
      }

      // optional int32 total_exp = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_total_exp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &total_exp_)));
          set_has_total_exp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_drop;
        break;
      }

      // repeated int32 drop = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_drop:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 48, input, this->mutable_drop())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_drop())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_drop;
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

void CardLevelupExpConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 level = 2;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->level(), output);
  }

  // optional int32 card_max_rank = 3;
  if (has_card_max_rank()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->card_max_rank(), output);
  }

  // optional int32 exp = 4;
  if (has_exp()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->exp(), output);
  }

  // optional int32 total_exp = 5;
  if (has_total_exp()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->total_exp(), output);
  }

  // repeated int32 drop = 6;
  for (int i = 0; i < this->drop_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      6, this->drop(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CardLevelupExpConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 level = 2;
  if (has_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->level(), target);
  }

  // optional int32 card_max_rank = 3;
  if (has_card_max_rank()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->card_max_rank(), target);
  }

  // optional int32 exp = 4;
  if (has_exp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->exp(), target);
  }

  // optional int32 total_exp = 5;
  if (has_total_exp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->total_exp(), target);
  }

  // repeated int32 drop = 6;
  for (int i = 0; i < this->drop_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(6, this->drop(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CardLevelupExpConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 total_exp = 5;
    if (has_total_exp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->total_exp());
    }

    // optional int32 exp = 4;
    if (has_exp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->exp());
    }

    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 level = 2;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->level());
    }

    // optional int32 card_max_rank = 3;
    if (has_card_max_rank()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->card_max_rank());
    }

  }
  // repeated int32 drop = 6;
  {
    int data_size = 0;
    for (int i = 0; i < this->drop_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->drop(i));
    }
    total_size += 1 * this->drop_size() + data_size;
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

void CardLevelupExpConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CardLevelupExpConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CardLevelupExpConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CardLevelupExpConfig::MergeFrom(const CardLevelupExpConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  drop_.MergeFrom(from.drop_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_total_exp()) {
      set_total_exp(from.total_exp());
    }
    if (from.has_exp()) {
      set_exp(from.exp());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_level()) {
      set_level(from.level());
    }
    if (from.has_card_max_rank()) {
      set_card_max_rank(from.card_max_rank());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CardLevelupExpConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CardLevelupExpConfig::CopyFrom(const CardLevelupExpConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CardLevelupExpConfig::IsInitialized() const {

  return true;
}

void CardLevelupExpConfig::Swap(CardLevelupExpConfig* other) {
  if (other != this) {
    std::swap(total_exp_, other->total_exp_);
    std::swap(exp_, other->exp_);
    std::swap(id_, other->id_);
    std::swap(level_, other->level_);
    std::swap(card_max_rank_, other->card_max_rank_);
    drop_.Swap(&other->drop_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CardLevelupExpConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CardLevelupExpConfig_descriptor_;
  metadata.reflection = CardLevelupExpConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
