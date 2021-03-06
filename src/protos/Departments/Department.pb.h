// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Departments/Department.proto

#ifndef PROTOBUF_Departments_2fDepartment_2eproto__INCLUDED
#define PROTOBUF_Departments_2fDepartment_2eproto__INCLUDED

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
#include "Address.pb.h"
#include "Timestamp.pb.h"
#include "Departments/Routing.pb.h"
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Departments {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Departments_2fDepartment_2eproto();
void protobuf_AssignDesc_Departments_2fDepartment_2eproto();
void protobuf_ShutdownFile_Departments_2fDepartment_2eproto();

class Department;

// ===================================================================

class Department : public ::google::protobuf::Message {
 public:
  Department();
  virtual ~Department();

  Department(const Department& from);

  inline Department& operator=(const Department& from) {
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
  static const Department& default_instance();

  void Swap(Department* other);

  // implements Message ----------------------------------------------

  Department* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Department& from);
  void MergeFrom(const Department& from);
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

  // required string Id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline const ::std::string& id() const;
  inline void set_id(const ::std::string& value);
  inline void set_id(const char* value);
  inline void set_id(const char* value, size_t size);
  inline ::std::string* mutable_id();
  inline ::std::string* release_id();
  inline void set_allocated_id(::std::string* id);

  // optional string ParentDepartmentId = 2;
  inline bool has_parentdepartmentid() const;
  inline void clear_parentdepartmentid();
  static const int kParentDepartmentIdFieldNumber = 2;
  inline const ::std::string& parentdepartmentid() const;
  inline void set_parentdepartmentid(const ::std::string& value);
  inline void set_parentdepartmentid(const char* value);
  inline void set_parentdepartmentid(const char* value, size_t size);
  inline ::std::string* mutable_parentdepartmentid();
  inline ::std::string* release_parentdepartmentid();
  inline void set_allocated_parentdepartmentid(::std::string* parentdepartmentid);

  // required string Name = 3;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 3;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required string Abbreviation = 4;
  inline bool has_abbreviation() const;
  inline void clear_abbreviation();
  static const int kAbbreviationFieldNumber = 4;
  inline const ::std::string& abbreviation() const;
  inline void set_abbreviation(const ::std::string& value);
  inline void set_abbreviation(const char* value);
  inline void set_abbreviation(const char* value, size_t size);
  inline ::std::string* mutable_abbreviation();
  inline ::std::string* release_abbreviation();
  inline void set_allocated_abbreviation(::std::string* abbreviation);

  // optional string Kpp = 5;
  inline bool has_kpp() const;
  inline void clear_kpp();
  static const int kKppFieldNumber = 5;
  inline const ::std::string& kpp() const;
  inline void set_kpp(const ::std::string& value);
  inline void set_kpp(const char* value);
  inline void set_kpp(const char* value, size_t size);
  inline ::std::string* mutable_kpp();
  inline ::std::string* release_kpp();
  inline void set_allocated_kpp(::std::string* kpp);

  // optional .Diadoc.Api.Proto.Address Address = 6;
  inline bool has_address() const;
  inline void clear_address();
  static const int kAddressFieldNumber = 6;
  inline const ::Diadoc::Api::Proto::Address& address() const;
  inline ::Diadoc::Api::Proto::Address* mutable_address();
  inline ::Diadoc::Api::Proto::Address* release_address();
  inline void set_allocated_address(::Diadoc::Api::Proto::Address* address);

  // required .Diadoc.Api.Proto.Departments.Routing Routing = 7;
  inline bool has_routing() const;
  inline void clear_routing();
  static const int kRoutingFieldNumber = 7;
  inline const ::Diadoc::Api::Proto::Departments::Routing& routing() const;
  inline ::Diadoc::Api::Proto::Departments::Routing* mutable_routing();
  inline ::Diadoc::Api::Proto::Departments::Routing* release_routing();
  inline void set_allocated_routing(::Diadoc::Api::Proto::Departments::Routing* routing);

  // required .Diadoc.Api.Proto.Timestamp CreationTimestamp = 8;
  inline bool has_creationtimestamp() const;
  inline void clear_creationtimestamp();
  static const int kCreationTimestampFieldNumber = 8;
  inline const ::Diadoc::Api::Proto::Timestamp& creationtimestamp() const;
  inline ::Diadoc::Api::Proto::Timestamp* mutable_creationtimestamp();
  inline ::Diadoc::Api::Proto::Timestamp* release_creationtimestamp();
  inline void set_allocated_creationtimestamp(::Diadoc::Api::Proto::Timestamp* creationtimestamp);

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Departments.Department)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_parentdepartmentid();
  inline void clear_has_parentdepartmentid();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_abbreviation();
  inline void clear_has_abbreviation();
  inline void set_has_kpp();
  inline void clear_has_kpp();
  inline void set_has_address();
  inline void clear_has_address();
  inline void set_has_routing();
  inline void clear_has_routing();
  inline void set_has_creationtimestamp();
  inline void clear_has_creationtimestamp();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* id_;
  ::std::string* parentdepartmentid_;
  ::std::string* name_;
  ::std::string* abbreviation_;
  ::std::string* kpp_;
  ::Diadoc::Api::Proto::Address* address_;
  ::Diadoc::Api::Proto::Departments::Routing* routing_;
  ::Diadoc::Api::Proto::Timestamp* creationtimestamp_;
  friend void  protobuf_AddDesc_Departments_2fDepartment_2eproto();
  friend void protobuf_AssignDesc_Departments_2fDepartment_2eproto();
  friend void protobuf_ShutdownFile_Departments_2fDepartment_2eproto();

  void InitAsDefaultInstance();
  static Department* default_instance_;
};
// ===================================================================


