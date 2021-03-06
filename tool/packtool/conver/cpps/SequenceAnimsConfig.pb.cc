// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SequenceAnimsConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SequenceAnimsConfig.pb.h"

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

const ::google::protobuf::Descriptor* SequenceAnimsConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SequenceAnimsConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_SequenceAnimsConfig_2eproto() {
  protobuf_AddDesc_SequenceAnimsConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "SequenceAnimsConfig.proto");
  GOOGLE_CHECK(file != NULL);
  SequenceAnimsConfig_descriptor_ = file->message_type(0);
  static const int SequenceAnimsConfig_offsets_[12] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SequenceAnimsConfig, offsety_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SequenceAnimsConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SequenceAnimsConfig, duration_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SequenceAnimsConfig, plists_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SequenceAnimsConfig, folder_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SequenceAnimsConfig, isloop_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SequenceAnimsConfig, to_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SequenceAnimsConfig, from_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SequenceAnimsConfig, pattern_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SequenceAnimsConfig, offsetx_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SequenceAnimsConfig, scale_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SequenceAnimsConfig, is_flip_y_),
  };
  SequenceAnimsConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SequenceAnimsConfig_descriptor_,
      SequenceAnimsConfig::default_instance_,
      SequenceAnimsConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SequenceAnimsConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SequenceAnimsConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SequenceAnimsConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_SequenceAnimsConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SequenceAnimsConfig_descriptor_, &SequenceAnimsConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_SequenceAnimsConfig_2eproto() {
  delete SequenceAnimsConfig::default_instance_;
  delete SequenceAnimsConfig_reflection_;
}

void protobuf_AddDesc_SequenceAnimsConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031SequenceAnimsConfig.proto\022\022DianShiTech"
    ".Config\032\025ConfigTypeGroup.proto\"\322\001\n\023Seque"
    "nceAnimsConfig\022\017\n\007offsety\030\005 \001(\005\022\n\n\002id\030\001 "
    "\001(\005\022\020\n\010duration\030\014 \001(\005\022\016\n\006plists\030\010 \003(\005\022\016\n"
    "\006folder\030\002 \001(\t\022\016\n\006isloop\030\r \001(\005\022\n\n\002to\030\013 \001("
    "\005\022\014\n\004from\030\n \001(\005\022\017\n\007pattern\030\t \001(\t\022\017\n\007offs"
    "etx\030\004 \001(\005\022\r\n\005scale\030\007 \001(\005\022\021\n\tis_flip_y\030\006 "
    "\001(\005", 283);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SequenceAnimsConfig.proto", &protobuf_RegisterTypes);
  SequenceAnimsConfig::default_instance_ = new SequenceAnimsConfig();
  SequenceAnimsConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_SequenceAnimsConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_SequenceAnimsConfig_2eproto {
  StaticDescriptorInitializer_SequenceAnimsConfig_2eproto() {
    protobuf_AddDesc_SequenceAnimsConfig_2eproto();
  }
} static_descriptor_initializer_SequenceAnimsConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int SequenceAnimsConfig::kOffsetyFieldNumber;
const int SequenceAnimsConfig::kIdFieldNumber;
const int SequenceAnimsConfig::kDurationFieldNumber;
const int SequenceAnimsConfig::kPlistsFieldNumber;
const int SequenceAnimsConfig::kFolderFieldNumber;
const int SequenceAnimsConfig::kIsloopFieldNumber;
const int SequenceAnimsConfig::kToFieldNumber;
const int SequenceAnimsConfig::kFromFieldNumber;
const int SequenceAnimsConfig::kPatternFieldNumber;
const int SequenceAnimsConfig::kOffsetxFieldNumber;
const int SequenceAnimsConfig::kScaleFieldNumber;
const int SequenceAnimsConfig::kIsFlipYFieldNumber;
#endif  // !_MSC_VER

SequenceAnimsConfig::SequenceAnimsConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SequenceAnimsConfig::InitAsDefaultInstance() {
}

