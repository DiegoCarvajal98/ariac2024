// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/Condition.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__CONDITION__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__CONDITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ariac_msgs/msg/detail/condition__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time_condition'
#include "ariac_msgs/msg/detail/time_condition__traits.hpp"
// Member 'part_place_condition'
#include "ariac_msgs/msg/detail/part_place_condition__traits.hpp"
// Member 'submission_condition'
#include "ariac_msgs/msg/detail/submission_condition__traits.hpp"

namespace ariac_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Condition & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: time_condition
  {
    out << "time_condition: ";
    to_flow_style_yaml(msg.time_condition, out);
    out << ", ";
  }

  // member: part_place_condition
  {
    out << "part_place_condition: ";
    to_flow_style_yaml(msg.part_place_condition, out);
    out << ", ";
  }

  // member: submission_condition
  {
    out << "submission_condition: ";
    to_flow_style_yaml(msg.submission_condition, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Condition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: time_condition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_condition:\n";
    to_block_style_yaml(msg.time_condition, out, indentation + 2);
  }

  // member: part_place_condition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "part_place_condition:\n";
    to_block_style_yaml(msg.part_place_condition, out, indentation + 2);
  }

  // member: submission_condition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "submission_condition:\n";
    to_block_style_yaml(msg.submission_condition, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Condition & msg, bool use_flow_style = false)
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
  const ariac_msgs::msg::Condition & msg,
  std::ostream & out, size_t indentation = 0)
{
  ariac_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ariac_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ariac_msgs::msg::Condition & msg)
{
  return ariac_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ariac_msgs::msg::Condition>()
{
  return "ariac_msgs::msg::Condition";
}

template<>
inline const char * name<ariac_msgs::msg::Condition>()
{
  return "ariac_msgs/msg/Condition";
}

template<>
struct has_fixed_size<ariac_msgs::msg::Condition>
  : std::integral_constant<bool, has_fixed_size<ariac_msgs::msg::PartPlaceCondition>::value && has_fixed_size<ariac_msgs::msg::SubmissionCondition>::value && has_fixed_size<ariac_msgs::msg::TimeCondition>::value> {};

template<>
struct has_bounded_size<ariac_msgs::msg::Condition>
  : std::integral_constant<bool, has_bounded_size<ariac_msgs::msg::PartPlaceCondition>::value && has_bounded_size<ariac_msgs::msg::SubmissionCondition>::value && has_bounded_size<ariac_msgs::msg::TimeCondition>::value> {};

template<>
struct is_message<ariac_msgs::msg::Condition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__CONDITION__TRAITS_HPP_
