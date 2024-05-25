// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/QualityIssue.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__QUALITY_ISSUE__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__QUALITY_ISSUE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ariac_msgs/msg/detail/quality_issue__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ariac_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const QualityIssue & msg,
  std::ostream & out)
{
  out << "{";
  // member: all_passed
  {
    out << "all_passed: ";
    rosidl_generator_traits::value_to_yaml(msg.all_passed, out);
    out << ", ";
  }

  // member: missing_part
  {
    out << "missing_part: ";
    rosidl_generator_traits::value_to_yaml(msg.missing_part, out);
    out << ", ";
  }

  // member: flipped_part
  {
    out << "flipped_part: ";
    rosidl_generator_traits::value_to_yaml(msg.flipped_part, out);
    out << ", ";
  }

  // member: faulty_part
  {
    out << "faulty_part: ";
    rosidl_generator_traits::value_to_yaml(msg.faulty_part, out);
    out << ", ";
  }

  // member: incorrect_part_type
  {
    out << "incorrect_part_type: ";
    rosidl_generator_traits::value_to_yaml(msg.incorrect_part_type, out);
    out << ", ";
  }

  // member: incorrect_part_color
  {
    out << "incorrect_part_color: ";
    rosidl_generator_traits::value_to_yaml(msg.incorrect_part_color, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const QualityIssue & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: all_passed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_passed: ";
    rosidl_generator_traits::value_to_yaml(msg.all_passed, out);
    out << "\n";
  }

  // member: missing_part
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "missing_part: ";
    rosidl_generator_traits::value_to_yaml(msg.missing_part, out);
    out << "\n";
  }

  // member: flipped_part
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flipped_part: ";
    rosidl_generator_traits::value_to_yaml(msg.flipped_part, out);
    out << "\n";
  }

  // member: faulty_part
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "faulty_part: ";
    rosidl_generator_traits::value_to_yaml(msg.faulty_part, out);
    out << "\n";
  }

  // member: incorrect_part_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "incorrect_part_type: ";
    rosidl_generator_traits::value_to_yaml(msg.incorrect_part_type, out);
    out << "\n";
  }

  // member: incorrect_part_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "incorrect_part_color: ";
    rosidl_generator_traits::value_to_yaml(msg.incorrect_part_color, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QualityIssue & msg, bool use_flow_style = false)
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
  const ariac_msgs::msg::QualityIssue & msg,
  std::ostream & out, size_t indentation = 0)
{
  ariac_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ariac_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ariac_msgs::msg::QualityIssue & msg)
{
  return ariac_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ariac_msgs::msg::QualityIssue>()
{
  return "ariac_msgs::msg::QualityIssue";
}

template<>
inline const char * name<ariac_msgs::msg::QualityIssue>()
{
  return "ariac_msgs/msg/QualityIssue";
}

template<>
struct has_fixed_size<ariac_msgs::msg::QualityIssue>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ariac_msgs::msg::QualityIssue>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ariac_msgs::msg::QualityIssue>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__QUALITY_ISSUE__TRAITS_HPP_
