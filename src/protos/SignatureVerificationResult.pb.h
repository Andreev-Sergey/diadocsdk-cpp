// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SignatureVerificationResult.proto

#ifndef PROTOBUF_SignatureVerificationResult_2eproto__INCLUDED
#define PROTOBUF_SignatureVerificationResult_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "Timestamp.pb.h"
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_SignatureVerificationResult_2eproto();
void protobuf_AssignDesc_SignatureVerificationResult_2eproto();
void protobuf_ShutdownFile_SignatureVerificationResult_2eproto();

class SignatureVerificationResult;
class CertificateVerificationResult;
class CertificateChainElement;

// ===================================================================

class SignatureVerificationResult : public ::google::protobuf::Message {
 public:
  SignatureVerificationResult();
  virtual ~SignatureVerificationResult();

  SignatureVerificationResult(const SignatureVerificationResult& from);

  inline SignatureVerificationResult& operator=(const SignatureVerificationResult& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SignatureVerificationResult& default_instance();

  void Swap(SignatureVerificationResult* other);

  // implements Message ----------------------------------------------

  SignatureVerificationResult* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SignatureVerificationResult& from);
  void MergeFrom(const SignatureVerificationResult& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bool IsValid = 1;
  inline bool has_isvalid() const;
  inline void clear_isvalid();
  static const int kIsValidFieldNumber = 1;
  inline bool isvalid() const;
  inline void set_isvalid(bool value);

  // optional .Diadoc.Api.Proto.CertificateVerificationResult CertificateStatus = 2;
  inline bool has_certificatestatus() const;
  inline void clear_certificatestatus();
  static const int kCertificateStatusFieldNumber = 2;
  inline const ::Diadoc::Api::Proto::CertificateVerificationResult& certificatestatus() const;
  inline ::Diadoc::Api::Proto::CertificateVerificationResult* mutable_certificatestatus();
  inline ::Diadoc::Api::Proto::CertificateVerificationResult* release_certificatestatus();
  inline void set_allocated_certificatestatus(::Diadoc::Api::Proto::CertificateVerificationResult* certificatestatus);

  // optional .Diadoc.Api.Proto.Timestamp SignatureTimestamp = 3;
  inline bool has_signaturetimestamp() const;
  inline void clear_signaturetimestamp();
  static const int kSignatureTimestampFieldNumber = 3;
  inline const ::Diadoc::Api::Proto::Timestamp& signaturetimestamp() const;
  inline ::Diadoc::Api::Proto::Timestamp* mutable_signaturetimestamp();
  inline ::Diadoc::Api::Proto::Timestamp* release_signaturetimestamp();
  inline void set_allocated_signaturetimestamp(::Diadoc::Api::Proto::Timestamp* signaturetimestamp);

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.SignatureVerificationResult)
 private:
  inline void set_has_isvalid();
  inline void clear_has_isvalid();
  inline void set_has_certificatestatus();
  inline void clear_has_certificatestatus();
  inline void set_has_signaturetimestamp();
  inline void clear_has_signaturetimestamp();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::Diadoc::Api::Proto::CertificateVerificationResult* certificatestatus_;
  ::Diadoc::Api::Proto::Timestamp* signaturetimestamp_;
  bool isvalid_;
  friend void  protobuf_AddDesc_SignatureVerificationResult_2eproto();
  friend void protobuf_AssignDesc_SignatureVerificationResult_2eproto();
  friend void protobuf_ShutdownFile_SignatureVerificationResult_2eproto();

  void InitAsDefaultInstance();
  static SignatureVerificationResult* default_instance_;
};
// -------------------------------------------------------------------

class CertificateVerificationResult : public ::google::protobuf::Message {
 public:
  CertificateVerificationResult();
  virtual ~CertificateVerificationResult();

  CertificateVerificationResult(const CertificateVerificationResult& from);