// ===================================================================

// Department

// required string Id = 1;
inline bool Department::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Department::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Department::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Department::clear_id() {
  if (id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    id_->clear();
  }
  clear_has_id();
}
inline const ::std::string& Department::id() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Departments.Department.Id)
  return *id_;
}
inline void Department::set_id(const ::std::string& value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    id_ = new ::std::string;
  }
  id_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Departments.Department.Id)
}
inline void Department::set_id(const char* value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    id_ = new ::std::string;
  }
  id_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.Departments.Department.Id)
}
inline void Department::set_id(const char* value, size_t size) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    id_ = new ::std::string;
  }
  id_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.Departments.Department.Id)
}
inline ::std::string* Department::mutable_id() {
  set_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    id_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Departments.Department.Id)
  return id_;
}
inline ::std::string* Department::release_id() {
  clear_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = id_;
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Department::set_allocated_id(::std::string* id) {
  if (id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete id_;
  }
  if (id) {
    set_has_id();
    id_ = id;
  } else {
    clear_has_id();
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Departments.Department.Id)
}

// optional string ParentDepartmentId = 2;
inline bool Department::has_parentdepartmentid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Department::set_has_parentdepartmentid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Department::clear_has_parentdepartmentid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Department::clear_parentdepartmentid() {
  if (parentdepartmentid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    parentdepartmentid_->clear();
  }
  clear_has_parentdepartmentid();
}
inline const ::std::string& Department::parentdepartmentid() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Departments.Department.ParentDepartmentId)
  return *parentdepartmentid_;
}
inline void Department::set_parentdepartmentid(const ::std::string& value) {
  set_has_parentdepartmentid();
  if (parentdepartmentid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    parentdepartmentid_ = new ::std::string;
  }
  parentdepartmentid_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Departments.Department.ParentDepartmentId)
}
inline void Department::set_parentdepartmentid(const char* value) {
  set_has_parentdepartmentid();
  if (parentdepartmentid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    parentdepartmentid_ = new ::std::string;
  }
  parentdepartmentid_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.Departments.Department.ParentDepartmentId)
}
inline void Department::set_parentdepartmentid(const char* value, size_t size) {
  set_has_parentdepartmentid();
  if (parentdepartmentid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    parentdepartmentid_ = new ::std::string;
  }
  parentdepartmentid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.Departments.Department.ParentDepartmentId)
}
inline ::std::string* Department::mutable_parentdepartmentid() {
  set_has_parentdepartmentid();
  if (parentdepartmentid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    parentdepartmentid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Departments.Department.ParentDepartmentId)
  return parentdepartmentid_;
}
inline ::std::string* Department::release_parentdepartmentid() {
  clear_has_parentdepartmentid();
  if (parentdepartmentid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = parentdepartmentid_;
    parentdepartmentid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Department::set_allocated_parentdepartmentid(::std::string* parentdepartmentid) {
  if (parentdepartmentid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete parentdepartmentid_;
  }
  if (parentdepartmentid) {
    set_has_parentdepartmentid();
    parentdepartmentid_ = parentdepartmentid;
  } else {
    clear_has_parentdepartmentid();
    parentdepartmentid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Departments.Department.ParentDepartmentId)
}

// required string Name = 3;
inline bool Department::has_name() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Department::set_has_name() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Department::clear_has_name() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Department::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Department::name() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Departments.Department.Name)
  return *name_;
}
inline void Department::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Departments.Department.Name)
}
inline void Department::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.Departments.Department.Name)
}
inline void Department::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.Departments.Department.Name)
}
inline ::std::string* Department::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Departments.Department.Name)
  return name_;
}
inline ::std::string* Department::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Department::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Departments.Department.Name)
}

