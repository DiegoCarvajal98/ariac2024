// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/VacuumGripperState.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__VACUUM_GRIPPER_STATE__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__VACUUM_GRIPPER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ariac_msgs/msg/detail/vacuum_gripper_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ariac_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VacuumGripperState & msg,
  std::ostream & out)
{
  out << "{";
  // member: enabled
  {
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << ", ";
  }

  // member: attached
  {
    out << "attached: ";
    rosidl_generator_traits::value_to_yaml(msg.attached, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VacuumGripperState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << "\n";
  }

  // member: attached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attached: ";
    rosidl_generator_traits::value_to_yaml(msg.attached, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VacuumGripperState & msg, bool use_flow_style = false)
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
  const ariac_msgs::msg::VacuumGripperState & msg,
  std::ostream & out, size_t indentation = 0)
{
  ariac_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ariac_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ariac_msgs::msg::VacuumGripperState & msg)
{
  return ariac_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ariac_msgs::msg::VacuumGripperState>()
{
  return "ariac_msgs::msg::VacuumGripperState";
}

template<>
inline const char * name<ariac_msgs::msg::VacuumGripperState>()
{
  return "ariac_msgs/msg/VacuumGripperState";
}

template<>
struct has_fixed_size<ariac_msgs::msg::VacuumGripperState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::msg::VacuumGripperState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::msg::VacuumGripperState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__VACUUM_GRIPPER_STATE__TRAITS_HPP_
