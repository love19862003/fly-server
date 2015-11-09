// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MineCoinConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MineCoinConfig.pb.h"

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

const ::google::protobuf::Descriptor* MineCoinConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MineCoinConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MineCoinConfig_2eproto() {
  protobuf_AddDesc_MineCoinConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MineCoinConfig.proto");
  GOOGLE_CHECK(file != NULL);
  MineCoinConfig_descriptor_ = file->message_type(0);
  static const int MineCoinConfig_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MineCoinConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MineCoinConfig, miner_loyalty_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MineCoinConfig, mine_owener_get_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MineCoinConfig, miner_get_),
  };
  MineCoinConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MineCoinConfig_descriptor_,
      MineCoinConfig::default_instance_,
      MineCoinConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MineCoinConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MineCoinConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MineCoinConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MineCoinConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MineCoinConfig_descriptor_, &MineCoinConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MineCoinConfig_2eproto() {
  delete MineCoinConfig::default_instance_;
  delete MineCoinConfig_reflection_;
}

void protobuf_AddDesc_MineCoinConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024MineCoinConfig.proto\022\022DianShiTech.Conf"
    "ig\032\025ConfigTypeGroup.proto\"_\n\016MineCoinCon"
    "fig\022\n\n\002id\030\001 \001(\005\022\025\n\rminer_loyalty\030\004 \001(\005\022\027"
    "\n\017mine_owener_get\030\003 \001(\005\022\021\n\tminer_get\030\002 \001"
    "(\005", 162);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MineCoinConfig.proto", &protobuf_RegisterTypes);
  MineCoinConfig::default_instance_ = new MineCoinConfig();
  MineCoinConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MineCoinConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MineCoinConfig_2eproto {
  StaticDescriptorInitializer_MineCoinConfig_2eproto() {
    protobuf_AddDesc_MineCoinConfig_2eproto();
  }
} static_descriptor_initializer_MineCoinConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MineCoinConfig::kIdFieldNumber;
const int MineCoinConfig::kMinerLoyaltyFieldNumber;
const int MineCoinConfig::kMineOwenerGetFieldNumber;
const int MineCoinConfig::kMinerGetFieldNumber;
#endif  // !_MSC_VER

MineCoinConfig::MineCoinConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MineCoinConfig::InitAsDefaultInstance() {
}

MineCoinConfig::MineCoinConfig(const MineCoinConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MineCoinConfig::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  miner_loyalty_ = 0;
  mine_owener_get_ = 0;
  miner_get_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MineCoinConfig::~MineCoinConfig() {
  SharedDtor();
}

void MineCoinConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MineCoinConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MineCoinConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MineCoinConfig_descriptor_;
}

const MineCoinConfig& MineCoinConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MineCoinConfig_2eproto();
  return *default_instance_;
}

MineCoinConfig* MineCoinConfig::default_instance_ = NULL;

MineCoinConfig* MineCoinConfig::New() const {
  return new MineCoinConfig;
}

void MineCoinConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
    miner_loyalty_ = 0;
    mine_owener_get_ = 0;
    miner_get_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MineCoinConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_miner_get;
        break;
      }

      // optional int32 miner_get = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_miner_get:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &miner_get_)));
          set_has_miner_get();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_mine_owener_get;
        break;
      }

      // optional int32 mine_owener_get = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_mine_owener_get:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &mine_owener_get_)));
          set_has_mine_owener_get();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_miner_loyalty;
        break;
      }

      // optional int32 miner_loyalty = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_miner_loyalty:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &miner_loyalty_)));
          set_has_miner_loyalty();
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

void MineCoinConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 miner_get = 2;
  if (has_miner_get()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->miner_get(), output);
  }

  // optional int32 mine_owener_get = 3;
  if (has_mine_owener_get()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->mine_owener_get(), output);
  }

  // optional int32 miner_loyalty = 4;
  if (has_miner_loyalty()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->miner_loyalty(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MineCoinConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 miner_get = 2;
  if (has_miner_get()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->miner_get(), target);
  }

  // optional int32 mine_owener_get = 3;
  if (has_mine_owener_get()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->mine_owener_get(), target);
  }

  // optional int32 miner_loyalty = 4;
  if (has_miner_loyalty()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->miner_loyalty(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MineCoinConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 miner_loyalty = 4;
    if (has_miner_loyalty()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->miner_loyalty());
    }

    // optional int32 mine_owener_get = 3;
    if (has_mine_owener_get()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->mine_owener_get());
    }

    // optional int32 miner_get = 2;
    if (has_miner_get()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->miner_get());
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

void MineCoinConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MineCoinConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MineCoinConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MineCoinConfig::MergeFrom(const MineCoinConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_miner_loyalty()) {
      set_miner_loyalty(from.miner_loyalty());
    }
    if (from.has_mine_owener_get()) {
      set_mine_owener_get(from.mine_owener_get());
    }
    if (from.has_miner_get()) {
      set_miner_get(from.miner_get());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MineCoinConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MineCoinConfig::CopyFrom(const MineCoinConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MineCoinConfig::IsInitialized() const {

  return true;
}

void MineCoinConfig::Swap(MineCoinConfig* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(miner_loyalty_, other->miner_loyalty_);
    std::swap(mine_owener_get_, other->mine_owener_get_);
    std::swap(miner_get_, other->miner_get_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MineCoinConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MineCoinConfig_descriptor_;
  metadata.reflection = MineCoinConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
