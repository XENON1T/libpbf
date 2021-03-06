// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocDef.proto

#ifndef PROTOBUF_protocDef_2eproto__INCLUDED
#define PROTOBUF_protocDef_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace pbf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_protocDef_2eproto();
void protobuf_AssignDesc_protocDef_2eproto();
void protobuf_ShutdownFile_protocDef_2eproto();

class Event;
class Event_Channel;
class Event_Channel_Data;
class Header;

// ===================================================================

class Event_Channel_Data : public ::google::protobuf::Message {
 public:
  Event_Channel_Data();
  virtual ~Event_Channel_Data();
  
  Event_Channel_Data(const Event_Channel_Data& from);
  
  inline Event_Channel_Data& operator=(const Event_Channel_Data& from) {
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
  static const Event_Channel_Data& default_instance();
  
  void Swap(Event_Channel_Data* other);
  
  // implements Message ----------------------------------------------
  
  Event_Channel_Data* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Event_Channel_Data& from);
  void MergeFrom(const Event_Channel_Data& from);
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
  
  // required bytes payload = 1;
  inline bool has_payload() const;
  inline void clear_payload();
  static const int kPayloadFieldNumber = 1;
  inline const ::std::string& payload() const;
  inline void set_payload(const ::std::string& value);
  inline void set_payload(const char* value);
  inline void set_payload(const void* value, size_t size);
  inline ::std::string* mutable_payload();
  inline ::std::string* release_payload();
  
  // optional int64 time = 2;
  inline bool has_time() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 2;
  inline ::google::protobuf::int64 time() const;
  inline void set_time(::google::protobuf::int64 value);
  
  // @@protoc_insertion_point(class_scope:pbf.Event.Channel.Data)
 private:
  inline void set_has_payload();
  inline void clear_has_payload();
  inline void set_has_time();
  inline void clear_has_time();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* payload_;
  ::google::protobuf::int64 time_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_protocDef_2eproto();
  friend void protobuf_AssignDesc_protocDef_2eproto();
  friend void protobuf_ShutdownFile_protocDef_2eproto();
  
  void InitAsDefaultInstance();
  static Event_Channel_Data* default_instance_;
};
// -------------------------------------------------------------------

class Event_Channel : public ::google::protobuf::Message {
 public:
  Event_Channel();
  virtual ~Event_Channel();
  
  Event_Channel(const Event_Channel& from);
  
  inline Event_Channel& operator=(const Event_Channel& from) {
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
  static const Event_Channel& default_instance();
  
  void Swap(Event_Channel* other);
  
  // implements Message ----------------------------------------------
  
  Event_Channel* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Event_Channel& from);
  void MergeFrom(const Event_Channel& from);
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
  
  typedef Event_Channel_Data Data;
  
  // accessors -------------------------------------------------------
  
  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);
  
  // optional int32 module = 3;
  inline bool has_module() const;
  inline void clear_module();
  static const int kModuleFieldNumber = 3;
  inline ::google::protobuf::int32 module() const;
  inline void set_module(::google::protobuf::int32 value);
  
  // repeated .pbf.Event.Channel.Data data = 2;
  inline int data_size() const;
  inline void clear_data();
  static const int kDataFieldNumber = 2;
  inline const ::pbf::Event_Channel_Data& data(int index) const;
  inline ::pbf::Event_Channel_Data* mutable_data(int index);
  inline ::pbf::Event_Channel_Data* add_data();
  inline const ::google::protobuf::RepeatedPtrField< ::pbf::Event_Channel_Data >&
      data() const;
  inline ::google::protobuf::RepeatedPtrField< ::pbf::Event_Channel_Data >*
      mutable_data();
  
  // @@protoc_insertion_point(class_scope:pbf.Event.Channel)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_module();
  inline void clear_has_module();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 module_;
  ::google::protobuf::RepeatedPtrField< ::pbf::Event_Channel_Data > data_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_protocDef_2eproto();
  friend void protobuf_AssignDesc_protocDef_2eproto();
  friend void protobuf_ShutdownFile_protocDef_2eproto();
  
  void InitAsDefaultInstance();
  static Event_Channel* default_instance_;
};
// -------------------------------------------------------------------

