// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CardGainExpConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CardGainExpConfig.pb.h"

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

const ::google::protobuf::Descriptor* CardGainExpConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CardGainExpConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CardGainExpConfig_2eproto() {
  protobuf_AddDesc_CardGainExpConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CardGainExpConfig.proto");
  GOOGLE_CHECK(file != NULL);
  CardGainExpConfig_descriptor_ = file->message_type(0);
  static const int CardGainExpConfig_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardGainExpConfig, coin_cost_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardGainExpConfig, currency_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardGainExpConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardGainExpConfig, level_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardGainExpConfig, gain_exp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardGainExpConfig, rank_),
  };
  CardGainExpConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CardGainExpConfig_descriptor_,
      CardGainExpConfig::default_instance_,
      CardGainExpConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardGainExpConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CardGainExpConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CardGainExpConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CardGainExpConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CardGainExpConfig_descriptor_, &CardGainExpConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CardGainExpConfig_2eproto() {
  delete CardGainExpConfig::default_instance_;
  delete CardGainExpConfig_reflection_;
}

void protobuf_AddDesc_CardGainExpConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027CardGainExpConfig.proto\022\022DianShiTech.C"
    "onfig\032\025ConfigTypeGroup.proto\"x\n\021CardGain"
    "ExpConfig\022\021\n\tcoin_cost\030\006 \001(\005\022\025\n\rcurrency"
    "_type\030\005 \001(\005\022\n\n\002id\030\001 \001(\005\022\r\n\005level\030\002 \001(\005\022\020"
    "\n\010gain_exp\030\004 \001(\005\022\014\n\004rank\030\003 \001(\005", 190);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CardGainExpConfig.proto", &protobuf_RegisterTypes);
  CardGainExpConfig::default_instance_ = new CardGainExpConfig();
  CardGainExpConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CardGainExpConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CardGainExpConfig_2eproto {
  StaticDescriptorInitializer_CardGainExpConfig_2eproto() {
    protobuf_AddDesc_CardGainExpConfig_2eproto();
  }
} static_descriptor_initializer_CardGainExpConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CardGainExpConfig::kCoinCostFieldNumber;
const int CardGainExpConfig::kCurrencyTypeFieldNumber;
const int CardGainExpConfig::kIdFieldNumber;
const int CardGainExpConfig::kLevelFieldNumber;
const int CardGainExpConfig::kGainExpFieldNumber;
const int CardGainExpConfig::kRankFieldNumber;
#endif  // !_MSC_VER

CardGainExpConfig::CardGainExpConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CardGainExpConfig::InitAsDefaultInstance() {
}

CardGainExpConfig::CardGainExpConfig(const CardGainExpConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CardGainExpConfig::SharedCtor() {
  _cached_size_ = 0;
  coin_cost_ = 0;
  currency_type_ = 0;
  id_ = 0;
  level_ = 0;
  gain_exp_ = 0;
  rank_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CardGainExpConfig::~CardGainExpConfig() {
  SharedDtor();
}

void CardGainExpConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CardGainExpConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CardGainExpConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CardGainExpConfig_descriptor_;
}

const CardGainExpConfig& CardGainExpConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CardGainExpConfig_2eproto();
  return *default_instance_;
}

CardGainExpConfig* CardGainExpConfig::default_instance_ = NULL;

CardGainExpConfig* CardGainExpConfig::New() const {
  return new CardGainExpConfig;
}

void CardGainExpConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    coin_cost_ = 0;
    currency_type_ = 0;
    id_ = 0;
    level_ = 0;
    gain_exp_ = 0;
    rank_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CardGainExpConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(24)) goto parse_rank;
        break;
      }

      // optional int32 rank = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rank:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rank_)));
          set_has_rank();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_gain_exp;
        break;
      }

      // optional int32 gain_exp = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_gain_exp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &gain_exp_)));
          set_has_gain_exp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_currency_type;
        break;
      }

      // optional int32 currency_type = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_currency_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &currency_type_)));
          set_has_currency_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_coin_cost;
        break;
      }

      // optional int32 coin_cost = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_coin_cost:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &coin_cost_)));
          set_has_coin_cost();
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

void CardGainExpConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 level = 2;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->level(), output);
  }

  // optional int32 rank = 3;
  if (has_rank()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->rank(), output);
  }

  // optional int32 gain_exp = 4;
  if (has_gain_exp()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->gain_exp(), output);
  }

  // optional int32 currency_type = 5;
  if (has_currency_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->currency_type(), output);
  }

  // optional int32 coin_cost = 6;
  if (has_coin_cost()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->coin_cost(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CardGainExpConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 level = 2;
  if (has_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->level(), target);
  }

  // optional int32 rank = 3;
  if (has_rank()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->rank(), target);
  }

  // optional int32 gain_exp = 4;
  if (has_gain_exp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->gain_exp(), target);
  }

  // optional int32 currency_type = 5;
  if (has_currency_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->currency_type(), target);
  }

  // optional int32 coin_cost = 6;
  if (has_coin_cost()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->coin_cost(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CardGainExpConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 coin_cost = 6;
    if (has_coin_cost()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->coin_cost());
    }

    // optional int32 currency_type = 5;
    if (has_currency_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->currency_type());
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

    // optional int32 gain_exp = 4;
    if (has_gain_exp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->gain_exp());
    }

    // optional int32 rank = 3;
    if (has_rank()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->rank());
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

void CardGainExpConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CardGainExpConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CardGainExpConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CardGainExpConfig::MergeFrom(const CardGainExpConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_coin_cost()) {
      set_coin_cost(from.coin_cost());
    }
    if (from.has_currency_type()) {
      set_currency_type(from.currency_type());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_level()) {
      set_level(from.level());
    }
    if (from.has_gain_exp()) {
      set_gain_exp(from.gain_exp());
    }
    if (from.has_rank()) {
      set_rank(from.rank());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CardGainExpConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CardGainExpConfig::CopyFrom(const CardGainExpConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CardGainExpConfig::IsInitialized() const {

  return true;
}

void CardGainExpConfig::Swap(CardGainExpConfig* other) {
  if (other != this) {
    std::swap(coin_cost_, other->coin_cost_);
    std::swap(currency_type_, other->currency_type_);
    std::swap(id_, other->id_);
    std::swap(level_, other->level_);
    std::swap(gain_exp_, other->gain_exp_);
    std::swap(rank_, other->rank_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CardGainExpConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CardGainExpConfig_descriptor_;
  metadata.reflection = CardGainExpConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
