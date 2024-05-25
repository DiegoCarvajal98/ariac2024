// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/BinParts.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__BIN_PARTS__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__BIN_PARTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ariac_msgs/msg/detail/bin_parts__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'bins'
#include "ariac_msgs/msg/detail/bin_info__traits.hpp"

namespace ariac_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BinParts & msg,
  std::ostream & out)
{
  out << "{";
  // member: bins
  {
    if (msg.bins.size() == 0) {
      out << "bins: []";
    } else {
      out << "bins: [";
      size_t pending_items = msg.bins.size();
      for (auto item : msg.bins) {
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
  const BinParts & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bins
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bins.size() == 0) {
      out << "bins: []\n";
    } else {
      out << "bins:\n";
      for (auto item : msg.bins) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BinParts & msg, bool use_flow_style = false)
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
  const ariac_msgs::msg::BinParts & msg,
  std::ostream & out, size_t indentation = 0)
{
  ariac_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ariac_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ariac_msgs::msg::BinParts & msg)
{
  return ariac_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ariac_msgs::msg::BinParts>()
{
  return "ariac_msgs::msg::BinParts";
}

template<>
inline const char * name<ariac_msgs::msg::BinParts>()
{
  return "ariac_msgs/msg/BinParts";
}

template<>
struct has_fixed_size<ariac_msgs::msg::BinParts>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::msg::BinParts>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::msg::BinParts>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__BIN_PARTS__TRAITS_HPP_