class Event : public ::google::protobuf::Message {
 public:
  Event();
  virtual ~Event();
  
  Event(const Event& from);
  
  inline Event& operator=(const Event& from) {
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
  static const Event& default_instance();
  
  void Swap(Event* other);
  
  // implements Message ----------------------------------------------
  
  Event* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Event& from);
  void MergeFrom(const Event& from);
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
  
  typedef Event_Channel Channel;
  
  // accessors -------------------------------------------------------
  
  // required int64 number = 1;
  inline bool has_number() const;
  inline void clear_number();
  static const int kNumberFieldNumber = 1;
  inline ::google::protobuf::int64 number() const;
  inline void set_number(::google::protobuf::int64 value);
  
  // required uint64 time = 2;
  inline bool has_time() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 2;
  inline ::google::protobuf::uint64 time() const;
  inline void set_time(::google::protobuf::uint64 value);
  
  // repeated .pbf.Event.Channel channel = 3;
  inline int channel_size() const;
  inline void clear_channel();
  static const int kChannelFieldNumber = 3;
  inline const ::pbf::Event_Channel& channel(int index) const;
  inline ::pbf::Event_Channel* mutable_channel(int index);
  inline ::pbf::Event_Channel* add_channel();
  inline const ::google::protobuf::RepeatedPtrField< ::pbf::Event_Channel >&
      channel() const;
  inline ::google::protobuf::RepeatedPtrField< ::pbf::Event_Channel >*
      mutable_channel();
  
  // @@protoc_insertion_point(class_scope:pbf.Event)
 private:
  inline void set_has_number();
  inline void clear_has_number();
  inline void set_has_time();
  inline void clear_has_time();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int64 number_;
  ::google::protobuf::uint64 time_;
  ::google::protobuf::RepeatedPtrField< ::pbf::Event_Channel > channel_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_protocDef_2eproto();
  friend void protobuf_AssignDesc_protocDef_2eproto();
  friend void protobuf_ShutdownFile_protocDef_2eproto();
  
  void InitAsDefaultInstance();
  static Event* default_instance_;
};
// -------------------------------------------------------------------

class Header : public ::google::protobuf::Message {
 public:
  Header();
  virtual ~Header();
  
  Header(const Header& from);
  
  inline Header& operator=(const Header& from) {
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
  static const Header& default_instance();
  
  void Swap(Header* other);
  
  // implements Message ----------------------------------------------
  
  Header* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Header& from);
  void MergeFrom(const Header& from);
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
  
  // required bool zipped = 1;
  inline bool has_zipped() const;
  inline void clear_zipped();
  static const int kZippedFieldNumber = 1;
  inline bool zipped() const;
  inline void set_zipped(bool value);
  
  // required int64 startdate = 2;
  inline bool has_startdate() const;
  inline void clear_startdate();
  static const int kStartdateFieldNumber = 2;
  inline ::google::protobuf::int64 startdate() const;
  inline void set_startdate(::google::protobuf::int64 value);
  
  // required int64 creationdate = 3;
  inline bool has_creationdate() const;
  inline void clear_creationdate();
  static const int kCreationdateFieldNumber = 3;
  inline ::google::protobuf::int64 creationdate() const;
  inline void set_creationdate(::google::protobuf::int64 value);
  
  // required string runidentifier = 4;
  inline bool has_runidentifier() const;
  inline void clear_runidentifier();
  static const int kRunidentifierFieldNumber = 4;
  inline const ::std::string& runidentifier() const;
  inline void set_runidentifier(const ::std::string& value);
  inline void set_runidentifier(const char* value);
  inline void set_runidentifier(const char* value, size_t size);
  inline ::std::string* mutable_runidentifier();
  inline ::std::string* release_runidentifier();
  
