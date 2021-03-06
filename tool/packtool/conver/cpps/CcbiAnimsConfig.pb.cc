// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CcbiAnimsConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CcbiAnimsConfig.pb.h"

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

const ::google::protobuf::Descriptor* CcbiAnimsConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CcbiAnimsConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CcbiAnimsConfig_2eproto() {
  protobuf_AddDesc_CcbiAnimsConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CcbiAnimsConfig.proto");
  GOOGLE_CHECK(file != NULL);
  CcbiAnimsConfig_descriptor_ = file->message_type(0);
  static const int CcbiAnimsConfig_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CcbiAnimsConfig, folder_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CcbiAnimsConfig, offsety_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CcbiAnimsConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CcbiAnimsConfig, offsetx_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CcbiAnimsConfig, ccbi_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CcbiAnimsConfig, is_flip_y_),
  };
  CcbiAnimsConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CcbiAnimsConfig_descriptor_,
      CcbiAnimsConfig::default_instance_,
      CcbiAnimsConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CcbiAnimsConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CcbiAnimsConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CcbiAnimsConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CcbiAnimsConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CcbiAnimsConfig_descriptor_, &CcbiAnimsConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CcbiAnimsConfig_2eproto() {
  delete CcbiAnimsConfig::default_instance_;
  delete CcbiAnimsConfig_reflection_;
}

void protobuf_AddDesc_CcbiAnimsConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025CcbiAnimsConfig.proto\022\022DianShiTech.Con"
    "fig\032\025ConfigTypeGroup.proto\"u\n\017CcbiAnimsC"
    "onfig\022\016\n\006folder\030\005 \001(\t\022\017\n\007offsety\030\003 \001(\005\022\n"
    "\n\002id\030\001 \001(\005\022\017\n\007offsetx\030\002 \001(\005\022\021\n\tccbi_name"
    "\030\006 \001(\t\022\021\n\tis_flip_y\030\004 \001(\005", 185);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CcbiAnimsConfig.proto", &protobuf_RegisterTypes);
  CcbiAnimsConfig::default_instance_ = new CcbiAnimsConfig();
  CcbiAnimsConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CcbiAnimsConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CcbiAnimsConfig_2eproto {
  StaticDescriptorInitializer_CcbiAnimsConfig_2eproto() {
    protobuf_AddDesc_CcbiAnimsConfig_2eproto();
  }
} static_descriptor_initializer_CcbiAnimsConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CcbiAnimsConfig::kFolderFieldNumber;
const int CcbiAnimsConfig::kOffsetyFieldNumber;
const int CcbiAnimsConfig::kIdFieldNumber;
const int CcbiAnimsConfig::kOffsetxFieldNumber;
const int CcbiAnimsConfig::kCcbiNameFieldNumber;
const int CcbiAnimsConfig::kIsFlipYFieldNumber;
#endif  // !_MSC_VER

CcbiAnimsConfig::CcbiAnimsConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CcbiAnimsConfig::InitAsDefaultInstance() {
}

CcbiAnimsConfig::CcbiAnimsConfig(const CcbiAnimsConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CcbiAnimsConfig::SharedCtor() {
  _cached_size_ = 0;
  folder_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  offsety_ = 0;
  id_ = 0;
  offsetx_ = 0;
  ccbi_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  is_flip_y_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CcbiAnimsConfig::~CcbiAnimsConfig() {
  SharedDtor();
}

void CcbiAnimsConfig::SharedDtor() {
  if (folder_ != &::google::protobuf::internal::kEmptyString) {
    delete folder_;
  }
  if (ccbi_name_ != &::google::protobuf::internal::kEmptyString) {
    delete ccbi_name_;
  }
  if (this != default_instance_) {
  }
}

void CcbiAnimsConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CcbiAnimsConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CcbiAnimsConfig_descriptor_;
}

const CcbiAnimsConfig& CcbiAnimsConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CcbiAnimsConfig_2eproto();
  return *default_instance_;
}

CcbiAnimsConfig* CcbiAnimsConfig::default_instance_ = NULL;