SequenceAnimsConfig::SequenceAnimsConfig(const SequenceAnimsConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SequenceAnimsConfig::SharedCtor() {
  _cached_size_ = 0;
  offsety_ = 0;
  id_ = 0;
  duration_ = 0;
  folder_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  isloop_ = 0;
  to_ = 0;
  from_ = 0;
  pattern_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  offsetx_ = 0;
  scale_ = 0;
  is_flip_y_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SequenceAnimsConfig::~SequenceAnimsConfig() {
  SharedDtor();
}

void SequenceAnimsConfig::SharedDtor() {
  if (folder_ != &::google::protobuf::internal::kEmptyString) {
    delete folder_;
  }
  if (pattern_ != &::google::protobuf::internal::kEmptyString) {
    delete pattern_;
  }
  if (this != default_instance_) {
  }
}

void SequenceAnimsConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SequenceAnimsConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SequenceAnimsConfig_descriptor_;
}

const SequenceAnimsConfig& SequenceAnimsConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_SequenceAnimsConfig_2eproto();
  return *default_instance_;
}

SequenceAnimsConfig* SequenceAnimsConfig::default_instance_ = NULL;

SequenceAnimsConfig* SequenceAnimsConfig::New() const {
  return new SequenceAnimsConfig;
}

void SequenceAnimsConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    offsety_ = 0;
    id_ = 0;
    duration_ = 0;
    if (has_folder()) {
      if (folder_ != &::google::protobuf::internal::kEmptyString) {
        folder_->clear();
      }
    }
    isloop_ = 0;
    to_ = 0;
    from_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (has_pattern()) {
      if (pattern_ != &::google::protobuf::internal::kEmptyString) {
        pattern_->clear();
      }
    }
    offsetx_ = 0;
    scale_ = 0;
    is_flip_y_ = 0;
  }
  plists_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SequenceAnimsConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(18)) goto parse_folder;
        break;
      }

      // optional string folder = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_folder:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_folder()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->folder().data(), this->folder().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_offsetx;
        break;
      }

      // optional int32 offsetx = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_offsetx:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &offsetx_)));
          set_has_offsetx();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_offsety;
        break;
      }

      // optional int32 offsety = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_offsety:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &offsety_)));
          set_has_offsety();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_is_flip_y;
        break;
      }

      // optional int32 is_flip_y = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_is_flip_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &is_flip_y_)));
          set_has_is_flip_y();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_scale;
        break;
      }

      // optional int32 scale = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_scale:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &scale_)));
          set_has_scale();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_plists;
        break;
      }

      // repeated int32 plists = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_plists:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 64, input, this->mutable_plists())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_plists())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_plists;
        if (input->ExpectTag(74)) goto parse_pattern;
        break;
      }

      // optional string pattern = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_pattern:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_pattern()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->pattern().data(), this->pattern().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_from;
        break;
      }

      // optional int32 from = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_from:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &from_)));
          set_has_from();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_to;
        break;
      }

      // optional int32 to = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_to:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &to_)));
          set_has_to();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(96)) goto parse_duration;
        break;
      }

      // optional int32 duration = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_duration:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &duration_)));
          set_has_duration();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(104)) goto parse_isloop;
        break;
      }

      // optional int32 isloop = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_isloop:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &isloop_)));
          set_has_isloop();
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

void SequenceAnimsConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional string folder = 2;
  if (has_folder()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->folder().data(), this->folder().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->folder(), output);
  }

  // optional int32 offsetx = 4;
  if (has_offsetx()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->offsetx(), output);
  }

  // optional int32 offsety = 5;
  if (has_offsety()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->offsety(), output);
  }

  // optional int32 is_flip_y = 6;
  if (has_is_flip_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->is_flip_y(), output);
  }

  // optional int32 scale = 7;
  if (has_scale()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->scale(), output);
  }

  // repeated int32 plists = 8;
  for (int i = 0; i < this->plists_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      8, this->plists(i), output);
  }

  // optional string pattern = 9;
  if (has_pattern()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->pattern().data(), this->pattern().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      9, this->pattern(), output);
  }

  // optional int32 from = 10;
  if (has_from()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->from(), output);
  }

  // optional int32 to = 11;
  if (has_to()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(11, this->to(), output);
  }

  // optional int32 duration = 12;
  if (has_duration()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(12, this->duration(), output);
  }

  // optional int32 isloop = 13;
  if (has_isloop()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->isloop(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* SequenceAnimsConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional string folder = 2;
  if (has_folder()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->folder().data(), this->folder().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->folder(), target);
  }

  // optional int32 offsetx = 4;
  if (has_offsetx()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->offsetx(), target);
  }

  // optional int32 offsety = 5;
  if (has_offsety()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->offsety(), target);
  }

  // optional int32 is_flip_y = 6;
  if (has_is_flip_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->is_flip_y(), target);
  }

  // optional int32 scale = 7;
  if (has_scale()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->scale(), target);
  }

  // repeated int32 plists = 8;
  for (int i = 0; i < this->plists_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(8, this->plists(i), target);
  }

  // optional string pattern = 9;
  if (has_pattern()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->pattern().data(), this->pattern().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        9, this->pattern(), target);
  }

  // optional int32 from = 10;
  if (has_from()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->from(), target);
  }

  // optional int32 to = 11;
  if (has_to()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(11, this->to(), target);
  }

  // optional int32 duration = 12;
  if (has_duration()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(12, this->duration(), target);
  }

  // optional int32 isloop = 13;
  if (has_isloop()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->isloop(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int SequenceAnimsConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 offsety = 5;
    if (has_offsety()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->offsety());
    }

    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 duration = 12;
    if (has_duration()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->duration());
    }

    // optional string folder = 2;
    if (has_folder()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->folder());
    }

    // optional int32 isloop = 13;
    if (has_isloop()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->isloop());
    }

    // optional int32 to = 11;
    if (has_to()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->to());
    }

    // optional int32 from = 10;
    if (has_from()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->from());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional string pattern = 9;
    if (has_pattern()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->pattern());
    }

    // optional int32 offsetx = 4;
    if (has_offsetx()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->offsetx());
    }

    // optional int32 scale = 7;
    if (has_scale()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->scale());
    }

    // optional int32 is_flip_y = 6;
    if (has_is_flip_y()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->is_flip_y());
    }

  }
  // repeated int32 plists = 8;
  {
    int data_size = 0;
    for (int i = 0; i < this->plists_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->plists(i));
    }
    total_size += 1 * this->plists_size() + data_size;
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

void SequenceAnimsConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SequenceAnimsConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SequenceAnimsConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SequenceAnimsConfig::MergeFrom(const SequenceAnimsConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  plists_.MergeFrom(from.plists_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_offsety()) {
      set_offsety(from.offsety());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_duration()) {
      set_duration(from.duration());
    }
    if (from.has_folder()) {
      set_folder(from.folder());
    }
    if (from.has_isloop()) {
      set_isloop(from.isloop());
    }
    if (from.has_to()) {
      set_to(from.to());
    }
    if (from.has_from()) {
      set_from(from.from());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_pattern()) {
      set_pattern(from.pattern());
    }
    if (from.has_offsetx()) {
      set_offsetx(from.offsetx());
    }
    if (from.has_scale()) {
      set_scale(from.scale());
    }
    if (from.has_is_flip_y()) {
      set_is_flip_y(from.is_flip_y());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SequenceAnimsConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SequenceAnimsConfig::CopyFrom(const SequenceAnimsConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SequenceAnimsConfig::IsInitialized() const {

  return true;
}

void SequenceAnimsConfig::Swap(SequenceAnimsConfig* other) {
  if (other != this) {
    std::swap(offsety_, other->offsety_);
    std::swap(id_, other->id_);
    std::swap(duration_, other->duration_);
    plists_.Swap(&other->plists_);
    std::swap(folder_, other->folder_);
    std::swap(isloop_, other->isloop_);
    std::swap(to_, other->to_);
    std::swap(from_, other->from_);
    std::swap(pattern_, other->pattern_);
    std::swap(offsetx_, other->offsetx_);
    std::swap(scale_, other->scale_);
    std::swap(is_flip_y_, other->is_flip_y_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SequenceAnimsConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SequenceAnimsConfig_descriptor_;
  metadata.reflection = SequenceAnimsConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
