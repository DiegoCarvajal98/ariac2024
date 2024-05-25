// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:msg/Trial.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/msg/detail/trial__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/msg/detail/trial__functions.h"
#include "ariac_msgs/msg/detail/trial__struct.h"


// Include directives for member types
// Member `trial_name`
// Member `log_folder_path`
#include "rosidl_runtime_c/string_functions.h"
// Member `orders`
#include "ariac_msgs/msg/order.h"
// Member `orders`
#include "ariac_msgs/msg/detail/order__rosidl_typesupport_introspection_c.h"
// Member `order_conditions`
#include "ariac_msgs/msg/order_condition.h"
// Member `order_conditions`
#include "ariac_msgs/msg/detail/order_condition__rosidl_typesupport_introspection_c.h"
// Member `challenges`
#include "ariac_msgs/msg/challenge.h"
// Member `challenges`
#include "ariac_msgs/msg/detail/challenge__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__Trial_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__msg__Trial__init(message_memory);
}

void ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__Trial_fini_function(void * message_memory)
{
  ariac_msgs__msg__Trial__fini(message_memory);
}

size_t ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__size_function__Trial__orders(
  const void * untyped_member)
{
  const ariac_msgs__msg__Order__Sequence * member =
    (const ariac_msgs__msg__Order__Sequence *)(untyped_member);
  return member->size;
}