CcbiAnimsConfig* CcbiAnimsConfig::New() const {
  return new CcbiAnimsConfig;
}

void CcbiAnimsConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_folder()) {
      if (folder_ != &::google::protobuf::internal::kEmptyString) {
        folder_->clear();
      }
    }
    offsety_ = 0;
    id_ = 0;
    offsetx_ = 0;
    if (has_ccbi_name()) {
      if (ccbi_name_ != &::google::protobuf::internal::kEmptyString) {
        ccbi_name_->clear();
      }
    }
    is_flip_y_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CcbiAnimsConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_offsetx;
        break;
      }

      // optional int32 offsetx = 2;
      case 2: {
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
        if (input->ExpectTag(24)) goto parse_offsety;
        break;
      }

      // optional int32 offsety = 3;
      case 3: {
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
        if (input->ExpectTag(32)) goto parse_is_flip_y;
        break;
      }

      // optional int32 is_flip_y = 4;
      case 4: {
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
        if (input->ExpectTag(42)) goto parse_folder;
        break;
      }

      // optional string folder = 5;
      case 5: {
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
        if (input->ExpectTag(50)) goto parse_ccbi_name;
        break;
      }

      // optional string ccbi_name = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_ccbi_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ccbi_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->ccbi_name().data(), this->ccbi_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
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

void CcbiAnimsConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 offsetx = 2;
  if (has_offsetx()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->offsetx(), output);
  }

  // optional int32 offsety = 3;
  if (has_offsety()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->offsety(), output);
  }

  // optional int32 is_flip_y = 4;
  if (has_is_flip_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->is_flip_y(), output);
  }

  // optional string folder = 5;
  if (has_folder()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->folder().data(), this->folder().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->folder(), output);
  }

  // optional string ccbi_name = 6;
  if (has_ccbi_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->ccbi_name().data(), this->ccbi_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->ccbi_name(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CcbiAnimsConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 offsetx = 2;
  if (has_offsetx()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->offsetx(), target);
  }

  // optional int32 offsety = 3;
  if (has_offsety()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->offsety(), target);
  }

  // optional int32 is_flip_y = 4;
  if (has_is_flip_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->is_flip_y(), target);
  }

  // optional string folder = 5;
  if (has_folder()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->folder().data(), this->folder().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->folder(), target);
  }

  // optional string ccbi_name = 6;
  if (has_ccbi_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->ccbi_name().data(), this->ccbi_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->ccbi_name(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CcbiAnimsConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string folder = 5;
    if (has_folder()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->folder());
    }

    // optional int32 offsety = 3;
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

    // optional int32 offsetx = 2;
    if (has_offsetx()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->offsetx());
    }

    // optional string ccbi_name = 6;
    if (has_ccbi_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->ccbi_name());
    }

    // optional int32 is_flip_y = 4;
    if (has_is_flip_y()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->is_flip_y());
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

void CcbiAnimsConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CcbiAnimsConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CcbiAnimsConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CcbiAnimsConfig::MergeFrom(const CcbiAnimsConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_folder()) {
      set_folder(from.folder());
    }
    if (from.has_offsety()) {
      set_offsety(from.offsety());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_offsetx()) {
      set_offsetx(from.offsetx());
    }
    if (from.has_ccbi_name()) {
      set_ccbi_name(from.ccbi_name());
    }
    if (from.has_is_flip_y()) {
      set_is_flip_y(from.is_flip_y());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CcbiAnimsConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CcbiAnimsConfig::CopyFrom(const CcbiAnimsConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CcbiAnimsConfig::IsInitialized() const {

  return true;
}

void CcbiAnimsConfig::Swap(CcbiAnimsConfig* other) {
  if (other != this) {
    std::swap(folder_, other->folder_);
    std::swap(offsety_, other->offsety_);
    std::swap(id_, other->id_);
    std::swap(offsetx_, other->offsetx_);
    std::swap(ccbi_name_, other->ccbi_name_);
    std::swap(is_flip_y_, other->is_flip_y_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CcbiAnimsConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CcbiAnimsConfig_descriptor_;
  metadata.reflection = CcbiAnimsConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
