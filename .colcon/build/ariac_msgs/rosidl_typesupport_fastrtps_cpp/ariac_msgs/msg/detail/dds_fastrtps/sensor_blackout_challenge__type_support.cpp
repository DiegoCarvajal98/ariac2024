// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ariac_msgs:msg/SensorBlackoutChallenge.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/sensor_blackout_challenge__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ariac_msgs/msg/detail/sensor_blackout_challenge__functions.h"
#include "ariac_msgs/msg/detail/sensor_blackout_challenge__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace ariac_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ariac_msgs::msg::Condition &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ariac_msgs::msg::Condition &);
size_t get_serialized_size(
  const ariac_msgs::msg::Condition &,
  size_t current_alignment);
size_t
max_serialized_size_Condition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ariac_msgs

namespace ariac_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ariac_msgs::msg::Sensors &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ariac_msgs::msg::Sensors &);
size_t get_serialized_size(
  const ariac_msgs::msg::Sensors &,
  size_t current_alignment);
size_t
max_serialized_size_Sensors(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ariac_msgs


namespace ariac_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
cdr_serialize(
  const ariac_msgs::msg::SensorBlackoutChallenge & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: duration
  cdr << ros_message.duration;
  // Member: condition
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.condition,
    cdr);
  // Member: sensors_to_disable
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.sensors_to_disable,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ariac_msgs::msg::SensorBlackoutChallenge & ros_message)
{
  // Member: duration
  cdr >> ros_message.duration;

  // Member: condition
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.condition);

  // Member: sensors_to_disable
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.sensors_to_disable);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
get_serialized_size(
  const ariac_msgs::msg::SensorBlackoutChallenge & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: duration
  {
    size_t item_size = sizeof(ros_message.duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: condition

  current_alignment +=
    ariac_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.condition, current_alignment);
  // Member: sensors_to_disable

  current_alignment +=
    ariac_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.sensors_to_disable, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
max_serialized_size_SensorBlackoutChallenge(
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


  // Member: duration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: condition
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ariac_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Condition(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: sensors_to_disable
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ariac_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Sensors(
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
    using DataType = ariac_msgs::msg::SensorBlackoutChallenge;
    is_plain =
      (
      offsetof(DataType, sensors_to_disable) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SensorBlackoutChallenge__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ariac_msgs::msg::SensorBlackoutChallenge *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SensorBlackoutChallenge__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ariac_msgs::msg::SensorBlackoutChallenge *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SensorBlackoutChallenge__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ariac_msgs::msg::SensorBlackoutChallenge *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SensorBlackoutChallenge__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SensorBlackoutChallenge(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SensorBlackoutChallenge__callbacks = {
  "ariac_msgs::msg",
  "SensorBlackoutChallenge",
  _SensorBlackoutChallenge__cdr_serialize,
  _SensorBlackoutChallenge__cdr_deserialize,
  _SensorBlackoutChallenge__get_serialized_size,
  _SensorBlackoutChallenge__max_serialized_size
};

static rosidl_message_type_support_t _SensorBlackoutChallenge__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SensorBlackoutChallenge__callbacks,
  get_message_typesupport_handle_function,
  &ariac_msgs__msg__SensorBlackoutChallenge__get_type_hash,
  &ariac_msgs__msg__SensorBlackoutChallenge__get_type_description,
  &ariac_msgs__msg__SensorBlackoutChallenge__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ariac_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ariac_msgs::msg::SensorBlackoutChallenge>()
{
  return &ariac_msgs::msg::typesupport_fastrtps_cpp::_SensorBlackoutChallenge__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ariac_msgs, msg, SensorBlackoutChallenge)() {
  return &ariac_msgs::msg::typesupport_fastrtps_cpp::_SensorBlackoutChallenge__handle;
}

#ifdef __cplusplus
}
#endif
