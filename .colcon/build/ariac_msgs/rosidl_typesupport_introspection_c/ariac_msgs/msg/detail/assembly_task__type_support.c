// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:msg/AssemblyTask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/msg/detail/assembly_task__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/msg/detail/assembly_task__functions.h"
#include "ariac_msgs/msg/detail/assembly_task__struct.h"


// Include directives for member types
// Member `agv_numbers`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `parts`
#include "ariac_msgs/msg/assembly_part.h"
// Member `parts`
#include "ariac_msgs/msg/detail/assembly_part__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__msg__AssemblyTask__init(message_memory);
}

void ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_fini_function(void * message_memory)
{
  ariac_msgs__msg__AssemblyTask__fini(message_memory);
}

size_t ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__size_function__AssemblyTask__agv_numbers(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__get_const_function__AssemblyTask__agv_numbers(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__get_function__AssemblyTask__agv_numbers(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__fetch_function__AssemblyTask__agv_numbers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__get_const_function__AssemblyTask__agv_numbers(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__assign_function__AssemblyTask__agv_numbers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__get_function__AssemblyTask__agv_numbers(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__resize_function__AssemblyTask__agv_numbers(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__size_function__AssemblyTask__parts(
  const void * untyped_member)
{
  const ariac_msgs__msg__AssemblyPart__Sequence * member =
    (const ariac_msgs__msg__AssemblyPart__Sequence *)(untyped_member);
  return member->size;
}

const void * ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__get_const_function__AssemblyTask__parts(
  const void * untyped_member, size_t index)
{
  const ariac_msgs__msg__AssemblyPart__Sequence * member =
    (const ariac_msgs__msg__AssemblyPart__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__get_function__AssemblyTask__parts(
  void * untyped_member, size_t index)
{
  ariac_msgs__msg__AssemblyPart__Sequence * member =
    (ariac_msgs__msg__AssemblyPart__Sequence *)(untyped_member);
  return &member->data[index];
}

void ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__fetch_function__AssemblyTask__parts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ariac_msgs__msg__AssemblyPart * item =
    ((const ariac_msgs__msg__AssemblyPart *)
    ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__get_const_function__AssemblyTask__parts(untyped_member, index));
  ariac_msgs__msg__AssemblyPart * value =
    (ariac_msgs__msg__AssemblyPart *)(untyped_value);
  *value = *item;
}

void ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__assign_function__AssemblyTask__parts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ariac_msgs__msg__AssemblyPart * item =
    ((ariac_msgs__msg__AssemblyPart *)
    ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__get_function__AssemblyTask__parts(untyped_member, index));
  const ariac_msgs__msg__AssemblyPart * value =
    (const ariac_msgs__msg__AssemblyPart *)(untyped_value);
  *item = *value;
}

bool ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__resize_function__AssemblyTask__parts(
  void * untyped_member, size_t size)
{
  ariac_msgs__msg__AssemblyPart__Sequence * member =
    (ariac_msgs__msg__AssemblyPart__Sequence *)(untyped_member);
  ariac_msgs__msg__AssemblyPart__Sequence__fini(member);
  return ariac_msgs__msg__AssemblyPart__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_message_member_array[3] = {
  {
    "agv_numbers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__AssemblyTask, agv_numbers),  // bytes offset in struct
    NULL,  // default value
    ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__size_function__AssemblyTask__agv_numbers,  // size() function pointer
    ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__get_const_function__AssemblyTask__agv_numbers,  // get_const(index) function pointer
    ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__get_function__AssemblyTask__agv_numbers,  // get(index) function pointer
    ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__fetch_function__AssemblyTask__agv_numbers,  // fetch(index, &value) function pointer
    ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__assign_function__AssemblyTask__agv_numbers,  // assign(index, value) function pointer
    ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__resize_function__AssemblyTask__agv_numbers  // resize(index) function pointer
  },
  {
    "station",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__AssemblyTask, station),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__AssemblyTask, parts),  // bytes offset in struct
    NULL,  // default value
    ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__size_function__AssemblyTask__parts,  // size() function pointer
    ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__get_const_function__AssemblyTask__parts,  // get_const(index) function pointer
    ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__get_function__AssemblyTask__parts,  // get(index) function pointer
    ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__fetch_function__AssemblyTask__parts,  // fetch(index, &value) function pointer
    ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__assign_function__AssemblyTask__parts,  // assign(index, value) function pointer
    ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__resize_function__AssemblyTask__parts  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_message_members = {
  "ariac_msgs__msg",  // message namespace
  "AssemblyTask",  // message name
  3,  // number of fields
  sizeof(ariac_msgs__msg__AssemblyTask),
  ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_message_member_array,  // message members
  ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_init_function,  // function to initialize message memory (memory has to be allocated)
  ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_message_type_support_handle = {
  0,
  &ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_message_members,
  get_message_typesupport_handle_function,
  &ariac_msgs__msg__AssemblyTask__get_type_hash,
  &ariac_msgs__msg__AssemblyTask__get_type_description,
  &ariac_msgs__msg__AssemblyTask__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, AssemblyTask)() {
  ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, AssemblyPart)();
  if (!ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_message_type_support_handle.typesupport_identifier) {
    ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ariac_msgs__msg__AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
