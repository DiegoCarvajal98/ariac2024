// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ariac_msgs:msg/RobotMalfunctionChallenge.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/robot_malfunction_challenge__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ariac_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ariac_msgs/msg/detail/robot_malfunction_challenge__struct.h"
#include "ariac_msgs/msg/detail/robot_malfunction_challenge__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "ariac_msgs/msg/detail/condition__functions.h"  // condition
#include "ariac_msgs/msg/detail/robots__functions.h"  // robots_to_disable

// forward declare type support functions
size_t get_serialized_size_ariac_msgs__msg__Condition(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ariac_msgs__msg__Condition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, Condition)();
size_t get_serialized_size_ariac_msgs__msg__Robots(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ariac_msgs__msg__Robots(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, Robots)();


using _RobotMalfunctionChallenge__ros_msg_type = ariac_msgs__msg__RobotMalfunctionChallenge;

static bool _RobotMalfunctionChallenge__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotMalfunctionChallenge__ros_msg_type * ros_message = static_cast<const _RobotMalfunctionChallenge__ros_msg_type *>(untyped_ros_message);
  // Field name: duration
  {
    cdr << ros_message->duration;
  }

  // Field name: condition
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, Condition
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->condition, cdr))
    {
      return false;
    }
  }

  // Field name: robots_to_disable
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, Robots
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->robots_to_disable, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RobotMalfunctionChallenge__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotMalfunctionChallenge__ros_msg_type * ros_message = static_cast<_RobotMalfunctionChallenge__ros_msg_type *>(untyped_ros_message);
  // Field name: duration
  {
    cdr >> ros_message->duration;
  }

  // Field name: condition
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, Condition
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->condition))
    {
      return false;
    }
  }

  // Field name: robots_to_disable
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, Robots
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->robots_to_disable))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t get_serialized_size_ariac_msgs__msg__RobotMalfunctionChallenge(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotMalfunctionChallenge__ros_msg_type * ros_message = static_cast<const _RobotMalfunctionChallenge__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name duration
  {
    size_t item_size = sizeof(ros_message->duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name condition

  current_alignment += get_serialized_size_ariac_msgs__msg__Condition(
    &(ros_message->condition), current_alignment);
  // field.name robots_to_disable

  current_alignment += get_serialized_size_ariac_msgs__msg__Robots(
    &(ros_message->robots_to_disable), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RobotMalfunctionChallenge__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ariac_msgs__msg__RobotMalfunctionChallenge(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t max_serialized_size_ariac_msgs__msg__RobotMalfunctionChallenge(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: duration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: condition
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ariac_msgs__msg__Condition(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: robots_to_disable
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ariac_msgs__msg__Robots(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ariac_msgs__msg__RobotMalfunctionChallenge;
    is_plain =
      (
      offsetof(DataType, robots_to_disable) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RobotMalfunctionChallenge__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ariac_msgs__msg__RobotMalfunctionChallenge(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotMalfunctionChallenge = {
  "ariac_msgs::msg",
  "RobotMalfunctionChallenge",
  _RobotMalfunctionChallenge__cdr_serialize,
  _RobotMalfunctionChallenge__cdr_deserialize,
  _RobotMalfunctionChallenge__get_serialized_size,
  _RobotMalfunctionChallenge__max_serialized_size
};

static rosidl_message_type_support_t _RobotMalfunctionChallenge__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotMalfunctionChallenge,
  get_message_typesupport_handle_function,
  &ariac_msgs__msg__RobotMalfunctionChallenge__get_type_hash,
  &ariac_msgs__msg__RobotMalfunctionChallenge__get_type_description,
  &ariac_msgs__msg__RobotMalfunctionChallenge__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, RobotMalfunctionChallenge)() {
  return &_RobotMalfunctionChallenge__type_support;
}

#if defined(__cplusplus)
}
#endif
