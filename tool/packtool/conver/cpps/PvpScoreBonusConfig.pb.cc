// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PvpScoreBonusConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PvpScoreBonusConfig.pb.h"

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

const ::google::protobuf::Descriptor* PvpScoreBonusConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PvpScoreBonusConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_PvpScoreBonusConfig_2eproto() {
  protobuf_AddDesc_PvpScoreBonusConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "PvpScoreBonusConfig.proto");
  GOOGLE_CHECK(file != NULL);
  PvpScoreBonusConfig_descriptor_ = file->message_type(0);
  static const int PvpScoreBonusConfig_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PvpScoreBonusConfig, score_min_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PvpScoreBonusConfig, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PvpScoreBonusConfig, drops_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PvpScoreBonusConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PvpScoreBonusConfig, score_max_),
  };
  PvpScoreBonusConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PvpScoreBonusConfig_descriptor_,
      PvpScoreBonusConfig::default_instance_,
      PvpScoreBonusConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PvpScoreBonusConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PvpScoreBonusConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PvpScoreBonusConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_PvpScoreBonusConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PvpScoreBonusConfig_descriptor_, &PvpScoreBonusConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_PvpScoreBonusConfig_2eproto() {
  delete PvpScoreBonusConfig::default_instance_;
  delete PvpScoreBonusConfig_reflection_;
}

void protobuf_AddDesc_PvpScoreBonusConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031PvpScoreBonusConfig.proto\022\022DianShiTech"
    ".Config\032\025ConfigTypeGroup.proto\"d\n\023PvpSco"
    "reBonusConfig\022\021\n\tscore_min\030\002 \001(\005\022\014\n\004type"
    "\030\005 \001(\005\022\r\n\005drops\030\004 \003(\005\022\n\n\002id\030\001 \001(\005\022\021\n\tsco"
    "re_max\030\003 \001(\005", 172);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "PvpScoreBonusConfig.proto", &protobuf_RegisterTypes);
  PvpScoreBonusConfig::default_instance_ = new PvpScoreBonusConfig();
  PvpScoreBonusConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PvpScoreBonusConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PvpScoreBonusConfig_2eproto {
  StaticDescriptorInitializer_PvpScoreBonusConfig_2eproto() {
    protobuf_AddDesc_PvpScoreBonusConfig_2eproto();
  }
} static_descriptor_initializer_PvpScoreBonusConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int PvpScoreBonusConfig::kScoreMinFieldNumber;
const int PvpScoreBonusConfig::kTypeFieldNumber;
const int PvpScoreBonusConfig::kDropsFieldNumber;
const int PvpScoreBonusConfig::kIdFieldNumber;
const int PvpScoreBonusConfig::kScoreMaxFieldNumber;
#endif  // !_MSC_VER

PvpScoreBonusConfig::PvpScoreBonusConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PvpScoreBonusConfig::InitAsDefaultInstance() {
}

PvpScoreBonusConfig::PvpScoreBonusConfig(const PvpScoreBonusConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PvpScoreBonusConfig::SharedCtor() {
  _cached_size_ = 0;
  score_min_ = 0;
  type_ = 0;
  id_ = 0;
  score_max_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PvpScoreBonusConfig::~PvpScoreBonusConfig() {
  SharedDtor();
}

void PvpScoreBonusConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PvpScoreBonusConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PvpScoreBonusConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PvpScoreBonusConfig_descriptor_;
}

const PvpScoreBonusConfig& PvpScoreBonusConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_PvpScoreBonusConfig_2eproto();
  return *default_instance_;
}

PvpScoreBonusConfig* PvpScoreBonusConfig::default_instance_ = NULL;

PvpScoreBonusConfig* PvpScoreBonusConfig::New() const {
  return new PvpScoreBonusConfig;
}

void PvpScoreBonusConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    score_min_ = 0;
    type_ = 0;
    id_ = 0;
    score_max_ = 0;
  }
  drops_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PvpScoreBonusConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_score_min;
        break;
      }

      // optional int32 score_min = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_score_min:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &score_min_)));
          set_has_score_min();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_score_max;
        break;
      }

      // optional int32 score_max = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_score_max:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &score_max_)));
          set_has_score_max();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_drops;
        break;
      }

      // repeated int32 drops = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_drops:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 32, input, this->mutable_drops())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_drops())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_drops;
        if (input->ExpectTag(40)) goto parse_type;
        break;
      }

      // optional int32 type = 5;
      case 5: {
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

void PvpScoreBonusConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 score_min = 2;
  if (has_score_min()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->score_min(), output);
  }

  // optional int32 score_max = 3;
  if (has_score_max()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->score_max(), output);
  }

  // repeated int32 drops = 4;
  for (int i = 0; i < this->drops_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      4, this->drops(i), output);
  }

  // optional int32 type = 5;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->type(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PvpScoreBonusConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 score_min = 2;
  if (has_score_min()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->score_min(), target);
  }

  // optional int32 score_max = 3;
  if (has_score_max()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->score_max(), target);
  }

  // repeated int32 drops = 4;
  for (int i = 0; i < this->drops_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(4, this->drops(i), target);
  }

  // optional int32 type = 5;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->type(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PvpScoreBonusConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 score_min = 2;
    if (has_score_min()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->score_min());
    }

    // optional int32 type = 5;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
    }

    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 score_max = 3;
    if (has_score_max()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->score_max());
    }

  }
  // repeated int32 drops = 4;
  {
    int data_size = 0;
    for (int i = 0; i < this->drops_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->drops(i));
    }
    total_size += 1 * this->drops_size() + data_size;
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

void PvpScoreBonusConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PvpScoreBonusConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PvpScoreBonusConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PvpScoreBonusConfig::MergeFrom(const PvpScoreBonusConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  drops_.MergeFrom(from.drops_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_score_min()) {
      set_score_min(from.score_min());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_score_max()) {
      set_score_max(from.score_max());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PvpScoreBonusConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PvpScoreBonusConfig::CopyFrom(const PvpScoreBonusConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PvpScoreBonusConfig::IsInitialized() const {

  return true;
}

void PvpScoreBonusConfig::Swap(PvpScoreBonusConfig* other) {
  if (other != this) {
    std::swap(score_min_, other->score_min_);
    std::swap(type_, other->type_);
    drops_.Swap(&other->drops_);
    std::swap(id_, other->id_);
    std::swap(score_max_, other->score_max_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PvpScoreBonusConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PvpScoreBonusConfig_descriptor_;
  metadata.reflection = PvpScoreBonusConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