  inline CertificateVerificationResult& operator=(const CertificateVerificationResult& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CertificateVerificationResult& default_instance();

  void Swap(CertificateVerificationResult* other);

  // implements Message ----------------------------------------------

  CertificateVerificationResult* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CertificateVerificationResult& from);
  void MergeFrom(const CertificateVerificationResult& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bool IsValid = 2;
  inline bool has_isvalid() const;
  inline void clear_isvalid();
  static const int kIsValidFieldNumber = 2;
  inline bool isvalid() const;
  inline void set_isvalid(bool value);

  // repeated .Diadoc.Api.Proto.CertificateChainElement CertificateChain = 3;
  inline int certificatechain_size() const;
  inline void clear_certificatechain();
  static const int kCertificateChainFieldNumber = 3;
  inline const ::Diadoc::Api::Proto::CertificateChainElement& certificatechain(int index) const;
  inline ::Diadoc::Api::Proto::CertificateChainElement* mutable_certificatechain(int index);
  inline ::Diadoc::Api::Proto::CertificateChainElement* add_certificatechain();
  inline const ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::CertificateChainElement >&
      certificatechain() const;
  inline ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::CertificateChainElement >*
      mutable_certificatechain();

  // required .Diadoc.Api.Proto.Timestamp VerificationTime = 4;
  inline bool has_verificationtime() const;
  inline void clear_verificationtime();
  static const int kVerificationTimeFieldNumber = 4;
  inline const ::Diadoc::Api::Proto::Timestamp& verificationtime() const;
  inline ::Diadoc::Api::Proto::Timestamp* mutable_verificationtime();
  inline ::Diadoc::Api::Proto::Timestamp* release_verificationtime();
  inline void set_allocated_verificationtime(::Diadoc::Api::Proto::Timestamp* verificationtime);

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.CertificateVerificationResult)
 private:
  inline void set_has_isvalid();
  inline void clear_has_isvalid();
  inline void set_has_verificationtime();
  inline void clear_has_verificationtime();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::CertificateChainElement > certificatechain_;
  ::Diadoc::Api::Proto::Timestamp* verificationtime_;
  bool isvalid_;
  friend void  protobuf_AddDesc_SignatureVerificationResult_2eproto();
  friend void protobuf_AssignDesc_SignatureVerificationResult_2eproto();
  friend void protobuf_ShutdownFile_SignatureVerificationResult_2eproto();

  void InitAsDefaultInstance();
  static CertificateVerificationResult* default_instance_;
};
// -------------------------------------------------------------------

class CertificateChainElement : public ::google::protobuf::Message {
 public:
  CertificateChainElement();
  virtual ~CertificateChainElement();

  CertificateChainElement(const CertificateChainElement& from);

  inline CertificateChainElement& operator=(const CertificateChainElement& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CertificateChainElement& default_instance();

  void Swap(CertificateChainElement* other);

  // implements Message ----------------------------------------------

  CertificateChainElement* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CertificateChainElement& from);
  void MergeFrom(const CertificateChainElement& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 CertificateChainStatusFlags = 1;
  inline bool has_certificatechainstatusflags() const;
  inline void clear_certificatechainstatusflags();
  static const int kCertificateChainStatusFlagsFieldNumber = 1;
  inline ::google::protobuf::int32 certificatechainstatusflags() const;
  inline void set_certificatechainstatusflags(::google::protobuf::int32 value);

  // required bytes DerCertificate = 2;
  inline bool has_dercertificate() const;
  inline void clear_dercertificate();
  static const int kDerCertificateFieldNumber = 2;
  inline const ::std::string& dercertificate() const;
  inline void set_dercertificate(const ::std::string& value);
  inline void set_dercertificate(const char* value);
  inline void set_dercertificate(const void* value, size_t size);
  inline ::std::string* mutable_dercertificate();
  inline ::std::string* release_dercertificate();
  inline void set_allocated_dercertificate(::std::string* dercertificate);

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.CertificateChainElement)
 private:
  inline void set_has_certificatechainstatusflags();
  inline void clear_has_certificatechainstatusflags();
  inline void set_has_dercertificate();
  inline void clear_has_dercertificate();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* dercertificate_;
  ::google::protobuf::int32 certificatechainstatusflags_;
  friend void  protobuf_AddDesc_SignatureVerificationResult_2eproto();
  friend void protobuf_AssignDesc_SignatureVerificationResult_2eproto();
  friend void protobuf_ShutdownFile_SignatureVerificationResult_2eproto();

