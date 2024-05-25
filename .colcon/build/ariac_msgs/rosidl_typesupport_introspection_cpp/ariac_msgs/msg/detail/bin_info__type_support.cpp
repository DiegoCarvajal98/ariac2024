// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ariac_msgs:msg/BinInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ariac_msgs/msg/detail/bin_info__functions.h"
#include "ariac_msgs/msg/detail/bin_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ariac_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void BinInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ariac_msgs::msg::BinInfo(_init);
}

void BinInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ariac_msgs::msg::BinInfo *>(message_memory);
  typed_message->~BinInfo();
}

size_t size_function__BinInfo__parts(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ariac_msgs::msg::PartLot> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BinInfo__parts(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ariac_msgs::msg::PartLot> *>(untyped_member);
  return &member[index];
}

void * get_function__BinInfo__parts(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ariac_msgs::msg::PartLot> *>(untyped_member);
  return &member[index];
}

void fetch_function__BinInfo__parts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ariac_msgs::msg::PartLot *>(
    get_const_function__BinInfo__parts(untyped_member, index));
  auto & value = *reinterpret_cast<ariac_msgs::msg::PartLot *>(untyped_value);
  value = item;
}

void assign_function__BinInfo__parts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ariac_msgs::msg::PartLot *>(
    get_function__BinInfo__parts(untyped_member, index));
  const auto & value = *reinterpret_cast<const ariac_msgs::msg::PartLot *>(untyped_value);
  item = value;
}

void resize_function__BinInfo__parts(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ariac_msgs::msg::PartLot> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BinInfo_message_member_array[2] = {
  {
    "bin_number",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::msg::BinInfo, bin_number),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "parts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::msg::PartLot>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::msg::BinInfo, parts),  // bytes offset in struct
    nullptr,  // default value
    size_function__BinInfo__parts,  // size() function pointer
    get_const_function__BinInfo__parts,  // get_const(index) function pointer
    get_function__BinInfo__parts,  // get(index) function pointer
    fetch_function__BinInfo__parts,  // fetch(index, &value) function pointer
    assign_function__BinInfo__parts,  // assign(index, value) function pointer
    resize_function__BinInfo__parts  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BinInfo_message_members = {
  "ariac_msgs::msg",  // message namespace
  "BinInfo",  // message name
  2,  // number of fields
  sizeof(ariac_msgs::msg::BinInfo),
  BinInfo_message_member_array,  // message members
  BinInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  BinInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BinInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BinInfo_message_members,
  get_message_typesupport_handle_function,
  &ariac_msgs__msg__BinInfo__get_type_hash,
  &ariac_msgs__msg__BinInfo__get_type_description,
  &ariac_msgs__msg__BinInfo__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ariac_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ariac_msgs::msg::BinInfo>()
{
  return &::ariac_msgs::msg::rosidl_typesupport_introspection_cpp::BinInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, msg, BinInfo)() {
  return &::ariac_msgs::msg::rosidl_typesupport_introspection_cpp::BinInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
