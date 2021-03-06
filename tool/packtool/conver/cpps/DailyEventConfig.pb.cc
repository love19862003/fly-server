// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DailyEventConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "DailyEventConfig.pb.h"

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

const ::google::protobuf::Descriptor* DailyEventConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DailyEventConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_DailyEventConfig_2eproto() {
  protobuf_AddDesc_DailyEventConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "DailyEventConfig.proto");
  GOOGLE_CHECK(file != NULL);
  DailyEventConfig_descriptor_ = file->message_type(0);
  static const int DailyEventConfig_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DailyEventConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DailyEventConfig, open_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DailyEventConfig, close_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DailyEventConfig, activity_id_),
  };
  DailyEventConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DailyEventConfig_descriptor_,
      DailyEventConfig::default_instance_,
      DailyEventConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DailyEventConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DailyEventConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DailyEventConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_DailyEventConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DailyEventConfig_descriptor_, &DailyEventConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_DailyEventConfig_2eproto() {
  delete DailyEventConfig::default_instance_;
  delete DailyEventConfig_reflection_;
}

void protobuf_AddDesc_DailyEventConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026DailyEventConfig.proto\022\022DianShiTech.Co"
    "nfig\032\025ConfigTypeGroup.proto\"Z\n\020DailyEven"
    "tConfig\022\n\n\002id\030\001 \001(\005\022\021\n\topen_time\030\003 \001(\005\022\022"
    "\n\nclose_time\030\004 \001(\005\022\023\n\013activity_id\030\002 \001(\005", 159);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "DailyEventConfig.proto", &protobuf_RegisterTypes);
  DailyEventConfig::default_instance_ = new DailyEventConfig();
  DailyEventConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_DailyEventConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_DailyEventConfig_2eproto {
  StaticDescriptorInitializer_DailyEventConfig_2eproto() {
    protobuf_AddDesc_DailyEventConfig_2eproto();
  }
} static_descriptor_initializer_DailyEventConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int DailyEventConfig::kIdFieldNumber;
const int DailyEventConfig::kOpenTimeFieldNumber;
const int DailyEventConfig::kCloseTimeFieldNumber;
const int DailyEventConfig::kActivityIdFieldNumber;
#endif  // !_MSC_VER

DailyEventConfig::DailyEventConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void DailyEventConfig::InitAsDefaultInstance() {
}

DailyEventConfig::DailyEventConfig(const DailyEventConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void DailyEventConfig::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  open_time_ = 0;
  close_time_ = 0;
  activity_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DailyEventConfig::~DailyEventConfig() {
  SharedDtor();
}

void DailyEventConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void DailyEventConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DailyEventConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DailyEventConfig_descriptor_;
}

const DailyEventConfig& DailyEventConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_DailyEventConfig_2eproto();
  return *default_instance_;
}

DailyEventConfig* DailyEventConfig::default_instance_ = NULL;

DailyEventConfig* DailyEventConfig::New() const {
  return new DailyEventConfig;
}

void DailyEventConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
    open_time_ = 0;
    close_time_ = 0;
    activity_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DailyEventConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_activity_id;
        break;
      }

      // optional int32 activity_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_activity_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &activity_id_)));
          set_has_activity_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_open_time;
        break;
      }

      // optional int32 open_time = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_open_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &open_time_)));
          set_has_open_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_close_time;
        break;
      }

      // optional int32 close_time = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_close_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &close_time_)));
          set_has_close_time();
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

void DailyEventConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 activity_id = 2;
  if (has_activity_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->activity_id(), output);
  }

  // optional int32 open_time = 3;
  if (has_open_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->open_time(), output);
  }

  // optional int32 close_time = 4;
  if (has_close_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->close_time(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DailyEventConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 activity_id = 2;
  if (has_activity_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->activity_id(), target);
  }

  // optional int32 open_time = 3;
  if (has_open_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->open_time(), target);
  }

  // optional int32 close_time = 4;
  if (has_close_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->close_time(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DailyEventConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 open_time = 3;
    if (has_open_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->open_time());
    }

    // optional int32 close_time = 4;
    if (has_close_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->close_time());
    }

    // optional int32 activity_id = 2;
    if (has_activity_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->activity_id());
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

void DailyEventConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DailyEventConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DailyEventConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DailyEventConfig::MergeFrom(const DailyEventConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_open_time()) {
      set_open_time(from.open_time());
    }
    if (from.has_close_time()) {
      set_close_time(from.close_time());
    }
    if (from.has_activity_id()) {
      set_activity_id(from.activity_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DailyEventConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DailyEventConfig::CopyFrom(const DailyEventConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DailyEventConfig::IsInitialized() const {

  return true;
}

void DailyEventConfig::Swap(DailyEventConfig* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(open_time_, other->open_time_);
    std::swap(close_time_, other->close_time_);
    std::swap(activity_id_, other->activity_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DailyEventConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DailyEventConfig_descriptor_;
  metadata.reflection = DailyEventConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