  void InitAsDefaultInstance();
  static CertificateChainElement* default_instance_;
};
// ===================================================================


// ===================================================================

// SignatureVerificationResult

// required bool IsValid = 1;
inline bool SignatureVerificationResult::has_isvalid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SignatureVerificationResult::set_has_isvalid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SignatureVerificationResult::clear_has_isvalid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SignatureVerificationResult::clear_isvalid() {
  isvalid_ = false;
  clear_has_isvalid();
}
inline bool SignatureVerificationResult::isvalid() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.SignatureVerificationResult.IsValid)
  return isvalid_;
}
inline void SignatureVerificationResult::set_isvalid(bool value) {
  set_has_isvalid();
  isvalid_ = value;
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.SignatureVerificationResult.IsValid)
}

// optional .Diadoc.Api.Proto.CertificateVerificationResult CertificateStatus = 2;
inline bool SignatureVerificationResult::has_certificatestatus() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SignatureVerificationResult::set_has_certificatestatus() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SignatureVerificationResult::clear_has_certificatestatus() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SignatureVerificationResult::clear_certificatestatus() {
  if (certificatestatus_ != NULL) certificatestatus_->::Diadoc::Api::Proto::CertificateVerificationResult::Clear();
  clear_has_certificatestatus();
}
inline const ::Diadoc::Api::Proto::CertificateVerificationResult& SignatureVerificationResult::certificatestatus() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.SignatureVerificationResult.CertificateStatus)
  return certificatestatus_ != NULL ? *certificatestatus_ : *default_instance_->certificatestatus_;
}
inline ::Diadoc::Api::Proto::CertificateVerificationResult* SignatureVerificationResult::mutable_certificatestatus() {
  set_has_certificatestatus();
  if (certificatestatus_ == NULL) certificatestatus_ = new ::Diadoc::Api::Proto::CertificateVerificationResult;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.SignatureVerificationResult.CertificateStatus)
  return certificatestatus_;
}
inline ::Diadoc::Api::Proto::CertificateVerificationResult* SignatureVerificationResult::release_certificatestatus() {
  clear_has_certificatestatus();
  ::Diadoc::Api::Proto::CertificateVerificationResult* temp = certificatestatus_;
  certificatestatus_ = NULL;
  return temp;
}
inline void SignatureVerificationResult::set_allocated_certificatestatus(::Diadoc::Api::Proto::CertificateVerificationResult* certificatestatus) {
  delete certificatestatus_;
  certificatestatus_ = certificatestatus;
  if (certificatestatus) {
    set_has_certificatestatus();
  } else {
    clear_has_certificatestatus();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.SignatureVerificationResult.CertificateStatus)
}