// required string Abbreviation = 4;
inline bool Department::has_abbreviation() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Department::set_has_abbreviation() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Department::clear_has_abbreviation() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Department::clear_abbreviation() {
  if (abbreviation_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    abbreviation_->clear();
  }
  clear_has_abbreviation();
}
inline const ::std::string& Department::abbreviation() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Departments.Department.Abbreviation)
  return *abbreviation_;
}
inline void Department::set_abbreviation(const ::std::string& value) {
  set_has_abbreviation();
  if (abbreviation_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    abbreviation_ = new ::std::string;
  }
  abbreviation_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Departments.Department.Abbreviation)
}
inline void Department::set_abbreviation(const char* value) {
  set_has_abbreviation();
  if (abbreviation_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    abbreviation_ = new ::std::string;
  }
  abbreviation_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.Departments.Department.Abbreviation)
}
inline void Department::set_abbreviation(const char* value, size_t size) {
  set_has_abbreviation();
  if (abbreviation_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    abbreviation_ = new ::std::string;
  }
  abbreviation_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.Departments.Department.Abbreviation)
}
inline ::std::string* Department::mutable_abbreviation() {
  set_has_abbreviation();
  if (abbreviation_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    abbreviation_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Departments.Department.Abbreviation)
  return abbreviation_;
}
inline ::std::string* Department::release_abbreviation() {
  clear_has_abbreviation();
  if (abbreviation_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = abbreviation_;
    abbreviation_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Department::set_allocated_abbreviation(::std::string* abbreviation) {
  if (abbreviation_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete abbreviation_;
  }
  if (abbreviation) {
    set_has_abbreviation();
    abbreviation_ = abbreviation;
  } else {
    clear_has_abbreviation();
    abbreviation_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Departments.Department.Abbreviation)
}

// optional string Kpp = 5;
inline bool Department::has_kpp() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Department::set_has_kpp() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Department::clear_has_kpp() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Department::clear_kpp() {
  if (kpp_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    kpp_->clear();
  }
  clear_has_kpp();
}
inline const ::std::string& Department::kpp() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Departments.Department.Kpp)
  return *kpp_;
}
inline void Department::set_kpp(const ::std::string& value) {
  set_has_kpp();
  if (kpp_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    kpp_ = new ::std::string;
  }
  kpp_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Departments.Department.Kpp)
}
inline void Department::set_kpp(const char* value) {
  set_has_kpp();
  if (kpp_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    kpp_ = new ::std::string;
  }
  kpp_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.Departments.Department.Kpp)
}
inline void Department::set_kpp(const char* value, size_t size) {
  set_has_kpp();
  if (kpp_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    kpp_ = new ::std::string;
  }
  kpp_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.Departments.Department.Kpp)
}
inline ::std::string* Department::mutable_kpp() {
  set_has_kpp();
  if (kpp_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    kpp_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Departments.Department.Kpp)
  return kpp_;
}
inline ::std::string* Department::release_kpp() {
  clear_has_kpp();
  if (kpp_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = kpp_;
    kpp_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Department::set_allocated_kpp(::std::string* kpp) {
  if (kpp_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete kpp_;
  }
  if (kpp) {
    set_has_kpp();
    kpp_ = kpp;
  } else {
    clear_has_kpp();
    kpp_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Departments.Department.Kpp)
}

// optional .Diadoc.Api.Proto.Address Address = 6;
inline bool Department::has_address() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Department::set_has_address() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Department::clear_has_address() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Department::clear_address() {
  if (address_ != NULL) address_->::Diadoc::Api::Proto::Address::Clear();
  clear_has_address();
}
inline const ::Diadoc::Api::Proto::Address& Department::address() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Departments.Department.Address)
  return address_ != NULL ? *address_ : *default_instance_->address_;
}
inline ::Diadoc::Api::Proto::Address* Department::mutable_address() {
  set_has_address();
  if (address_ == NULL) address_ = new ::Diadoc::Api::Proto::Address;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Departments.Department.Address)
  return address_;
}
inline ::Diadoc::Api::Proto::Address* Department::release_address() {
  clear_has_address();
  ::Diadoc::Api::Proto::Address* temp = address_;
  address_ = NULL;
  return temp;
}
inline void Department::set_allocated_address(::Diadoc::Api::Proto::Address* address) {
  delete address_;
  address_ = address;
  if (address) {
    set_has_address();
  } else {
    clear_has_address();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Departments.Department.Address)
}

