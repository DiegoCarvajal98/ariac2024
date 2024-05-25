// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/TimeCondition.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__TIME_CONDITION__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__TIME_CONDITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ariac_msgs/msg/detail/time_condition__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ariac_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TimeCondition & msg,
  std::ostream & out)
{
  out << "{";
  // member: seconds
  {
    out << "seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.seconds, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TimeCondition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.seconds, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TimeCondition & msg, bool use_flow_style = false)
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
  const ariac_msgs::msg::TimeCondition & msg,
  std::ostream & out, size_t indentation = 0)
{
  ariac_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ariac_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ariac_msgs::msg::TimeCondition & msg)
{
  return ariac_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ariac_msgs::msg::TimeCondition>()
{
  return "ariac_msgs::msg::TimeCondition";
}

template<>
inline const char * name<ariac_msgs::msg::TimeCondition>()
{
  return "ariac_msgs/msg/TimeCondition";
}

template<>
struct has_fixed_size<ariac_msgs::msg::TimeCondition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ariac_msgs::msg::TimeCondition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ariac_msgs::msg::TimeCondition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__TIME_CONDITION__TRAITS_HPP_