  // required int32 filenumber = 5;
  inline bool has_filenumber() const;
  inline void clear_filenumber();
  static const int kFilenumberFieldNumber = 5;
  inline ::google::protobuf::int32 filenumber() const;
  inline void set_filenumber(::google::protobuf::int32 value);
  
  // optional string runmode = 6;
  inline bool has_runmode() const;
  inline void clear_runmode();
  static const int kRunmodeFieldNumber = 6;
  inline const ::std::string& runmode() const;
  inline void set_runmode(const ::std::string& value);
  inline void set_runmode(const char* value);
  inline void set_runmode(const char* value, size_t size);
  inline ::std::string* mutable_runmode();
  inline ::std::string* release_runmode();
  
  // optional string startedby = 7;
  inline bool has_startedby() const;
  inline void clear_startedby();
  static const int kStartedbyFieldNumber = 7;
  inline const ::std::string& startedby() const;
  inline void set_startedby(const ::std::string& value);
  inline void set_startedby(const char* value);
  inline void set_startedby(const char* value, size_t size);
  inline ::std::string* mutable_startedby();
  inline ::std::string* release_startedby();
  
  // optional string notes = 8;
  inline bool has_notes() const;
  inline void clear_notes();
  static const int kNotesFieldNumber = 8;
  inline const ::std::string& notes() const;
  inline void set_notes(const ::std::string& value);
  inline void set_notes(const char* value);
  inline void set_notes(const char* value, size_t size);
  inline ::std::string* mutable_notes();
  inline ::std::string* release_notes();
  
  // @@protoc_insertion_point(class_scope:pbf.Header)
 private:
  inline void set_has_zipped();
  inline void clear_has_zipped();
  inline void set_has_startdate();
  inline void clear_has_startdate();
  inline void set_has_creationdate();
  inline void clear_has_creationdate();
  inline void set_has_runidentifier();
  inline void clear_has_runidentifier();
  inline void set_has_filenumber();
  inline void clear_has_filenumber();
  inline void set_has_runmode();
  inline void clear_has_runmode();
  inline void set_has_startedby();
  inline void clear_has_startedby();
  inline void set_has_notes();
  inline void clear_has_notes();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int64 startdate_;
  ::google::protobuf::int64 creationdate_;
  bool zipped_;
  ::google::protobuf::int32 filenumber_;
  ::std::string* runidentifier_;
  ::std::string* runmode_;
  ::std::string* startedby_;
  ::std::string* notes_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];
  
  friend void  protobuf_AddDesc_protocDef_2eproto();
  friend void protobuf_AssignDesc_protocDef_2eproto();
  friend void protobuf_ShutdownFile_protocDef_2eproto();
  
  void InitAsDefaultInstance();
  static Header* default_instance_;
};
// ===================================================================


// ===================================================================

// Event_Channel_Data

