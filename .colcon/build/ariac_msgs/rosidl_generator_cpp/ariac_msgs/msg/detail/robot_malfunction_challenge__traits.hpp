// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/RobotMalfunctionChallenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ROBOT_MALFUNCTION_CHALLENGE__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ROBOT_MALFUNCTION_CHALLENGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ariac_msgs/msg/detail/robot_malfunction_challenge__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'condition'
#include "ariac_msgs/msg/detail/condition__traits.hpp"
// Member 'robots_to_disable'
#include "ariac_msgs/msg/detail/robots__traits.hpp"

namespace ariac_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotMalfunctionChallenge & msg,
  std::ostream & out)
{
  out << "{";
  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << ", ";
  }

  // member: condition
  {
    out << "condition: ";
    to_flow_style_yaml(msg.condition, out);
    out << ", ";
  }

  // member: robots_to_disable
  {
    out << "robots_to_disable: ";
    to_flow_style_yaml(msg.robots_to_disable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotMalfunctionChallenge & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }

  // member: condition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "condition:\n";
    to_block_style_yaml(msg.condition, out, indentation + 2);
  }

  // member: robots_to_disable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robots_to_disable:\n";
    to_block_style_yaml(msg.robots_to_disable, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotMalfunctionChallenge & msg, bool use_flow_style = false)
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
  const ariac_msgs::msg::RobotMalfunctionChallenge & msg,
  std::ostream & out, size_t indentation = 0)
{
  ariac_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ariac_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ariac_msgs::msg::RobotMalfunctionChallenge & msg)
{
  return ariac_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ariac_msgs::msg::RobotMalfunctionChallenge>()
{
  return "ariac_msgs::msg::RobotMalfunctionChallenge";
}

template<>
inline const char * name<ariac_msgs::msg::RobotMalfunctionChallenge>()
{
  return "ariac_msgs/msg/RobotMalfunctionChallenge";
}

template<>
struct has_fixed_size<ariac_msgs::msg::RobotMalfunctionChallenge>
  : std::integral_constant<bool, has_fixed_size<ariac_msgs::msg::Condition>::value && has_fixed_size<ariac_msgs::msg::Robots>::value> {};

template<>
struct has_bounded_size<ariac_msgs::msg::RobotMalfunctionChallenge>
  : std::integral_constant<bool, has_bounded_size<ariac_msgs::msg::Condition>::value && has_bounded_size<ariac_msgs::msg::Robots>::value> {};

template<>
struct is_message<ariac_msgs::msg::RobotMalfunctionChallenge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__ROBOT_MALFUNCTION_CHALLENGE__TRAITS_HPP_
