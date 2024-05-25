// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:msg/BinParts.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/msg/detail/bin_parts__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/msg/detail/bin_parts__functions.h"
#include "ariac_msgs/msg/detail/bin_parts__struct.h"


// Include directives for member types
// Member `bins`
#include "ariac_msgs/msg/bin_info.h"
// Member `bins`
#include "ariac_msgs/msg/detail/bin_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__BinParts_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__msg__BinParts__init(message_memory);
}

void ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__BinParts_fini_function(void * message_memory)
{
  ariac_msgs__msg__BinParts__fini(message_memory);
}

size_t ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__size_function__BinParts__bins(
  const void * untyped_member)
{
  const ariac_msgs__msg__BinInfo__Sequence * member =
    (const ariac_msgs__msg__BinInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__get_const_function__BinParts__bins(
  const void * untyped_member, size_t index)
{
  const ariac_msgs__msg__BinInfo__Sequence * member =
    (const ariac_msgs__msg__BinInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__get_function__BinParts__bins(
  void * untyped_member, size_t index)
{
  ariac_msgs__msg__BinInfo__Sequence * member =
    (ariac_msgs__msg__BinInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__fetch_function__BinParts__bins(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ariac_msgs__msg__BinInfo * item =
    ((const ariac_msgs__msg__BinInfo *)
    ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__get_const_function__BinParts__bins(untyped_member, index));
  ariac_msgs__msg__BinInfo * value =
    (ariac_msgs__msg__BinInfo *)(untyped_value);
  *value = *item;
}

void ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__assign_function__BinParts__bins(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ariac_msgs__msg__BinInfo * item =
    ((ariac_msgs__msg__BinInfo *)
    ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__get_function__BinParts__bins(untyped_member, index));
  const ariac_msgs__msg__BinInfo * value =
    (const ariac_msgs__msg__BinInfo *)(untyped_value);
  *item = *value;
}

bool ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__resize_function__BinParts__bins(
  void * untyped_member, size_t size)
{
  ariac_msgs__msg__BinInfo__Sequence * member =
    (ariac_msgs__msg__BinInfo__Sequence *)(untyped_member);
  ariac_msgs__msg__BinInfo__Sequence__fini(member);
  return ariac_msgs__msg__BinInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__BinParts_message_member_array[1] = {
  {
    "bins",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__BinParts, bins),  // bytes offset in struct
    NULL,  // default value
    ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__size_function__BinParts__bins,  // size() function pointer
    ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__get_const_function__BinParts__bins,  // get_const(index) function pointer
    ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__get_function__BinParts__bins,  // get(index) function pointer
    ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__fetch_function__BinParts__bins,  // fetch(index, &value) function pointer
    ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__assign_function__BinParts__bins,  // assign(index, value) function pointer
    ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__resize_function__BinParts__bins  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__BinParts_message_members = {
  "ariac_msgs__msg",  // message namespace
  "BinParts",  // message name
  1,  // number of fields
  sizeof(ariac_msgs__msg__BinParts),
  ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__BinParts_message_member_array,  // message members
  ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__BinParts_init_function,  // function to initialize message memory (memory has to be allocated)
  ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__BinParts_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__BinParts_message_type_support_handle = {
  0,
  &ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__BinParts_message_members,
  get_message_typesupport_handle_function,
  &ariac_msgs__msg__BinParts__get_type_hash,
  &ariac_msgs__msg__BinParts__get_type_description,
  &ariac_msgs__msg__BinParts__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, BinParts)() {
  ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__BinParts_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, BinInfo)();
  if (!ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__BinParts_message_type_support_handle.typesupport_identifier) {
    ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__BinParts_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ariac_msgs__msg__BinParts__rosidl_typesupport_introspection_c__BinParts_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