// required bytes payload = 1;
inline bool Event_Channel_Data::has_payload() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Event_Channel_Data::set_has_payload() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Event_Channel_Data::clear_has_payload() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Event_Channel_Data::clear_payload() {
  if (payload_ != &::google::protobuf::internal::kEmptyString) {
    payload_->clear();
  }
  clear_has_payload();
}
inline const ::std::string& Event_Channel_Data::payload() const {
  return *payload_;
}
inline void Event_Channel_Data::set_payload(const ::std::string& value) {
  set_has_payload();
  if (payload_ == &::google::protobuf::internal::kEmptyString) {
    payload_ = new ::std::string;
  }
  payload_->assign(value);
}
inline void Event_Channel_Data::set_payload(const char* value) {
  set_has_payload();
  if (payload_ == &::google::protobuf::internal::kEmptyString) {
    payload_ = new ::std::string;
  }
  payload_->assign(value);
}
inline void Event_Channel_Data::set_payload(const void* value, size_t size) {
  set_has_payload();
  if (payload_ == &::google::protobuf::internal::kEmptyString) {
    payload_ = new ::std::string;
  }
  payload_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Event_Channel_Data::mutable_payload() {
  set_has_payload();
  if (payload_ == &::google::protobuf::internal::kEmptyString) {
    payload_ = new ::std::string;
  }
  return payload_;
}
inline ::std::string* Event_Channel_Data::release_payload() {
  clear_has_payload();
  if (payload_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = payload_;
    payload_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional int64 time = 2;
inline bool Event_Channel_Data::has_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Event_Channel_Data::set_has_time() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Event_Channel_Data::clear_has_time() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Event_Channel_Data::clear_time() {
  time_ = GOOGLE_LONGLONG(0);
  clear_has_time();
}
inline ::google::protobuf::int64 Event_Channel_Data::time() const {
  return time_;
}
inline void Event_Channel_Data::set_time(::google::protobuf::int64 value) {
  set_has_time();
  time_ = value;
}

// -------------------------------------------------------------------

// Event_Channel

// required int32 id = 1;
inline bool Event_Channel::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Event_Channel::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Event_Channel::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Event_Channel::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Event_Channel::id() const {
  return id_;
}
inline void Event_Channel::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 module = 3;
inline bool Event_Channel::has_module() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Event_Channel::set_has_module() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Event_Channel::clear_has_module() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Event_Channel::clear_module() {
  module_ = 0;
  clear_has_module();
}
inline ::google::protobuf::int32 Event_Channel::module() const {
  return module_;
}
inline void Event_Channel::set_module(::google::protobuf::int32 value) {
  set_has_module();
  module_ = value;
}

// repeated .pbf.Event.Channel.Data data = 2;
inline int Event_Channel::data_size() const {
  return data_.size();
}
inline void Event_Channel::clear_data() {
  data_.Clear();
}
inline const ::pbf::Event_Channel_Data& Event_Channel::data(int index) const {
  return data_.Get(index);
}
inline ::pbf::Event_Channel_Data* Event_Channel::mutable_data(int index) {
  return data_.Mutable(index);
}
inline ::pbf::Event_Channel_Data* Event_Channel::add_data() {
  return data_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::pbf::Event_Channel_Data >&
Event_Channel::data() const {
  return data_;
}
inline ::google::protobuf::RepeatedPtrField< ::pbf::Event_Channel_Data >*
Event_Channel::mutable_data() {
  return &data_;
}

// -------------------------------------------------------------------

// Event

// required int64 number = 1;
inline bool Event::has_number() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Event::set_has_number() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Event::clear_has_number() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Event::clear_number() {
  number_ = GOOGLE_LONGLONG(0);
  clear_has_number();
}
inline ::google::protobuf::int64 Event::number() const {
  return number_;
}
inline void Event::set_number(::google::protobuf::int64 value) {
  set_has_number();
  number_ = value;
}

// required uint64 time = 2;
inline bool Event::has_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Event::set_has_time() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Event::clear_has_time() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Event::clear_time() {
  time_ = GOOGLE_ULONGLONG(0);
  clear_has_time();
}
inline ::google::protobuf::uint64 Event::time() const {
  return time_;
}
inline void Event::set_time(::google::protobuf::uint64 value) {
  set_has_time();
  time_ = value;
}

// repeated .pbf.Event.Channel channel = 3;
inline int Event::channel_size() const {
  return channel_.size();
}
inline void Event::clear_channel() {
  channel_.Clear();
}
inline const ::pbf::Event_Channel& Event::channel(int index) const {
  return channel_.Get(index);
}
inline ::pbf::Event_Channel* Event::mutable_channel(int index) {
  return channel_.Mutable(index);
}
inline ::pbf::Event_Channel* Event::add_channel() {
  return channel_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::pbf::Event_Channel >&
Event::channel() const {
  return channel_;
}
inline ::google::protobuf::RepeatedPtrField< ::pbf::Event_Channel >*
Event::mutable_channel() {
  return &channel_;
}

// -------------------------------------------------------------------

// Header

// required bool zipped = 1;
inline bool Header::has_zipped() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Header::set_has_zipped() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Header::clear_has_zipped() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Header::clear_zipped() {
  zipped_ = false;
  clear_has_zipped();
}
inline bool Header::zipped() const {
  return zipped_;
}
inline void Header::set_zipped(bool value) {
  set_has_zipped();
  zipped_ = value;
}

// required int64 startdate = 2;
inline bool Header::has_startdate() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Header::set_has_startdate() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Header::clear_has_startdate() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Header::clear_startdate() {
  startdate_ = GOOGLE_LONGLONG(0);
  clear_has_startdate();
}
inline ::google::protobuf::int64 Header::startdate() const {
  return startdate_;
}
inline void Header::set_startdate(::google::protobuf::int64 value) {
  set_has_startdate();
  startdate_ = value;
}

// required int64 creationdate = 3;
inline bool Header::has_creationdate() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Header::set_has_creationdate() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Header::clear_has_creationdate() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Header::clear_creationdate() {
  creationdate_ = GOOGLE_LONGLONG(0);
  clear_has_creationdate();
}
inline ::google::protobuf::int64 Header::creationdate() const {
  return creationdate_;
}
inline void Header::set_creationdate(::google::protobuf::int64 value) {
  set_has_creationdate();
  creationdate_ = value;
}

// required string runidentifier = 4;
inline bool Header::has_runidentifier() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Header::set_has_runidentifier() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Header::clear_has_runidentifier() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Header::clear_runidentifier() {
  if (runidentifier_ != &::google::protobuf::internal::kEmptyString) {
    runidentifier_->clear();
  }
  clear_has_runidentifier();
}
inline const ::std::string& Header::runidentifier() const {
  return *runidentifier_;
}
inline void Header::set_runidentifier(const ::std::string& value) {
  set_has_runidentifier();
  if (runidentifier_ == &::google::protobuf::internal::kEmptyString) {
    runidentifier_ = new ::std::string;
  }
  runidentifier_->assign(value);
}
inline void Header::set_runidentifier(const char* value) {
  set_has_runidentifier();
  if (runidentifier_ == &::google::protobuf::internal::kEmptyString) {
    runidentifier_ = new ::std::string;
  }
  runidentifier_->assign(value);
}
inline void Header::set_runidentifier(const char* value, size_t size) {
  set_has_runidentifier();
  if (runidentifier_ == &::google::protobuf::internal::kEmptyString) {
    runidentifier_ = new ::std::string;
  }
  runidentifier_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Header::mutable_runidentifier() {
  set_has_runidentifier();
  if (runidentifier_ == &::google::protobuf::internal::kEmptyString) {
    runidentifier_ = new ::std::string;
  }
  return runidentifier_;
}
inline ::std::string* Header::release_runidentifier() {
  clear_has_runidentifier();
  if (runidentifier_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = runidentifier_;
    runidentifier_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required int32 filenumber = 5;
inline bool Header::has_filenumber() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Header::set_has_filenumber() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Header::clear_has_filenumber() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Header::clear_filenumber() {
  filenumber_ = 0;
  clear_has_filenumber();
}
inline ::google::protobuf::int32 Header::filenumber() const {
  return filenumber_;
}
inline void Header::set_filenumber(::google::protobuf::int32 value) {
  set_has_filenumber();
  filenumber_ = value;
}

// optional string runmode = 6;
inline bool Header::has_runmode() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Header::set_has_runmode() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Header::clear_has_runmode() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Header::clear_runmode() {
  if (runmode_ != &::google::protobuf::internal::kEmptyString) {
    runmode_->clear();
  }
  clear_has_runmode();
}
inline const ::std::string& Header::runmode() const {
  return *runmode_;
}
inline void Header::set_runmode(const ::std::string& value) {
  set_has_runmode();
  if (runmode_ == &::google::protobuf::internal::kEmptyString) {
    runmode_ = new ::std::string;
  }
  runmode_->assign(value);
}
inline void Header::set_runmode(const char* value) {
  set_has_runmode();
  if (runmode_ == &::google::protobuf::internal::kEmptyString) {
    runmode_ = new ::std::string;
  }
  runmode_->assign(value);
}
inline void Header::set_runmode(const char* value, size_t size) {
  set_has_runmode();
  if (runmode_ == &::google::protobuf::internal::kEmptyString) {
    runmode_ = new ::std::string;
  }
  runmode_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Header::mutable_runmode() {
  set_has_runmode();
  if (runmode_ == &::google::protobuf::internal::kEmptyString) {
    runmode_ = new ::std::string;
  }
  return runmode_;
}
inline ::std::string* Header::release_runmode() {
  clear_has_runmode();
  if (runmode_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = runmode_;
    runmode_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string startedby = 7;
inline bool Header::has_startedby() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Header::set_has_startedby() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Header::clear_has_startedby() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Header::clear_startedby() {
  if (startedby_ != &::google::protobuf::internal::kEmptyString) {
    startedby_->clear();
  }
  clear_has_startedby();
}
inline const ::std::string& Header::startedby() const {
  return *startedby_;
}
inline void Header::set_startedby(const ::std::string& value) {
  set_has_startedby();
  if (startedby_ == &::google::protobuf::internal::kEmptyString) {
    startedby_ = new ::std::string;
  }
  startedby_->assign(value);
}
inline void Header::set_startedby(const char* value) {
  set_has_startedby();
  if (startedby_ == &::google::protobuf::internal::kEmptyString) {
    startedby_ = new ::std::string;
  }
  startedby_->assign(value);
}
inline void Header::set_startedby(const char* value, size_t size) {
  set_has_startedby();
  if (startedby_ == &::google::protobuf::internal::kEmptyString) {
    startedby_ = new ::std::string;
  }
  startedby_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Header::mutable_startedby() {
  set_has_startedby();
  if (startedby_ == &::google::protobuf::internal::kEmptyString) {
    startedby_ = new ::std::string;
  }
  return startedby_;
}
inline ::std::string* Header::release_startedby() {
  clear_has_startedby();
  if (startedby_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = startedby_;
    startedby_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string notes = 8;
inline bool Header::has_notes() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Header::set_has_notes() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Header::clear_has_notes() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Header::clear_notes() {
  if (notes_ != &::google::protobuf::internal::kEmptyString) {
    notes_->clear();
  }
  clear_has_notes();
}
inline const ::std::string& Header::notes() const {
  return *notes_;
}
inline void Header::set_notes(const ::std::string& value) {
  set_has_notes();
  if (notes_ == &::google::protobuf::internal::kEmptyString) {
    notes_ = new ::std::string;
  }
  notes_->assign(value);
}
inline void Header::set_notes(const char* value) {
  set_has_notes();
  if (notes_ == &::google::protobuf::internal::kEmptyString) {
    notes_ = new ::std::string;
  }
  notes_->assign(value);
}
inline void Header::set_notes(const char* value, size_t size) {
  set_has_notes();
  if (notes_ == &::google::protobuf::internal::kEmptyString) {
    notes_ = new ::std::string;
  }
  notes_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Header::mutable_notes() {
  set_has_notes();
  if (notes_ == &::google::protobuf::internal::kEmptyString) {
    notes_ = new ::std::string;
  }
  return notes_;
}
inline ::std::string* Header::release_notes() {
  clear_has_notes();
  if (notes_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = notes_;
    notes_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace pbf

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_protocDef_2eproto__INCLUDED