// optional .Diadoc.Api.Proto.Timestamp SignatureTimestamp = 3;
inline bool SignatureVerificationResult::has_signaturetimestamp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SignatureVerificationResult::set_has_signaturetimestamp() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SignatureVerificationResult::clear_has_signaturetimestamp() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SignatureVerificationResult::clear_signaturetimestamp() {
  if (signaturetimestamp_ != NULL) signaturetimestamp_->::Diadoc::Api::Proto::Timestamp::Clear();
  clear_has_signaturetimestamp();
}
inline const ::Diadoc::Api::Proto::Timestamp& SignatureVerificationResult::signaturetimestamp() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.SignatureVerificationResult.SignatureTimestamp)
  return signaturetimestamp_ != NULL ? *signaturetimestamp_ : *default_instance_->signaturetimestamp_;
}
inline ::Diadoc::Api::Proto::Timestamp* SignatureVerificationResult::mutable_signaturetimestamp() {
  set_has_signaturetimestamp();
  if (signaturetimestamp_ == NULL) signaturetimestamp_ = new ::Diadoc::Api::Proto::Timestamp;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.SignatureVerificationResult.SignatureTimestamp)
  return signaturetimestamp_;
}
inline ::Diadoc::Api::Proto::Timestamp* SignatureVerificationResult::release_signaturetimestamp() {
  clear_has_signaturetimestamp();
  ::Diadoc::Api::Proto::Timestamp* temp = signaturetimestamp_;
  signaturetimestamp_ = NULL;
  return temp;
}
inline void SignatureVerificationResult::set_allocated_signaturetimestamp(::Diadoc::Api::Proto::Timestamp* signaturetimestamp) {
  delete signaturetimestamp_;
  signaturetimestamp_ = signaturetimestamp;
  if (signaturetimestamp) {
    set_has_signaturetimestamp();
  } else {
    clear_has_signaturetimestamp();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.SignatureVerificationResult.SignatureTimestamp)
}

// -------------------------------------------------------------------

// CertificateVerificationResult

// required bool IsValid = 2;
inline bool CertificateVerificationResult::has_isvalid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CertificateVerificationResult::set_has_isvalid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CertificateVerificationResult::clear_has_isvalid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CertificateVerificationResult::clear_isvalid() {
  isvalid_ = false;
  clear_has_isvalid();
}
inline bool CertificateVerificationResult::isvalid() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.CertificateVerificationResult.IsValid)
  return isvalid_;
}
inline void CertificateVerificationResult::set_isvalid(bool value) {
  set_has_isvalid();
  isvalid_ = value;
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.CertificateVerificationResult.IsValid)
}

// repeated .Diadoc.Api.Proto.CertificateChainElement CertificateChain = 3;
inline int CertificateVerificationResult::certificatechain_size() const {
  return certificatechain_.size();
}
inline void CertificateVerificationResult::clear_certificatechain() {
  certificatechain_.Clear();
}
inline const ::Diadoc::Api::Proto::CertificateChainElement& CertificateVerificationResult::certificatechain(int index) const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.CertificateVerificationResult.CertificateChain)
  return certificatechain_.Get(index);
}
inline ::Diadoc::Api::Proto::CertificateChainElement* CertificateVerificationResult::mutable_certificatechain(int index) {
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.CertificateVerificationResult.CertificateChain)
  return certificatechain_.Mutable(index);
}
inline ::Diadoc::Api::Proto::CertificateChainElement* CertificateVerificationResult::add_certificatechain() {
  // @@protoc_insertion_point(field_add:Diadoc.Api.Proto.CertificateVerificationResult.CertificateChain)
  return certificatechain_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::CertificateChainElement >&
CertificateVerificationResult::certificatechain() const {
  // @@protoc_insertion_point(field_list:Diadoc.Api.Proto.CertificateVerificationResult.CertificateChain)
  return certificatechain_;
}
inline ::google::protobuf::RepeatedPtrField< ::Diadoc::Api::Proto::CertificateChainElement >*
CertificateVerificationResult::mutable_certificatechain() {
  // @@protoc_insertion_point(field_mutable_list:Diadoc.Api.Proto.CertificateVerificationResult.CertificateChain)
  return &certificatechain_;
}

// required .Diadoc.Api.Proto.Timestamp VerificationTime = 4;
inline bool CertificateVerificationResult::has_verificationtime() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CertificateVerificationResult::set_has_verificationtime() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CertificateVerificationResult::clear_has_verificationtime() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CertificateVerificationResult::clear_verificationtime() {
  if (verificationtime_ != NULL) verificationtime_->::Diadoc::Api::Proto::Timestamp::Clear();
  clear_has_verificationtime();
}
inline const ::Diadoc::Api::Proto::Timestamp& CertificateVerificationResult::verificationtime() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.CertificateVerificationResult.VerificationTime)
  return verificationtime_ != NULL ? *verificationtime_ : *default_instance_->verificationtime_;
}
inline ::Diadoc::Api::Proto::Timestamp* CertificateVerificationResult::mutable_verificationtime() {
  set_has_verificationtime();
  if (verificationtime_ == NULL) verificationtime_ = new ::Diadoc::Api::Proto::Timestamp;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.CertificateVerificationResult.VerificationTime)
  return verificationtime_;
}
inline ::Diadoc::Api::Proto::Timestamp* CertificateVerificationResult::release_verificationtime() {
  clear_has_verificationtime();
  ::Diadoc::Api::Proto::Timestamp* temp = verificationtime_;
  verificationtime_ = NULL;
  return temp;
}
inline void CertificateVerificationResult::set_allocated_verificationtime(::Diadoc::Api::Proto::Timestamp* verificationtime) {
  delete verificationtime_;
  verificationtime_ = verificationtime;
  if (verificationtime) {
    set_has_verificationtime();
  } else {
    clear_has_verificationtime();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.CertificateVerificationResult.VerificationTime)
}

