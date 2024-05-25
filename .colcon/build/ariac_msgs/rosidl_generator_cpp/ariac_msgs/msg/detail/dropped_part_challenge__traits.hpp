// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/DroppedPartChallenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__DROPPED_PART_CHALLENGE__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__DROPPED_PART_CHALLENGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ariac_msgs/msg/detail/dropped_part_challenge__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'part_to_drop'
#include "ariac_msgs/msg/detail/part__traits.hpp"

namespace ariac_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DroppedPartChallenge & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot
  {
    out << "robot: ";
    rosidl_generator_traits::value_to_yaml(msg.robot, out);
    out << ", ";
  }

  // member: part_to_drop
  {
    out << "part_to_drop: ";
    to_flow_style_yaml(msg.part_to_drop, out);
    out << ", ";
  }

  // member: drop_after_num
  {
    out << "drop_after_num: ";
    rosidl_generator_traits::value_to_yaml(msg.drop_after_num, out);
    out << ", ";
  }

  // member: drop_after_time
  {
    out << "drop_after_time: ";
    rosidl_generator_traits::value_to_yaml(msg.drop_after_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DroppedPartChallenge & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot: ";
    rosidl_generator_traits::value_to_yaml(msg.robot, out);
    out << "\n";
  }

  // member: part_to_drop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "part_to_drop:\n";
    to_block_style_yaml(msg.part_to_drop, out, indentation + 2);
  }

  // member: drop_after_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drop_after_num: ";
    rosidl_generator_traits::value_to_yaml(msg.drop_after_num, out);
    out << "\n";
  }

  // member: drop_after_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drop_after_time: ";
    rosidl_generator_traits::value_to_yaml(msg.drop_after_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DroppedPartChallenge & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ariac_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ariac_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ariac_msgs::msg::DroppedPartChallenge & msg,
  std::ostream & out, size_t indentation = 0)
{
  ariac_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ariac_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ariac_msgs::msg::DroppedPartChallenge & msg)
{
  return ariac_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ariac_msgs::msg::DroppedPartChallenge>()
{
  return "ariac_msgs::msg::DroppedPartChallenge";
}

template<>
inline const char * name<ariac_msgs::msg::DroppedPartChallenge>()
{
  return "ariac_msgs/msg/DroppedPartChallenge";
}

template<>
struct has_fixed_size<ariac_msgs::msg::DroppedPartChallenge>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::msg::DroppedPartChallenge>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::msg::DroppedPartChallenge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__DROPPED_PART_CHALLENGE__TRAITS_HPP_
