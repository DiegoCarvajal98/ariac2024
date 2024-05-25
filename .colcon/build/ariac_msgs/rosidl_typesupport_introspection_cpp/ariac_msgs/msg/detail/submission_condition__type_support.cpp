// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ariac_msgs:msg/SubmissionCondition.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ariac_msgs/msg/detail/submission_condition__functions.h"
#include "ariac_msgs/msg/detail/submission_condition__struct.hpp"
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

void SubmissionCondition_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ariac_msgs::msg::SubmissionCondition(_init);
}

void SubmissionCondition_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ariac_msgs::msg::SubmissionCondition *>(message_memory);
  typed_message->~SubmissionCondition();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SubmissionCondition_message_member_array[1] = {
  {
    "order_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::msg::SubmissionCondition, order_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SubmissionCondition_message_members = {
  "ariac_msgs::msg",  // message namespace
  "SubmissionCondition",  // message name
  1,  // number of fields
  sizeof(ariac_msgs::msg::SubmissionCondition),
  SubmissionCondition_message_member_array,  // message members
  SubmissionCondition_init_function,  // function to initialize message memory (memory has to be allocated)
  SubmissionCondition_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SubmissionCondition_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SubmissionCondition_message_members,
  get_message_typesupport_handle_function,
  &ariac_msgs__msg__SubmissionCondition__get_type_hash,
  &ariac_msgs__msg__SubmissionCondition__get_type_description,
  &ariac_msgs__msg__SubmissionCondition__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ariac_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ariac_msgs::msg::SubmissionCondition>()
{
  return &::ariac_msgs::msg::rosidl_typesupport_introspection_cpp::SubmissionCondition_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, msg, SubmissionCondition)() {
  return &::ariac_msgs::msg::rosidl_typesupport_introspection_cpp::SubmissionCondition_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif