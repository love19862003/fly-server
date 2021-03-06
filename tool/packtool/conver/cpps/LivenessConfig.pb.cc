// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LivenessConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "LivenessConfig.pb.h"

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

const ::google::protobuf::Descriptor* LivenessConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LivenessConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_LivenessConfig_2eproto() {
  protobuf_AddDesc_LivenessConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "LivenessConfig.proto");
  GOOGLE_CHECK(file != NULL);
  LivenessConfig_descriptor_ = file->message_type(0);
  static const int LivenessConfig_offsets_[10] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LivenessConfig, pre_liveness_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LivenessConfig, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LivenessConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LivenessConfig, system_open_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LivenessConfig, desciption_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LivenessConfig, is_open_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LivenessConfig, count_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LivenessConfig, next_liveness_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LivenessConfig, system_open_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LivenessConfig, value_),
  };
  LivenessConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LivenessConfig_descriptor_,
      LivenessConfig::default_instance_,
      LivenessConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LivenessConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LivenessConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LivenessConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_LivenessConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LivenessConfig_descriptor_, &LivenessConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_LivenessConfig_2eproto() {
  delete LivenessConfig::default_instance_;
  delete LivenessConfig_reflection_;
}

void protobuf_AddDesc_LivenessConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024LivenessConfig.proto\022\022DianShiTech.Conf"
    "ig\032\025ConfigTypeGroup.proto\"\317\001\n\016LivenessCo"
    "nfig\022\024\n\014pre_liveness\030\005 \001(\005\022\014\n\004type\030\002 \001(\005"
    "\022\n\n\002id\030\001 \001(\005\022\031\n\021system_open_value\030\n \001(\005\022"
    "\022\n\ndesciption\030\004 \001(\t\022\017\n\007is_open\030\003 \001(\005\022\r\n\005"
    "count\030\010 \001(\005\022\025\n\rnext_liveness\030\006 \001(\005\022\030\n\020sy"
    "stem_open_type\030\t \001(\005\022\r\n\005value\030\007 \001(\005", 275);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "LivenessConfig.proto", &protobuf_RegisterTypes);
  LivenessConfig::default_instance_ = new LivenessConfig();
  LivenessConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_LivenessConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_LivenessConfig_2eproto {
  StaticDescriptorInitializer_LivenessConfig_2eproto() {
    protobuf_AddDesc_LivenessConfig_2eproto();
  }
} static_descriptor_initializer_LivenessConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int LivenessConfig::kPreLivenessFieldNumber;
const int LivenessConfig::kTypeFieldNumber;
const int LivenessConfig::kIdFieldNumber;
const int LivenessConfig::kSystemOpenValueFieldNumber;
const int LivenessConfig::kDesciptionFieldNumber;
const int LivenessConfig::kIsOpenFieldNumber;
const int LivenessConfig::kCountFieldNumber;
const int LivenessConfig::kNextLivenessFieldNumber;
const int LivenessConfig::kSystemOpenTypeFieldNumber;
const int LivenessConfig::kValueFieldNumber;
#endif  // !_MSC_VER

LivenessConfig::LivenessConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void LivenessConfig::InitAsDefaultInstance() {
}

LivenessConfig::LivenessConfig(const LivenessConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void LivenessConfig::SharedCtor() {
  _cached_size_ = 0;
  pre_liveness_ = 0;
  type_ = 0;
  id_ = 0;
  system_open_value_ = 0;
  desciption_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  is_open_ = 0;
  count_ = 0;
  next_liveness_ = 0;
  system_open_type_ = 0;
  value_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LivenessConfig::~LivenessConfig() {
  SharedDtor();
}

void LivenessConfig::SharedDtor() {
  if (desciption_ != &::google::protobuf::internal::kEmptyString) {
    delete desciption_;
  }
  if (this != default_instance_) {
  }
}

void LivenessConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LivenessConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LivenessConfig_descriptor_;
}

const LivenessConfig& LivenessConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_LivenessConfig_2eproto();
  return *default_instance_;
}

LivenessConfig* LivenessConfig::default_instance_ = NULL;

LivenessConfig* LivenessConfig::New() const {
  return new LivenessConfig;
}

void LivenessConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    pre_liveness_ = 0;
    type_ = 0;
    id_ = 0;
    system_open_value_ = 0;
    if (has_desciption()) {
      if (desciption_ != &::google::protobuf::internal::kEmptyString) {
        desciption_->clear();
      }
    }
    is_open_ = 0;
    count_ = 0;
    next_liveness_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    system_open_type_ = 0;
    value_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LivenessConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_type;
        break;
      }

      // optional int32 type = 2;
      case 2: {
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
        if (input->ExpectTag(24)) goto parse_is_open;
        break;
      }

      // optional int32 is_open = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_is_open:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &is_open_)));
          set_has_is_open();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_desciption;
        break;
      }

      // optional string desciption = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_desciption:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_desciption()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->desciption().data(), this->desciption().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_pre_liveness;
        break;
      }

      // optional int32 pre_liveness = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_pre_liveness:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &pre_liveness_)));
          set_has_pre_liveness();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_next_liveness;
        break;
      }

      // optional int32 next_liveness = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_next_liveness:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &next_liveness_)));
          set_has_next_liveness();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_value;
        break;
      }

      // optional int32 value = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &value_)));
          set_has_value();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_count;
        break;
      }

      // optional int32 count = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &count_)));
          set_has_count();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_system_open_type;
        break;
      }

      // optional int32 system_open_type = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_system_open_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &system_open_type_)));
          set_has_system_open_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_system_open_value;
        break;
      }

      // optional int32 system_open_value = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_system_open_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &system_open_value_)));
          set_has_system_open_value();
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

void LivenessConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 type = 2;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->type(), output);
  }

  // optional int32 is_open = 3;
  if (has_is_open()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->is_open(), output);
  }

  // optional string desciption = 4;
  if (has_desciption()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->desciption().data(), this->desciption().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->desciption(), output);
  }

  // optional int32 pre_liveness = 5;
  if (has_pre_liveness()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->pre_liveness(), output);
  }

  // optional int32 next_liveness = 6;
  if (has_next_liveness()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->next_liveness(), output);
  }

  // optional int32 value = 7;
  if (has_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->value(), output);
  }

  // optional int32 count = 8;
  if (has_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->count(), output);
  }

  // optional int32 system_open_type = 9;
  if (has_system_open_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->system_open_type(), output);
  }

  // optional int32 system_open_value = 10;
  if (has_system_open_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->system_open_value(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* LivenessConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 type = 2;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->type(), target);
  }

  // optional int32 is_open = 3;
  if (has_is_open()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->is_open(), target);
  }

  // optional string desciption = 4;
  if (has_desciption()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->desciption().data(), this->desciption().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->desciption(), target);
  }

  // optional int32 pre_liveness = 5;
  if (has_pre_liveness()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->pre_liveness(), target);
  }

  // optional int32 next_liveness = 6;
  if (has_next_liveness()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->next_liveness(), target);
  }

  // optional int32 value = 7;
  if (has_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->value(), target);
  }

  // optional int32 count = 8;
  if (has_count()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->count(), target);
  }

  // optional int32 system_open_type = 9;
  if (has_system_open_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->system_open_type(), target);
  }

  // optional int32 system_open_value = 10;
  if (has_system_open_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->system_open_value(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int LivenessConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 pre_liveness = 5;
    if (has_pre_liveness()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->pre_liveness());
    }

    // optional int32 type = 2;
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

    // optional int32 system_open_value = 10;
    if (has_system_open_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->system_open_value());
    }

    // optional string desciption = 4;
    if (has_desciption()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->desciption());
    }

    // optional int32 is_open = 3;
    if (has_is_open()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->is_open());
    }

    // optional int32 count = 8;
    if (has_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->count());
    }

    // optional int32 next_liveness = 6;
    if (has_next_liveness()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->next_liveness());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int32 system_open_type = 9;
    if (has_system_open_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->system_open_type());
    }

    // optional int32 value = 7;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->value());
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

void LivenessConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LivenessConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LivenessConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LivenessConfig::MergeFrom(const LivenessConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_pre_liveness()) {
      set_pre_liveness(from.pre_liveness());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_system_open_value()) {
      set_system_open_value(from.system_open_value());
    }
    if (from.has_desciption()) {
      set_desciption(from.desciption());
    }
    if (from.has_is_open()) {
      set_is_open(from.is_open());
    }
    if (from.has_count()) {
      set_count(from.count());
    }
    if (from.has_next_liveness()) {
      set_next_liveness(from.next_liveness());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_system_open_type()) {
      set_system_open_type(from.system_open_type());
    }
    if (from.has_value()) {
      set_value(from.value());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LivenessConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LivenessConfig::CopyFrom(const LivenessConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LivenessConfig::IsInitialized() const {

  return true;
}

void LivenessConfig::Swap(LivenessConfig* other) {
  if (other != this) {
    std::swap(pre_liveness_, other->pre_liveness_);
    std::swap(type_, other->type_);
    std::swap(id_, other->id_);
    std::swap(system_open_value_, other->system_open_value_);
    std::swap(desciption_, other->desciption_);
    std::swap(is_open_, other->is_open_);
    std::swap(count_, other->count_);
    std::swap(next_liveness_, other->next_liveness_);
    std::swap(system_open_type_, other->system_open_type_);
    std::swap(value_, other->value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LivenessConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LivenessConfig_descriptor_;
  metadata.reflection = LivenessConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
