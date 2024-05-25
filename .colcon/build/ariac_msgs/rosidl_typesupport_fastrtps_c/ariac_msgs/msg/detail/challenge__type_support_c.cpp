// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ariac_msgs:msg/Challenge.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/challenge__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ariac_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ariac_msgs/msg/detail/challenge__struct.h"
#include "ariac_msgs/msg/detail/challenge__functions.h"
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

#include "ariac_msgs/msg/detail/dropped_part_challenge__functions.h"  // dropped_part_challenge
#include "ariac_msgs/msg/detail/faulty_part_challenge__functions.h"  // faulty_part_challenge
#include "ariac_msgs/msg/detail/robot_malfunction_challenge__functions.h"  // robot_malfunction_challenge
#include "ariac_msgs/msg/detail/sensor_blackout_challenge__functions.h"  // sensor_blackout_challenge

// forward declare type support functions
size_t get_serialized_size_ariac_msgs__msg__DroppedPartChallenge(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ariac_msgs__msg__DroppedPartChallenge(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, DroppedPartChallenge)();
size_t get_serialized_size_ariac_msgs__msg__FaultyPartChallenge(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ariac_msgs__msg__FaultyPartChallenge(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, FaultyPartChallenge)();
size_t get_serialized_size_ariac_msgs__msg__RobotMalfunctionChallenge(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ariac_msgs__msg__RobotMalfunctionChallenge(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, RobotMalfunctionChallenge)();
size_t get_serialized_size_ariac_msgs__msg__SensorBlackoutChallenge(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ariac_msgs__msg__SensorBlackoutChallenge(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, SensorBlackoutChallenge)();


using _Challenge__ros_msg_type = ariac_msgs__msg__Challenge;

static bool _Challenge__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Challenge__ros_msg_type * ros_message = static_cast<const _Challenge__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: faulty_part_challenge
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, FaultyPartChallenge
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->faulty_part_challenge, cdr))
    {
      return false;
    }
  }

  // Field name: dropped_part_challenge
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, DroppedPartChallenge
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->dropped_part_challenge, cdr))
    {
      return false;
    }
  }

  // Field name: sensor_blackout_challenge
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, SensorBlackoutChallenge
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->sensor_blackout_challenge, cdr))
    {
      return false;
    }
  }

  // Field name: robot_malfunction_challenge
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, RobotMalfunctionChallenge
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->robot_malfunction_challenge, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Challenge__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Challenge__ros_msg_type * ros_message = static_cast<_Challenge__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: faulty_part_challenge
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, FaultyPartChallenge
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->faulty_part_challenge))
    {
      return false;
    }
  }

  // Field name: dropped_part_challenge
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, DroppedPartChallenge
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->dropped_part_challenge))
    {
      return false;
    }
  }

  // Field name: sensor_blackout_challenge
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, SensorBlackoutChallenge
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->sensor_blackout_challenge))
    {
      return false;
    }
  }

  // Field name: robot_malfunction_challenge
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, RobotMalfunctionChallenge
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->robot_malfunction_challenge))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t get_serialized_size_ariac_msgs__msg__Challenge(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Challenge__ros_msg_type * ros_message = static_cast<const _Challenge__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name faulty_part_challenge

  current_alignment += get_serialized_size_ariac_msgs__msg__FaultyPartChallenge(
    &(ros_message->faulty_part_challenge), current_alignment);
  // field.name dropped_part_challenge

  current_alignment += get_serialized_size_ariac_msgs__msg__DroppedPartChallenge(
    &(ros_message->dropped_part_challenge), current_alignment);
  // field.name sensor_blackout_challenge

  current_alignment += get_serialized_size_ariac_msgs__msg__SensorBlackoutChallenge(
    &(ros_message->sensor_blackout_challenge), current_alignment);
  // field.name robot_malfunction_challenge

  current_alignment += get_serialized_size_ariac_msgs__msg__RobotMalfunctionChallenge(
    &(ros_message->robot_malfunction_challenge), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Challenge__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ariac_msgs__msg__Challenge(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t max_serialized_size_ariac_msgs__msg__Challenge(
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

  // member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: faulty_part_challenge
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ariac_msgs__msg__FaultyPartChallenge(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: dropped_part_challenge
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ariac_msgs__msg__DroppedPartChallenge(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: sensor_blackout_challenge
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ariac_msgs__msg__SensorBlackoutChallenge(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: robot_malfunction_challenge
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ariac_msgs__msg__RobotMalfunctionChallenge(
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
    using DataType = ariac_msgs__msg__Challenge;
    is_plain =
      (
      offsetof(DataType, robot_malfunction_challenge) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Challenge__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ariac_msgs__msg__Challenge(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Challenge = {
  "ariac_msgs::msg",
  "Challenge",
  _Challenge__cdr_serialize,
  _Challenge__cdr_deserialize,
  _Challenge__get_serialized_size,
  _Challenge__max_serialized_size
};

static rosidl_message_type_support_t _Challenge__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Challenge,
  get_message_typesupport_handle_function,
  &ariac_msgs__msg__Challenge__get_type_hash,
  &ariac_msgs__msg__Challenge__get_type_description,
  &ariac_msgs__msg__Challenge__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, Challenge)() {
  return &_Challenge__type_support;
}

#if defined(__cplusplus)
}
#endif
