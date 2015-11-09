// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PvpRobRateConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PvpRobRateConfig.pb.h"

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

const ::google::protobuf::Descriptor* PvpRobRateConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PvpRobRateConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_PvpRobRateConfig_2eproto() {
  protobuf_AddDesc_PvpRobRateConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "PvpRobRateConfig.proto");
  GOOGLE_CHECK(file != NULL);
  PvpRobRateConfig_descriptor_ = file->message_type(0);
  static const int PvpRobRateConfig_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PvpRobRateConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PvpRobRateConfig, rate_),
  };
  PvpRobRateConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PvpRobRateConfig_descriptor_,
      PvpRobRateConfig::default_instance_,
      PvpRobRateConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PvpRobRateConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PvpRobRateConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PvpRobRateConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_PvpRobRateConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PvpRobRateConfig_descriptor_, &PvpRobRateConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_PvpRobRateConfig_2eproto() {
  delete PvpRobRateConfig::default_instance_;
  delete PvpRobRateConfig_reflection_;
}

void protobuf_AddDesc_PvpRobRateConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026PvpRobRateConfig.proto\022\022DianShiTech.Co"
    "nfig\032\025ConfigTypeGroup.proto\",\n\020PvpRobRat"
    "eConfig\022\n\n\002id\030\001 \001(\005\022\014\n\004rate\030\002 \001(\005", 113);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "PvpRobRateConfig.proto", &protobuf_RegisterTypes);
  PvpRobRateConfig::default_instance_ = new PvpRobRateConfig();
  PvpRobRateConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PvpRobRateConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PvpRobRateConfig_2eproto {
  StaticDescriptorInitializer_PvpRobRateConfig_2eproto() {
    protobuf_AddDesc_PvpRobRateConfig_2eproto();
  }
} static_descriptor_initializer_PvpRobRateConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int PvpRobRateConfig::kIdFieldNumber;
const int PvpRobRateConfig::kRateFieldNumber;
#endif  // !_MSC_VER

PvpRobRateConfig::PvpRobRateConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PvpRobRateConfig::InitAsDefaultInstance() {
}

PvpRobRateConfig::PvpRobRateConfig(const PvpRobRateConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PvpRobRateConfig::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  rate_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PvpRobRateConfig::~PvpRobRateConfig() {
  SharedDtor();
}

void PvpRobRateConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PvpRobRateConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PvpRobRateConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PvpRobRateConfig_descriptor_;
}

const PvpRobRateConfig& PvpRobRateConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_PvpRobRateConfig_2eproto();
  return *default_instance_;
}

PvpRobRateConfig* PvpRobRateConfig::default_instance_ = NULL;

PvpRobRateConfig* PvpRobRateConfig::New() const {
  return new PvpRobRateConfig;
}

void PvpRobRateConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
    rate_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PvpRobRateConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_rate;
        break;
      }

      // optional int32 rate = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rate:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rate_)));
          set_has_rate();
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

void PvpRobRateConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 rate = 2;
  if (has_rate()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->rate(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PvpRobRateConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 rate = 2;
  if (has_rate()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->rate(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PvpRobRateConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 rate = 2;
    if (has_rate()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->rate());
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

void PvpRobRateConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PvpRobRateConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PvpRobRateConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PvpRobRateConfig::MergeFrom(const PvpRobRateConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_rate()) {
      set_rate(from.rate());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PvpRobRateConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PvpRobRateConfig::CopyFrom(const PvpRobRateConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PvpRobRateConfig::IsInitialized() const {

  return true;
}

void PvpRobRateConfig::Swap(PvpRobRateConfig* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(rate_, other->rate_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PvpRobRateConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PvpRobRateConfig_descriptor_;
  metadata.reflection = PvpRobRateConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