// required .Diadoc.Api.Proto.Departments.Routing Routing = 7;
inline bool Department::has_routing() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Department::set_has_routing() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Department::clear_has_routing() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Department::clear_routing() {
  if (routing_ != NULL) routing_->::Diadoc::Api::Proto::Departments::Routing::Clear();
  clear_has_routing();
}
inline const ::Diadoc::Api::Proto::Departments::Routing& Department::routing() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Departments.Department.Routing)
  return routing_ != NULL ? *routing_ : *default_instance_->routing_;
}
inline ::Diadoc::Api::Proto::Departments::Routing* Department::mutable_routing() {
  set_has_routing();
  if (routing_ == NULL) routing_ = new ::Diadoc::Api::Proto::Departments::Routing;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Departments.Department.Routing)
  return routing_;
}
inline ::Diadoc::Api::Proto::Departments::Routing* Department::release_routing() {
  clear_has_routing();
  ::Diadoc::Api::Proto::Departments::Routing* temp = routing_;
  routing_ = NULL;
  return temp;
}
inline void Department::set_allocated_routing(::Diadoc::Api::Proto::Departments::Routing* routing) {
  delete routing_;
  routing_ = routing;
  if (routing) {
    set_has_routing();
  } else {
    clear_has_routing();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Departments.Department.Routing)
}

// required .Diadoc.Api.Proto.Timestamp CreationTimestamp = 8;
inline bool Department::has_creationtimestamp() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Department::set_has_creationtimestamp() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Department::clear_has_creationtimestamp() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Department::clear_creationtimestamp() {
  if (creationtimestamp_ != NULL) creationtimestamp_->::Diadoc::Api::Proto::Timestamp::Clear();
  clear_has_creationtimestamp();
}
inline const ::Diadoc::Api::Proto::Timestamp& Department::creationtimestamp() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Departments.Department.CreationTimestamp)
  return creationtimestamp_ != NULL ? *creationtimestamp_ : *default_instance_->creationtimestamp_;
}
inline ::Diadoc::Api::Proto::Timestamp* Department::mutable_creationtimestamp() {
  set_has_creationtimestamp();
  if (creationtimestamp_ == NULL) creationtimestamp_ = new ::Diadoc::Api::Proto::Timestamp;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Departments.Department.CreationTimestamp)
  return creationtimestamp_;
}
inline ::Diadoc::Api::Proto::Timestamp* Department::release_creationtimestamp() {
  clear_has_creationtimestamp();
  ::Diadoc::Api::Proto::Timestamp* temp = creationtimestamp_;
  creationtimestamp_ = NULL;
  return temp;
}
inline void Department::set_allocated_creationtimestamp(::Diadoc::Api::Proto::Timestamp* creationtimestamp) {
  delete creationtimestamp_;
  creationtimestamp_ = creationtimestamp;
  if (creationtimestamp) {
    set_has_creationtimestamp();
  } else {
    clear_has_creationtimestamp();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Departments.Department.CreationTimestamp)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Departments
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

#endif  // PROTOBUF_Departments_2fDepartment_2eproto__INCLUDED
