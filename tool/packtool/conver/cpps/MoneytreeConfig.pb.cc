// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MoneytreeConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MoneytreeConfig.pb.h"

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

const ::google::protobuf::Descriptor* MoneytreeConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MoneytreeConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MoneytreeConfig_2eproto() {
  protobuf_AddDesc_MoneytreeConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MoneytreeConfig.proto");
  GOOGLE_CHECK(file != NULL);
  MoneytreeConfig_descriptor_ = file->message_type(0);
  static const int MoneytreeConfig_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MoneytreeConfig, base_chance_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MoneytreeConfig, add_chance_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MoneytreeConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MoneytreeConfig, vip_currency_add_count_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MoneytreeConfig, normal_currency_add_count_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MoneytreeConfig, base_currency_count_),
  };
  MoneytreeConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MoneytreeConfig_descriptor_,
      MoneytreeConfig::default_instance_,
      MoneytreeConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MoneytreeConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MoneytreeConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MoneytreeConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MoneytreeConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MoneytreeConfig_descriptor_, &MoneytreeConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MoneytreeConfig_2eproto() {
  delete MoneytreeConfig::default_instance_;
  delete MoneytreeConfig_reflection_;
}

void protobuf_AddDesc_MoneytreeConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025MoneytreeConfig.proto\022\022DianShiTech.Con"
    "fig\032\025ConfigTypeGroup.proto\"\246\001\n\017Moneytree"
    "Config\022\023\n\013base_chance\030\002 \001(\005\022\022\n\nadd_chanc"
    "e\030\003 \001(\005\022\n\n\002id\030\001 \001(\005\022\036\n\026vip_currency_add_"
    "count\030\006 \001(\005\022!\n\031normal_currency_add_count"
    "\030\005 \001(\005\022\033\n\023base_currency_count\030\004 \001(\005", 235);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MoneytreeConfig.proto", &protobuf_RegisterTypes);
  MoneytreeConfig::default_instance_ = new MoneytreeConfig();
  MoneytreeConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MoneytreeConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MoneytreeConfig_2eproto {
  StaticDescriptorInitializer_MoneytreeConfig_2eproto() {
    protobuf_AddDesc_MoneytreeConfig_2eproto();
  }
} static_descriptor_initializer_MoneytreeConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MoneytreeConfig::kBaseChanceFieldNumber;
const int MoneytreeConfig::kAddChanceFieldNumber;
const int MoneytreeConfig::kIdFieldNumber;
const int MoneytreeConfig::kVipCurrencyAddCountFieldNumber;
const int MoneytreeConfig::kNormalCurrencyAddCountFieldNumber;
const int MoneytreeConfig::kBaseCurrencyCountFieldNumber;
#endif  // !_MSC_VER

MoneytreeConfig::MoneytreeConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MoneytreeConfig::InitAsDefaultInstance() {
}

MoneytreeConfig::MoneytreeConfig(const MoneytreeConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MoneytreeConfig::SharedCtor() {
  _cached_size_ = 0;
  base_chance_ = 0;
  add_chance_ = 0;
  id_ = 0;
  vip_currency_add_count_ = 0;
  normal_currency_add_count_ = 0;
  base_currency_count_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MoneytreeConfig::~MoneytreeConfig() {
  SharedDtor();
}

void MoneytreeConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MoneytreeConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MoneytreeConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MoneytreeConfig_descriptor_;
}

const MoneytreeConfig& MoneytreeConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MoneytreeConfig_2eproto();
  return *default_instance_;
}

MoneytreeConfig* MoneytreeConfig::default_instance_ = NULL;

MoneytreeConfig* MoneytreeConfig::New() const {
  return new MoneytreeConfig;
}

void MoneytreeConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    base_chance_ = 0;
    add_chance_ = 0;
    id_ = 0;
    vip_currency_add_count_ = 0;
    normal_currency_add_count_ = 0;
    base_currency_count_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MoneytreeConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_base_chance;
        break;
      }

      // optional int32 base_chance = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_base_chance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &base_chance_)));
          set_has_base_chance();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_add_chance;
        break;
      }

      // optional int32 add_chance = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_add_chance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &add_chance_)));
          set_has_add_chance();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_base_currency_count;
        break;
      }

      // optional int32 base_currency_count = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_base_currency_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &base_currency_count_)));
          set_has_base_currency_count();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_normal_currency_add_count;
        break;
      }

      // optional int32 normal_currency_add_count = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_normal_currency_add_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &normal_currency_add_count_)));
          set_has_normal_currency_add_count();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_vip_currency_add_count;
        break;
      }

      // optional int32 vip_currency_add_count = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_vip_currency_add_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &vip_currency_add_count_)));
          set_has_vip_currency_add_count();
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

void MoneytreeConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 base_chance = 2;
  if (has_base_chance()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->base_chance(), output);
  }

  // optional int32 add_chance = 3;
  if (has_add_chance()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->add_chance(), output);
  }

  // optional int32 base_currency_count = 4;
  if (has_base_currency_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->base_currency_count(), output);
  }

  // optional int32 normal_currency_add_count = 5;
  if (has_normal_currency_add_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->normal_currency_add_count(), output);
  }

  // optional int32 vip_currency_add_count = 6;
  if (has_vip_currency_add_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->vip_currency_add_count(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MoneytreeConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 base_chance = 2;
  if (has_base_chance()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->base_chance(), target);
  }

  // optional int32 add_chance = 3;
  if (has_add_chance()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->add_chance(), target);
  }

  // optional int32 base_currency_count = 4;
  if (has_base_currency_count()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->base_currency_count(), target);
  }

  // optional int32 normal_currency_add_count = 5;
  if (has_normal_currency_add_count()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->normal_currency_add_count(), target);
  }

  // optional int32 vip_currency_add_count = 6;
  if (has_vip_currency_add_count()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->vip_currency_add_count(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MoneytreeConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 base_chance = 2;
    if (has_base_chance()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->base_chance());
    }

    // optional int32 add_chance = 3;
    if (has_add_chance()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->add_chance());
    }

    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 vip_currency_add_count = 6;
    if (has_vip_currency_add_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->vip_currency_add_count());
    }

    // optional int32 normal_currency_add_count = 5;
    if (has_normal_currency_add_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->normal_currency_add_count());
    }

    // optional int32 base_currency_count = 4;
    if (has_base_currency_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->base_currency_count());
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

void MoneytreeConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MoneytreeConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MoneytreeConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MoneytreeConfig::MergeFrom(const MoneytreeConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_base_chance()) {
      set_base_chance(from.base_chance());
    }
    if (from.has_add_chance()) {
      set_add_chance(from.add_chance());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_vip_currency_add_count()) {
      set_vip_currency_add_count(from.vip_currency_add_count());
    }
    if (from.has_normal_currency_add_count()) {
      set_normal_currency_add_count(from.normal_currency_add_count());
    }
    if (from.has_base_currency_count()) {
      set_base_currency_count(from.base_currency_count());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MoneytreeConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MoneytreeConfig::CopyFrom(const MoneytreeConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MoneytreeConfig::IsInitialized() const {

  return true;
}

void MoneytreeConfig::Swap(MoneytreeConfig* other) {
  if (other != this) {
    std::swap(base_chance_, other->base_chance_);
    std::swap(add_chance_, other->add_chance_);
    std::swap(id_, other->id_);
    std::swap(vip_currency_add_count_, other->vip_currency_add_count_);
    std::swap(normal_currency_add_count_, other->normal_currency_add_count_);
    std::swap(base_currency_count_, other->base_currency_count_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MoneytreeConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MoneytreeConfig_descriptor_;
  metadata.reflection = MoneytreeConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