// -------------------------------------------------------------------

// CertificateChainElement

// required int32 CertificateChainStatusFlags = 1;
inline bool CertificateChainElement::has_certificatechainstatusflags() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CertificateChainElement::set_has_certificatechainstatusflags() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CertificateChainElement::clear_has_certificatechainstatusflags() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CertificateChainElement::clear_certificatechainstatusflags() {
  certificatechainstatusflags_ = 0;
  clear_has_certificatechainstatusflags();
}
inline ::google::protobuf::int32 CertificateChainElement::certificatechainstatusflags() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.CertificateChainElement.CertificateChainStatusFlags)
  return certificatechainstatusflags_;
}
inline void CertificateChainElement::set_certificatechainstatusflags(::google::protobuf::int32 value) {
  set_has_certificatechainstatusflags();
  certificatechainstatusflags_ = value;
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.CertificateChainElement.CertificateChainStatusFlags)
}

// required bytes DerCertificate = 2;
inline bool CertificateChainElement::has_dercertificate() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CertificateChainElement::set_has_dercertificate() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CertificateChainElement::clear_has_dercertificate() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CertificateChainElement::clear_dercertificate() {
  if (dercertificate_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    dercertificate_->clear();
  }
  clear_has_dercertificate();
}
inline const ::std::string& CertificateChainElement::dercertificate() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.CertificateChainElement.DerCertificate)
  return *dercertificate_;
}
inline void CertificateChainElement::set_dercertificate(const ::std::string& value) {
  set_has_dercertificate();
  if (dercertificate_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    dercertificate_ = new ::std::string;
  }
  dercertificate_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.CertificateChainElement.DerCertificate)
}
inline void CertificateChainElement::set_dercertificate(const char* value) {
  set_has_dercertificate();
  if (dercertificate_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    dercertificate_ = new ::std::string;
  }
  dercertificate_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.CertificateChainElement.DerCertificate)
}
inline void CertificateChainElement::set_dercertificate(const void* value, size_t size) {
  set_has_dercertificate();
  if (dercertificate_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    dercertificate_ = new ::std::string;
  }
  dercertificate_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.CertificateChainElement.DerCertificate)
}
inline ::std::string* CertificateChainElement::mutable_dercertificate() {
  set_has_dercertificate();
  if (dercertificate_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    dercertificate_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.CertificateChainElement.DerCertificate)
  return dercertificate_;
}
inline ::std::string* CertificateChainElement::release_dercertificate() {
  clear_has_dercertificate();
  if (dercertificate_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = dercertificate_;
    dercertificate_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void CertificateChainElement::set_allocated_dercertificate(::std::string* dercertificate) {
  if (dercertificate_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete dercertificate_;
  }
  if (dercertificate) {
    set_has_dercertificate();
    dercertificate_ = dercertificate;
  } else {
    clear_has_dercertificate();
    dercertificate_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.CertificateChainElement.DerCertificate)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SignatureVerificationResult_2eproto__INCLUDED
