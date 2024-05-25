// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/FaultyPartChallenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__FAULTY_PART_CHALLENGE__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__FAULTY_PART_CHALLENGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ariac_msgs/msg/detail/faulty_part_challenge__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ariac_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FaultyPartChallenge & msg,
  std::ostream & out)
{
  out << "{";
  // member: order_id
  {
    out << "order_id: ";
    rosidl_generator_traits::value_to_yaml(msg.order_id, out);
    out << ", ";
  }

  // member: quadrant1
  {
    out << "quadrant1: ";
    rosidl_generator_traits::value_to_yaml(msg.quadrant1, out);
    out << ", ";
  }

  // member: quadrant2
  {
    out << "quadrant2: ";
    rosidl_generator_traits::value_to_yaml(msg.quadrant2, out);
    out << ", ";
  }

  // member: quadrant3
  {
    out << "quadrant3: ";
    rosidl_generator_traits::value_to_yaml(msg.quadrant3, out);
    out << ", ";
  }

  // member: quadrant4
  {
    out << "quadrant4: ";
    rosidl_generator_traits::value_to_yaml(msg.quadrant4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FaultyPartChallenge & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: order_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "order_id: ";
    rosidl_generator_traits::value_to_yaml(msg.order_id, out);
    out << "\n";
  }

  // member: quadrant1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quadrant1: ";
    rosidl_generator_traits::value_to_yaml(msg.quadrant1, out);
    out << "\n";
  }

  // member: quadrant2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quadrant2: ";
    rosidl_generator_traits::value_to_yaml(msg.quadrant2, out);
    out << "\n";
  }

  // member: quadrant3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quadrant3: ";
    rosidl_generator_traits::value_to_yaml(msg.quadrant3, out);
    out << "\n";
  }

  // member: quadrant4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quadrant4: ";
    rosidl_generator_traits::value_to_yaml(msg.quadrant4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FaultyPartChallenge & msg, bool use_flow_style = false)
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
  const ariac_msgs::msg::FaultyPartChallenge & msg,
  std::ostream & out, size_t indentation = 0)
{
  ariac_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ariac_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ariac_msgs::msg::FaultyPartChallenge & msg)
{
  return ariac_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ariac_msgs::msg::FaultyPartChallenge>()
{
  return "ariac_msgs::msg::FaultyPartChallenge";
}

template<>
inline const char * name<ariac_msgs::msg::FaultyPartChallenge>()
{
  return "ariac_msgs/msg/FaultyPartChallenge";
}

template<>
struct has_fixed_size<ariac_msgs::msg::FaultyPartChallenge>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::msg::FaultyPartChallenge>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::msg::FaultyPartChallenge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__FAULTY_PART_CHALLENGE__TRAITS_HPP_
