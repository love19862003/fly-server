// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: VipSignUpConfig.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "VipSignUpConfig.pb.h"

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

const ::google::protobuf::Descriptor* VipSignUpConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  VipSignUpConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_VipSignUpConfig_2eproto() {
  protobuf_AddDesc_VipSignUpConfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "VipSignUpConfig.proto");
  GOOGLE_CHECK(file != NULL);
  VipSignUpConfig_descriptor_ = file->message_type(0);
  static const int VipSignUpConfig_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VipSignUpConfig, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VipSignUpConfig, bonus_),
  };
  VipSignUpConfig_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      VipSignUpConfig_descriptor_,
      VipSignUpConfig::default_instance_,
      VipSignUpConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VipSignUpConfig, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VipSignUpConfig, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(VipSignUpConfig));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_VipSignUpConfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    VipSignUpConfig_descriptor_, &VipSignUpConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_VipSignUpConfig_2eproto() {
  delete VipSignUpConfig::default_instance_;
  delete VipSignUpConfig_reflection_;
}

void protobuf_AddDesc_VipSignUpConfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DianShiTech::Config::protobuf_AddDesc_ConfigTypeGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025VipSignUpConfig.proto\022\022DianShiTech.Con"
    "fig\032\025ConfigTypeGroup.proto\"Q\n\017VipSignUpC"
    "onfig\022\n\n\002id\030\001 \001(\005\0222\n\005bonus\030\002 \003(\0132#.DianS"
    "hiTech.Config.ConfigTypeGroup", 149);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "VipSignUpConfig.proto", &protobuf_RegisterTypes);
  VipSignUpConfig::default_instance_ = new VipSignUpConfig();
  VipSignUpConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_VipSignUpConfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_VipSignUpConfig_2eproto {
  StaticDescriptorInitializer_VipSignUpConfig_2eproto() {
    protobuf_AddDesc_VipSignUpConfig_2eproto();
  }
} static_descriptor_initializer_VipSignUpConfig_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int VipSignUpConfig::kIdFieldNumber;
const int VipSignUpConfig::kBonusFieldNumber;
#endif  // !_MSC_VER

VipSignUpConfig::VipSignUpConfig()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void VipSignUpConfig::InitAsDefaultInstance() {
}

VipSignUpConfig::VipSignUpConfig(const VipSignUpConfig& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void VipSignUpConfig::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

VipSignUpConfig::~VipSignUpConfig() {
  SharedDtor();
}

void VipSignUpConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void VipSignUpConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VipSignUpConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return VipSignUpConfig_descriptor_;
}

const VipSignUpConfig& VipSignUpConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_VipSignUpConfig_2eproto();
  return *default_instance_;
}

VipSignUpConfig* VipSignUpConfig::default_instance_ = NULL;

VipSignUpConfig* VipSignUpConfig::New() const {
  return new VipSignUpConfig;
}

void VipSignUpConfig::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
  }
  bonus_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool VipSignUpConfig::MergePartialFromCodedStream(
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
        if (input->ExpectTag(18)) goto parse_bonus;
        break;
      }

      // repeated .DianShiTech.Config.ConfigTypeGroup bonus = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_bonus:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_bonus()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_bonus;
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

void VipSignUpConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // repeated .DianShiTech.Config.ConfigTypeGroup bonus = 2;
  for (int i = 0; i < this->bonus_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->bonus(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* VipSignUpConfig::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // repeated .DianShiTech.Config.ConfigTypeGroup bonus = 2;
  for (int i = 0; i < this->bonus_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->bonus(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int VipSignUpConfig::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

  }
  // repeated .DianShiTech.Config.ConfigTypeGroup bonus = 2;
  total_size += 1 * this->bonus_size();
  for (int i = 0; i < this->bonus_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->bonus(i));
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

void VipSignUpConfig::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const VipSignUpConfig* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const VipSignUpConfig*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void VipSignUpConfig::MergeFrom(const VipSignUpConfig& from) {
  GOOGLE_CHECK_NE(&from, this);
  bonus_.MergeFrom(from.bonus_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void VipSignUpConfig::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VipSignUpConfig::CopyFrom(const VipSignUpConfig& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VipSignUpConfig::IsInitialized() const {

  return true;
}

void VipSignUpConfig::Swap(VipSignUpConfig* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    bonus_.Swap(&other->bonus_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata VipSignUpConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = VipSignUpConfig_descriptor_;
  metadata.reflection = VipSignUpConfig_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace DianShiTech

// @@protoc_insertion_point(global_scope)
