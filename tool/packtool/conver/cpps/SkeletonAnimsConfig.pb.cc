// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SkeletonAnimsConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SkeletonAnimsConfig.pb.h"

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

const ::google::protobuf::Descriptor* SkeletonAnimsConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SkeletonAnimsConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_SkeletonAnimsConfig_2eproto() {
  protobuf_AddDesc_SkeletonAnimsConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "SkeletonAnimsConfig.proto");
  GOOGLE_CHECK(file != NULL);
  SkeletonAnimsConfig_descriptor_ = file->message_type(0);
  static const int SkeletonAnimsConfig_offsets_[9] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkeletonAnimsConfig, animate_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkeletonAnimsConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkeletonAnimsConfig, duration_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkeletonAnimsConfig, folder_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkeletonAnimsConfig, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkeletonAnimsConfig, armature_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkeletonAnimsConfig, offsetx_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkeletonAnimsConfig, offsety_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkeletonAnimsConfig, size_),
  };
  SkeletonAnimsConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SkeletonAnimsConfig_descriptor_,
      SkeletonAnimsConfig::default_instance_,
      SkeletonAnimsConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkeletonAnimsConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SkeletonAnimsConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SkeletonAnimsConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_SkeletonAnimsConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SkeletonAnimsConfig_descriptor_, &SkeletonAnimsConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_SkeletonAnimsConfig_2eproto() {
  delete SkeletonAnimsConfig::default_instance_;
  delete SkeletonAnimsConfig_reflection_;
}

void protobuf_AddDesc_SkeletonAnimsConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031SkeletonAnimsConfig.proto\022\022DianShiTech"
    ".Config\032\025ConfigTypeGroup.proto\"\244\001\n\023Skele"
    "tonAnimsConfig\022\017\n\007animate\030\005 \001(\t\022\n\n\002id\030\001 "
    "\001(\005\022\020\n\010duration\030\010 \001(\005\022\016\n\006folder\030\002 \001(\t\022\014\n"
    "\004name\030\003 \001(\t\022\020\n\010armature\030\004 \001(\t\022\017\n\007offsetx"
    "\030\006 \001(\005\022\017\n\007offsety\030\007 \001(\005\022\014\n\004size\030\t \001(\005", 237);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SkeletonAnimsConfig.proto", &protobuf_RegisterTypes);
  SkeletonAnimsConfig::default_instance_ = new SkeletonAnimsConfig();
  SkeletonAnimsConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_SkeletonAnimsConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_SkeletonAnimsConfig_2eproto {
  StaticDescriptorInitializer_SkeletonAnimsConfig_2eproto() {
    protobuf_AddDesc_SkeletonAnimsConfig_2eproto();
  }
} static_descriptor_initializer_SkeletonAnimsConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int SkeletonAnimsConfig::kAnimateFieldNumber;
const int SkeletonAnimsConfig::kIdFieldNumber;
const int SkeletonAnimsConfig::kDurationFieldNumber;
const int SkeletonAnimsConfig::kFolderFieldNumber;
const int SkeletonAnimsConfig::kNameFieldNumber;
const int SkeletonAnimsConfig::kArmatureFieldNumber;
const int SkeletonAnimsConfig::kOffsetxFieldNumber;
const int SkeletonAnimsConfig::kOffsetyFieldNumber;
const int SkeletonAnimsConfig::kSizeFieldNumber;
#endif  // !_MSC_VER

SkeletonAnimsConfig::SkeletonAnimsConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SkeletonAnimsConfig::InitAsDefaultInstance() {
}

SkeletonAnimsConfig::SkeletonAnimsConfig(const SkeletonAnimsConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SkeletonAnimsConfig::SharedCtor() {
  _cached_size_ = 0;
  animate_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  id_ = 0;
  duration_ = 0;
  folder_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  armature_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  offsetx_ = 0;
  offsety_ = 0;
  size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SkeletonAnimsConfig::~SkeletonAnimsConfig() {
  SharedDtor();
}

void SkeletonAnimsConfig::SharedDtor() {
  if (animate_ != &::google::protobuf::internal::kEmptyString) {
    delete animate_;
  }
  if (folder_ != &::google::protobuf::internal::kEmptyString) {
    delete folder_;
  }
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (armature_ != &::google::protobuf::internal::kEmptyString) {
    delete armature_;
  }
  if (this != default_instance_) {
  }
}

void SkeletonAnimsConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SkeletonAnimsConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SkeletonAnimsConfig_descriptor_;
}

const SkeletonAnimsConfig& SkeletonAnimsConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_SkeletonAnimsConfig_2eproto();
  return *default_instance_;
}

