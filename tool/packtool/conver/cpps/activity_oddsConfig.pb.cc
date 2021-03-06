// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: activity_oddsConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "activity_oddsConfig.pb.h"

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

const ::google::protobuf::Descriptor* activity_oddsConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  activity_oddsConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_activity_5foddsConfig_2eproto() {
  protobuf_AddDesc_activity_5foddsConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "activity_oddsConfig.proto");
  GOOGLE_CHECK(file != NULL);
  activity_oddsConfig_descriptor_ = file->message_type(0);
  static const int activity_oddsConfig_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(activity_oddsConfig, currency_type_originalprice_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(activity_oddsConfig, cost_originalprice_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(activity_oddsConfig, currency_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(activity_oddsConfig, cost_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(activity_oddsConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(activity_oddsConfig, bonus_),
  };
  activity_oddsConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      activity_oddsConfig_descriptor_,
      activity_oddsConfig::default_instance_,
      activity_oddsConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(activity_oddsConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(activity_oddsConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(activity_oddsConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_activity_5foddsConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    activity_oddsConfig_descriptor_, &activity_oddsConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_activity_5foddsConfig_2eproto() {
  delete activity_oddsConfig::default_instance_;
  delete activity_oddsConfig_reflection_;
}

void protobuf_AddDesc_activity_5foddsConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031activity_oddsConfig.proto\022\022DianShiTech"
    ".Config\032\025ConfigTypeGroup.proto\"\226\001\n\023activ"
    "ity_oddsConfig\022#\n\033currency_type_original"
    "price\030\004 \001(\005\022\032\n\022cost_originalprice\030\005 \001(\005\022"
    "\025\n\rcurrency_type\030\002 \001(\005\022\014\n\004cost\030\003 \001(\005\022\n\n\002"
    "id\030\001 \001(\005\022\r\n\005bonus\030\006 \003(\005", 223);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "activity_oddsConfig.proto", &protobuf_RegisterTypes);
  activity_oddsConfig::default_instance_ = new activity_oddsConfig();
  activity_oddsConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_activity_5foddsConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_activity_5foddsConfig_2eproto {
  StaticDescriptorInitializer_activity_5foddsConfig_2eproto() {
    protobuf_AddDesc_activity_5foddsConfig_2eproto();
  }
} static_descriptor_initializer_activity_5foddsConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int activity_oddsConfig::kCurrencyTypeOriginalpriceFieldNumber;
const int activity_oddsConfig::kCostOriginalpriceFieldNumber;
const int activity_oddsConfig::kCurrencyTypeFieldNumber;
const int activity_oddsConfig::kCostFieldNumber;
const int activity_oddsConfig::kIdFieldNumber;
const int activity_oddsConfig::kBonusFieldNumber;
#endif  // !_MSC_VER

activity_oddsConfig::activity_oddsConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void activity_oddsConfig::InitAsDefaultInstance() {
}

activity_oddsConfig::activity_oddsConfig(const activity_oddsConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void activity_oddsConfig::SharedCtor() {
  _cached_size_ = 0;
  currency_type_originalprice_ = 0;
  cost_originalprice_ = 0;
  currency_type_ = 0;
  cost_ = 0;
  id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

activity_oddsConfig::~activity_oddsConfig() {
  SharedDtor();
}

void activity_oddsConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void activity_oddsConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* activity_oddsConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return activity_oddsConfig_descriptor_;
}

const activity_oddsConfig& activity_oddsConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_activity_5foddsConfig_2eproto();
  return *default_instance_;
}

activity_oddsConfig* activity_oddsConfig::default_instance_ = NULL;

activity_oddsConfig* activity_oddsConfig::New() const {
  return new activity_oddsConfig;
}

void activity_oddsConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    currency_type_originalprice_ = 0;
    cost_originalprice_ = 0;
    currency_type_ = 0;
    cost_ = 0;
    id_ = 0;
  }
  bonus_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool activity_oddsConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_currency_type;
        break;
      }

      // optional int32 currency_type = 2;
      case 2: {
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
        if (input->ExpectTag(24)) goto parse_cost;
        break;
      }

      // optional int32 cost = 3;
      case 3: {
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
        if (input->ExpectTag(32)) goto parse_currency_type_originalprice;
        break;
      }

      // optional int32 currency_type_originalprice = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_currency_type_originalprice:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &currency_type_originalprice_)));
          set_has_currency_type_originalprice();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_cost_originalprice;
        break;
      }

      // optional int32 cost_originalprice = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_cost_originalprice:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &cost_originalprice_)));
          set_has_cost_originalprice();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_bonus;
        break;
      }

      // repeated int32 bonus = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_bonus:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 48, input, this->mutable_bonus())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_bonus())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_bonus;
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

void activity_oddsConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 currency_type = 2;
  if (has_currency_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->currency_type(), output);
  }

  // optional int32 cost = 3;
  if (has_cost()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->cost(), output);
  }

  // optional int32 currency_type_originalprice = 4;
  if (has_currency_type_originalprice()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->currency_type_originalprice(), output);
  }

  // optional int32 cost_originalprice = 5;
  if (has_cost_originalprice()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->cost_originalprice(), output);
  }

  // repeated int32 bonus = 6;
  for (int i = 0; i < this->bonus_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      6, this->bonus(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* activity_oddsConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 currency_type = 2;
  if (has_currency_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->currency_type(), target);
  }

  // optional int32 cost = 3;
  if (has_cost()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->cost(), target);
  }

  // optional int32 currency_type_originalprice = 4;
  if (has_currency_type_originalprice()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->currency_type_originalprice(), target);
  }

  // optional int32 cost_originalprice = 5;
  if (has_cost_originalprice()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->cost_originalprice(), target);
  }

  // repeated int32 bonus = 6;
  for (int i = 0; i < this->bonus_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(6, this->bonus(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int activity_oddsConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 currency_type_originalprice = 4;
    if (has_currency_type_originalprice()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->currency_type_originalprice());
    }

    // optional int32 cost_originalprice = 5;
    if (has_cost_originalprice()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->cost_originalprice());
    }

    // optional int32 currency_type = 2;
    if (has_currency_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->currency_type());
    }

    // optional int32 cost = 3;
    if (has_cost()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->cost());
    }

    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

  }
  // repeated int32 bonus = 6;
  {
    int data_size = 0;
    for (int i = 0; i < this->bonus_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->bonus(i));
    }
    total_size += 1 * this->bonus_size() + data_size;
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

void activity_oddsConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const activity_oddsConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const activity_oddsConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void activity_oddsConfig::MergeFrom(const activity_oddsConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  bonus_.MergeFrom(from.bonus_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_currency_type_originalprice()) {
      set_currency_type_originalprice(from.currency_type_originalprice());
    }
    if (from.has_cost_originalprice()) {
      set_cost_originalprice(from.cost_originalprice());
    }
    if (from.has_currency_type()) {
      set_currency_type(from.currency_type());
    }
    if (from.has_cost()) {
      set_cost(from.cost());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void activity_oddsConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void activity_oddsConfig::CopyFrom(const activity_oddsConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool activity_oddsConfig::IsInitialized() const {

  return true;
}

void activity_oddsConfig::Swap(activity_oddsConfig* other) {
  if (other != this) {
    std::swap(currency_type_originalprice_, other->currency_type_originalprice_);
    std::swap(cost_originalprice_, other->cost_originalprice_);
    std::swap(currency_type_, other->currency_type_);
    std::swap(cost_, other->cost_);
    std::swap(id_, other->id_);
    bonus_.Swap(&other->bonus_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata activity_oddsConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = activity_oddsConfig_descriptor_;
  metadata.reflection = activity_oddsConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
