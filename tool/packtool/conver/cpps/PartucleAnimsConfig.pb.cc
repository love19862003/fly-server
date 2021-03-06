// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PartucleAnimsConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PartucleAnimsConfig.pb.h"

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

const ::google::protobuf::Descriptor* PartucleAnimsConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PartucleAnimsConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_PartucleAnimsConfig_2eproto() {
  protobuf_AddDesc_PartucleAnimsConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "PartucleAnimsConfig.proto");
  GOOGLE_CHECK(file != NULL);
  PartucleAnimsConfig_descriptor_ = file->message_type(0);
  static const int PartucleAnimsConfig_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PartucleAnimsConfig, folder_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PartucleAnimsConfig, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PartucleAnimsConfig, isloop_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PartucleAnimsConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PartucleAnimsConfig, offsetx_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PartucleAnimsConfig, duration_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PartucleAnimsConfig, offsety_),
  };
  PartucleAnimsConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PartucleAnimsConfig_descriptor_,
      PartucleAnimsConfig::default_instance_,
      PartucleAnimsConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PartucleAnimsConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PartucleAnimsConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PartucleAnimsConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_PartucleAnimsConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PartucleAnimsConfig_descriptor_, &PartucleAnimsConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_PartucleAnimsConfig_2eproto() {
  delete PartucleAnimsConfig::default_instance_;
  delete PartucleAnimsConfig_reflection_;
}

void protobuf_AddDesc_PartucleAnimsConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031PartucleAnimsConfig.proto\022\022DianShiTech"
    ".Config\032\025ConfigTypeGroup.proto\"\203\001\n\023Partu"
    "cleAnimsConfig\022\016\n\006folder\030\002 \001(\t\022\014\n\004name\030\003"
    " \001(\t\022\016\n\006isloop\030\007 \001(\005\022\n\n\002id\030\001 \001(\005\022\017\n\007offs"
    "etx\030\004 \001(\005\022\020\n\010duration\030\006 \001(\005\022\017\n\007offsety\030\005"
    " \001(\005", 204);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "PartucleAnimsConfig.proto", &protobuf_RegisterTypes);
  PartucleAnimsConfig::default_instance_ = new PartucleAnimsConfig();
  PartucleAnimsConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PartucleAnimsConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PartucleAnimsConfig_2eproto {
  StaticDescriptorInitializer_PartucleAnimsConfig_2eproto() {
    protobuf_AddDesc_PartucleAnimsConfig_2eproto();
  }
} static_descriptor_initializer_PartucleAnimsConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int PartucleAnimsConfig::kFolderFieldNumber;
const int PartucleAnimsConfig::kNameFieldNumber;
const int PartucleAnimsConfig::kIsloopFieldNumber;
const int PartucleAnimsConfig::kIdFieldNumber;
const int PartucleAnimsConfig::kOffsetxFieldNumber;
const int PartucleAnimsConfig::kDurationFieldNumber;
const int PartucleAnimsConfig::kOffsetyFieldNumber;
#endif  // !_MSC_VER

PartucleAnimsConfig::PartucleAnimsConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PartucleAnimsConfig::InitAsDefaultInstance() {
}

PartucleAnimsConfig::PartucleAnimsConfig(const PartucleAnimsConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PartucleAnimsConfig::SharedCtor() {
  _cached_size_ = 0;
  folder_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  isloop_ = 0;
  id_ = 0;
  offsetx_ = 0;
  duration_ = 0;
  offsety_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PartucleAnimsConfig::~PartucleAnimsConfig() {
  SharedDtor();
}

void PartucleAnimsConfig::SharedDtor() {
  if (folder_ != &::google::protobuf::internal::kEmptyString) {
    delete folder_;
  }
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (this != default_instance_) {
  }
}

void PartucleAnimsConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PartucleAnimsConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PartucleAnimsConfig_descriptor_;
}

const PartucleAnimsConfig& PartucleAnimsConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_PartucleAnimsConfig_2eproto();
  return *default_instance_;
}

PartucleAnimsConfig* PartucleAnimsConfig::default_instance_ = NULL;

PartucleAnimsConfig* PartucleAnimsConfig::New() const {
  return new PartucleAnimsConfig;
}

void PartucleAnimsConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
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
    isloop_ = 0;
    id_ = 0;
    offsetx_ = 0;
    duration_ = 0;
    offsety_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PartucleAnimsConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(48)) goto parse_duration;
        break;
      }

      // optional int32 duration = 6;
      case 6: {
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
        if (input->ExpectTag(56)) goto parse_isloop;
        break;
      }

      // optional int32 isloop = 7;
      case 7: {
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

void PartucleAnimsConfig::SerializeWithCachedSizes(
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

  // optional int32 offsetx = 4;
  if (has_offsetx()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->offsetx(), output);
  }

  // optional int32 offsety = 5;
  if (has_offsety()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->offsety(), output);
  }

  // optional int32 duration = 6;
  if (has_duration()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->duration(), output);
  }

  // optional int32 isloop = 7;
  if (has_isloop()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->isloop(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PartucleAnimsConfig::SerializeWithCachedSizesToArray(
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

  // optional int32 offsetx = 4;
  if (has_offsetx()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->offsetx(), target);
  }

  // optional int32 offsety = 5;
  if (has_offsety()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->offsety(), target);
  }

  // optional int32 duration = 6;
  if (has_duration()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->duration(), target);
  }

  // optional int32 isloop = 7;
  if (has_isloop()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->isloop(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PartucleAnimsConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
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

    // optional int32 isloop = 7;
    if (has_isloop()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->isloop());
    }

    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 offsetx = 4;
    if (has_offsetx()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->offsetx());
    }

    // optional int32 duration = 6;
    if (has_duration()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->duration());
    }

    // optional int32 offsety = 5;
    if (has_offsety()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->offsety());
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

void PartucleAnimsConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PartucleAnimsConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PartucleAnimsConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PartucleAnimsConfig::MergeFrom(const PartucleAnimsConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_folder()) {
      set_folder(from.folder());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_isloop()) {
      set_isloop(from.isloop());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_offsetx()) {
      set_offsetx(from.offsetx());
    }
    if (from.has_duration()) {
      set_duration(from.duration());
    }
    if (from.has_offsety()) {
      set_offsety(from.offsety());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PartucleAnimsConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PartucleAnimsConfig::CopyFrom(const PartucleAnimsConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PartucleAnimsConfig::IsInitialized() const {

  return true;
}

void PartucleAnimsConfig::Swap(PartucleAnimsConfig* other) {
  if (other != this) {
    std::swap(folder_, other->folder_);
    std::swap(name_, other->name_);
    std::swap(isloop_, other->isloop_);
    std::swap(id_, other->id_);
    std::swap(offsetx_, other->offsetx_);
    std::swap(duration_, other->duration_);
    std::swap(offsety_, other->offsety_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PartucleAnimsConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PartucleAnimsConfig_descriptor_;
  metadata.reflection = PartucleAnimsConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