const void * ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__get_const_function__Trial__orders(
  const void * untyped_member, size_t index)
{
  const ariac_msgs__msg__Order__Sequence * member =
    (const ariac_msgs__msg__Order__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__get_function__Trial__orders(
  void * untyped_member, size_t index)
{
  ariac_msgs__msg__Order__Sequence * member =
    (ariac_msgs__msg__Order__Sequence *)(untyped_member);
  return &member->data[index];
}

void ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__fetch_function__Trial__orders(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ariac_msgs__msg__Order * item =
    ((const ariac_msgs__msg__Order *)
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__get_const_function__Trial__orders(untyped_member, index));
  ariac_msgs__msg__Order * value =
    (ariac_msgs__msg__Order *)(untyped_value);
  *value = *item;
}

void ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__assign_function__Trial__orders(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ariac_msgs__msg__Order * item =
    ((ariac_msgs__msg__Order *)
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__get_function__Trial__orders(untyped_member, index));
  const ariac_msgs__msg__Order * value =
    (const ariac_msgs__msg__Order *)(untyped_value);
  *item = *value;
}

bool ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__resize_function__Trial__orders(
  void * untyped_member, size_t size)
{
  ariac_msgs__msg__Order__Sequence * member =
    (ariac_msgs__msg__Order__Sequence *)(untyped_member);
  ariac_msgs__msg__Order__Sequence__fini(member);
  return ariac_msgs__msg__Order__Sequence__init(member, size);
}

size_t ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__size_function__Trial__order_conditions(
  const void * untyped_member)
{
  const ariac_msgs__msg__OrderCondition__Sequence * member =
    (const ariac_msgs__msg__OrderCondition__Sequence *)(untyped_member);
  return member->size;
}

const void * ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__get_const_function__Trial__order_conditions(
  const void * untyped_member, size_t index)
{
  const ariac_msgs__msg__OrderCondition__Sequence * member =
    (const ariac_msgs__msg__OrderCondition__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__get_function__Trial__order_conditions(
  void * untyped_member, size_t index)
{
  ariac_msgs__msg__OrderCondition__Sequence * member =
    (ariac_msgs__msg__OrderCondition__Sequence *)(untyped_member);
  return &member->data[index];
}

void ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__fetch_function__Trial__order_conditions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ariac_msgs__msg__OrderCondition * item =
    ((const ariac_msgs__msg__OrderCondition *)
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__get_const_function__Trial__order_conditions(untyped_member, index));
  ariac_msgs__msg__OrderCondition * value =
    (ariac_msgs__msg__OrderCondition *)(untyped_value);
  *value = *item;
}

void ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__assign_function__Trial__order_conditions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ariac_msgs__msg__OrderCondition * item =
    ((ariac_msgs__msg__OrderCondition *)
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__get_function__Trial__order_conditions(untyped_member, index));
  const ariac_msgs__msg__OrderCondition * value =
    (const ariac_msgs__msg__OrderCondition *)(untyped_value);
  *item = *value;
}

bool ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__resize_function__Trial__order_conditions(
  void * untyped_member, size_t size)
{
  ariac_msgs__msg__OrderCondition__Sequence * member =
    (ariac_msgs__msg__OrderCondition__Sequence *)(untyped_member);
  ariac_msgs__msg__OrderCondition__Sequence__fini(member);
  return ariac_msgs__msg__OrderCondition__Sequence__init(member, size);
}

size_t ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__size_function__Trial__challenges(
  const void * untyped_member)
{
  const ariac_msgs__msg__Challenge__Sequence * member =
    (const ariac_msgs__msg__Challenge__Sequence *)(untyped_member);
  return member->size;
}

const void * ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__get_const_function__Trial__challenges(
  const void * untyped_member, size_t index)
{
  const ariac_msgs__msg__Challenge__Sequence * member =
    (const ariac_msgs__msg__Challenge__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__get_function__Trial__challenges(
  void * untyped_member, size_t index)
{
  ariac_msgs__msg__Challenge__Sequence * member =
    (ariac_msgs__msg__Challenge__Sequence *)(untyped_member);
  return &member->data[index];
}

void ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__fetch_function__Trial__challenges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ariac_msgs__msg__Challenge * item =
    ((const ariac_msgs__msg__Challenge *)
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__get_const_function__Trial__challenges(untyped_member, index));
  ariac_msgs__msg__Challenge * value =
    (ariac_msgs__msg__Challenge *)(untyped_value);
  *value = *item;
}

void ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__assign_function__Trial__challenges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ariac_msgs__msg__Challenge * item =
    ((ariac_msgs__msg__Challenge *)
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__get_function__Trial__challenges(untyped_member, index));
  const ariac_msgs__msg__Challenge * value =
    (const ariac_msgs__msg__Challenge *)(untyped_value);
  *item = *value;
}

bool ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__resize_function__Trial__challenges(
  void * untyped_member, size_t size)
{
  ariac_msgs__msg__Challenge__Sequence * member =
    (ariac_msgs__msg__Challenge__Sequence *)(untyped_member);
  ariac_msgs__msg__Challenge__Sequence__fini(member);
  return ariac_msgs__msg__Challenge__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__Trial_message_member_array[6] = {
  {
    "time_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__Trial, time_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trial_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__Trial, trial_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "log_folder_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__Trial, log_folder_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orders",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__Trial, orders),  // bytes offset in struct
    NULL,  // default value
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__size_function__Trial__orders,  // size() function pointer
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__get_const_function__Trial__orders,  // get_const(index) function pointer
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__get_function__Trial__orders,  // get(index) function pointer
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__fetch_function__Trial__orders,  // fetch(index, &value) function pointer
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__assign_function__Trial__orders,  // assign(index, value) function pointer
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__resize_function__Trial__orders  // resize(index) function pointer
  },
  {
    "order_conditions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__Trial, order_conditions),  // bytes offset in struct
    NULL,  // default value
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__size_function__Trial__order_conditions,  // size() function pointer
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__get_const_function__Trial__order_conditions,  // get_const(index) function pointer
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__get_function__Trial__order_conditions,  // get(index) function pointer
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__fetch_function__Trial__order_conditions,  // fetch(index, &value) function pointer
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__assign_function__Trial__order_conditions,  // assign(index, value) function pointer
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__resize_function__Trial__order_conditions  // resize(index) function pointer
  },
  {
    "challenges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__Trial, challenges),  // bytes offset in struct
    NULL,  // default value
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__size_function__Trial__challenges,  // size() function pointer
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__get_const_function__Trial__challenges,  // get_const(index) function pointer
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__get_function__Trial__challenges,  // get(index) function pointer
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__fetch_function__Trial__challenges,  // fetch(index, &value) function pointer
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__assign_function__Trial__challenges,  // assign(index, value) function pointer
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__resize_function__Trial__challenges  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__Trial_message_members = {
  "ariac_msgs__msg",  // message namespace
  "Trial",  // message name
  6,  // number of fields
  sizeof(ariac_msgs__msg__Trial),
  ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__Trial_message_member_array,  // message members
  ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__Trial_init_function,  // function to initialize message memory (memory has to be allocated)
  ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__Trial_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__Trial_message_type_support_handle = {
  0,
  &ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__Trial_message_members,
  get_message_typesupport_handle_function,
  &ariac_msgs__msg__Trial__get_type_hash,
  &ariac_msgs__msg__Trial__get_type_description,
  &ariac_msgs__msg__Trial__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, Trial)() {
  ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__Trial_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, Order)();
  ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__Trial_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, OrderCondition)();
  ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__Trial_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, Challenge)();
  if (!ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__Trial_message_type_support_handle.typesupport_identifier) {
    ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__Trial_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ariac_msgs__msg__Trial__rosidl_typesupport_introspection_c__Trial_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
