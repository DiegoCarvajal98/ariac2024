// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/ConveyorParts.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__CONVEYOR_PARTS__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__CONVEYOR_PARTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ariac_msgs/msg/detail/conveyor_parts__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'parts'
#include "ariac_msgs/msg/detail/part_lot__traits.hpp"

namespace ariac_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConveyorParts & msg,
  std::ostream & out)
{
  out << "{";
  // member: parts
  {
    if (msg.parts.size() == 0) {
      out << "parts: []";
    } else {
      out << "parts: [";
      size_t pending_items = msg.parts.size();
      for (auto item : msg.parts) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConveyorParts & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: parts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.parts.size() == 0) {
      out << "parts: []\n";
    } else {
      out << "parts:\n";
      for (auto item : msg.parts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConveyorParts & msg, bool use_flow_style = false)
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
  const ariac_msgs::msg::ConveyorParts & msg,
  std::ostream & out, size_t indentation = 0)
{
  ariac_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ariac_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ariac_msgs::msg::ConveyorParts & msg)
{
  return ariac_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ariac_msgs::msg::ConveyorParts>()
{
  return "ariac_msgs::msg::ConveyorParts";
}

template<>
inline const char * name<ariac_msgs::msg::ConveyorParts>()
{
  return "ariac_msgs/msg/ConveyorParts";
}

template<>
struct has_fixed_size<ariac_msgs::msg::ConveyorParts>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::msg::ConveyorParts>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::msg::ConveyorParts>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__CONVEYOR_PARTS__TRAITS_HPP_
