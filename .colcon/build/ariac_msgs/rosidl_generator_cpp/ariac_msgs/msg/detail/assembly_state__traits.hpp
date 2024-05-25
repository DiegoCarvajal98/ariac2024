// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/AssemblyState.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_STATE__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ariac_msgs/msg/detail/assembly_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ariac_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AssemblyState & msg,
  std::ostream & out)
{
  out << "{";
  // member: battery_attached
  {
    out << "battery_attached: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_attached, out);
    out << ", ";
  }

  // member: pump_attached
  {
    out << "pump_attached: ";
    rosidl_generator_traits::value_to_yaml(msg.pump_attached, out);
    out << ", ";
  }

  // member: regulator_attached
  {
    out << "regulator_attached: ";
    rosidl_generator_traits::value_to_yaml(msg.regulator_attached, out);
    out << ", ";
  }

  // member: sensor_attached
  {
    out << "sensor_attached: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_attached, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AssemblyState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: battery_attached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_attached: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_attached, out);
    out << "\n";
  }

  // member: pump_attached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pump_attached: ";
    rosidl_generator_traits::value_to_yaml(msg.pump_attached, out);
    out << "\n";
  }

  // member: regulator_attached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "regulator_attached: ";
    rosidl_generator_traits::value_to_yaml(msg.regulator_attached, out);
    out << "\n";
  }

  // member: sensor_attached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_attached: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_attached, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AssemblyState & msg, bool use_flow_style = false)
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
  const ariac_msgs::msg::AssemblyState & msg,
  std::ostream & out, size_t indentation = 0)
{
  ariac_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ariac_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ariac_msgs::msg::AssemblyState & msg)
{
  return ariac_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ariac_msgs::msg::AssemblyState>()
{
  return "ariac_msgs::msg::AssemblyState";
}

template<>
inline const char * name<ariac_msgs::msg::AssemblyState>()
{
  return "ariac_msgs/msg/AssemblyState";
}

template<>
struct has_fixed_size<ariac_msgs::msg::AssemblyState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ariac_msgs::msg::AssemblyState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ariac_msgs::msg::AssemblyState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_STATE__TRAITS_HPP_