SkeletonAnimsConfig* SkeletonAnimsConfig::default_instance_ = NULL;

SkeletonAnimsConfig* SkeletonAnimsConfig::New() const {
  return new SkeletonAnimsConfig;
}

void SkeletonAnimsConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_animate()) {
      if (animate_ != &::google::protobuf::internal::kEmptyString) {
        animate_->clear();
      }
    }
    id_ = 0;
    duration_ = 0;
    if (has_folder()) {
      if (folder_ != &::google::protobuf::internal::kEmptyString) {
        folder_->clear();
      }
    }
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    if (has_armature()) {
      if (armature_ != &::google::protobuf::internal::kEmptyString) {
        armature_->clear();
      }
    }
    offsetx_ = 0;
    offsety_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    size_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SkeletonAnimsConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(26)) goto parse_name;
        break;
      }

      // optional string name = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_armature;
        break;
      }

      // optional string armature = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_armature:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_armature()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->armature().data(), this->armature().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_animate;
        break;
      }

      // optional string animate = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_animate:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_animate()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->animate().data(), this->animate().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_offsetx;
        break;
      }

      // optional int32 offsetx = 6;
      case 6: {
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
        if (input->ExpectTag(56)) goto parse_offsety;
        break;
      }

      // optional int32 offsety = 7;
      case 7: {
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
        if (input->ExpectTag(64)) goto parse_duration;
        break;
      }

      // optional int32 duration = 8;
      case 8: {
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
        if (input->ExpectTag(72)) goto parse_size;
        break;
      }

      // optional int32 size = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &size_)));
          set_has_size();
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

void SkeletonAnimsConfig::SerializeWithCachedSizes(
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

  // optional string name = 3;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->name(), output);
  }

  // optional string armature = 4;
  if (has_armature()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->armature().data(), this->armature().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->armature(), output);
  }

  // optional string animate = 5;
  if (has_animate()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->animate().data(), this->animate().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->animate(), output);
  }

  // optional int32 offsetx = 6;
  if (has_offsetx()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->offsetx(), output);
  }

  // optional int32 offsety = 7;
  if (has_offsety()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->offsety(), output);
  }

  // optional int32 duration = 8;
  if (has_duration()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->duration(), output);
  }

  // optional int32 size = 9;
  if (has_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->size(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* SkeletonAnimsConfig::SerializeWithCachedSizesToArray(
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

  // optional string name = 3;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->name(), target);
  }

  // optional string armature = 4;
  if (has_armature()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->armature().data(), this->armature().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->armature(), target);
  }

  // optional string animate = 5;
  if (has_animate()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->animate().data(), this->animate().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->animate(), target);
  }

  // optional int32 offsetx = 6;
  if (has_offsetx()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->offsetx(), target);
  }

  // optional int32 offsety = 7;
  if (has_offsety()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->offsety(), target);
  }

  // optional int32 duration = 8;
  if (has_duration()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->duration(), target);
  }

  // optional int32 size = 9;
  if (has_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->size(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int SkeletonAnimsConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string animate = 5;
    if (has_animate()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->animate());
    }

    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 duration = 8;
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

    // optional string name = 3;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional string armature = 4;
    if (has_armature()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->armature());
    }

    // optional int32 offsetx = 6;
    if (has_offsetx()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->offsetx());
    }

    // optional int32 offsety = 7;
    if (has_offsety()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->offsety());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int32 size = 9;
    if (has_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->size());
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

void SkeletonAnimsConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SkeletonAnimsConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SkeletonAnimsConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SkeletonAnimsConfig::MergeFrom(const SkeletonAnimsConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_animate()) {
      set_animate(from.animate());
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
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_armature()) {
      set_armature(from.armature());
    }
    if (from.has_offsetx()) {
      set_offsetx(from.offsetx());
    }
    if (from.has_offsety()) {
      set_offsety(from.offsety());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_size()) {
      set_size(from.size());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SkeletonAnimsConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SkeletonAnimsConfig::CopyFrom(const SkeletonAnimsConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SkeletonAnimsConfig::IsInitialized() const {

  return true;
}

void SkeletonAnimsConfig::Swap(SkeletonAnimsConfig* other) {
  if (other != this) {
    std::swap(animate_, other->animate_);
    std::swap(id_, other->id_);
    std::swap(duration_, other->duration_);
    std::swap(folder_, other->folder_);
    std::swap(name_, other->name_);
    std::swap(armature_, other->armature_);
    std::swap(offsetx_, other->offsetx_);
    std::swap(offsety_, other->offsety_);
    std::swap(size_, other->size_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SkeletonAnimsConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SkeletonAnimsConfig_descriptor_;
  metadata.reflection = SkeletonAnimsConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
