// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/Robots.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ROBOTS__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ROBOTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ariac_msgs/msg/detail/robots__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ariac_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Robots & msg,
  std::ostream & out)
{
  out << "{";
  // member: floor_robot
  {
    out << "floor_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.floor_robot, out);
    out << ", ";
  }

  // member: ceiling_robot
  {
    out << "ceiling_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.ceiling_robot, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robots & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: floor_robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "floor_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.floor_robot, out);
    out << "\n";
  }

  // member: ceiling_robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ceiling_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.ceiling_robot, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robots & msg, bool use_flow_style = false)
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
  const ariac_msgs::msg::Robots & msg,
  std::ostream & out, size_t indentation = 0)
{
  ariac_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ariac_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ariac_msgs::msg::Robots & msg)
{
  return ariac_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ariac_msgs::msg::Robots>()
{
  return "ariac_msgs::msg::Robots";
}

template<>
inline const char * name<ariac_msgs::msg::Robots>()
{
  return "ariac_msgs/msg/Robots";
}

template<>
struct has_fixed_size<ariac_msgs::msg::Robots>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ariac_msgs::msg::Robots>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ariac_msgs::msg::Robots>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__ROBOTS__TRAITS_HPP_
