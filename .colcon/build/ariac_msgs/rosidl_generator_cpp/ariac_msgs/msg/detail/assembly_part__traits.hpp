// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/AssemblyPart.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_PART__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_PART__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ariac_msgs/msg/detail/assembly_part__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'part'
#include "ariac_msgs/msg/detail/part__traits.hpp"
// Member 'assembled_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'install_direction'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace ariac_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AssemblyPart & msg,
  std::ostream & out)
{
  out << "{";
  // member: part
  {
    out << "part: ";
    to_flow_style_yaml(msg.part, out);
    out << ", ";
  }

  // member: assembled_pose
  {
    out << "assembled_pose: ";
    to_flow_style_yaml(msg.assembled_pose, out);
    out << ", ";
  }

  // member: install_direction
  {
    out << "install_direction: ";
    to_flow_style_yaml(msg.install_direction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AssemblyPart & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: part
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "part:\n";
    to_block_style_yaml(msg.part, out, indentation + 2);
  }

  // member: assembled_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "assembled_pose:\n";
    to_block_style_yaml(msg.assembled_pose, out, indentation + 2);
  }

  // member: install_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "install_direction:\n";
    to_block_style_yaml(msg.install_direction, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AssemblyPart & msg, bool use_flow_style = false)
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
  const ariac_msgs::msg::AssemblyPart & msg,
  std::ostream & out, size_t indentation = 0)
{
  ariac_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ariac_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ariac_msgs::msg::AssemblyPart & msg)
{
  return ariac_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ariac_msgs::msg::AssemblyPart>()
{
  return "ariac_msgs::msg::AssemblyPart";
}

template<>
inline const char * name<ariac_msgs::msg::AssemblyPart>()
{
  return "ariac_msgs/msg/AssemblyPart";
}

template<>
struct has_fixed_size<ariac_msgs::msg::AssemblyPart>
  : std::integral_constant<bool, has_fixed_size<ariac_msgs::msg::Part>::value && has_fixed_size<geometry_msgs::msg::PoseStamped>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<ariac_msgs::msg::AssemblyPart>
  : std::integral_constant<bool, has_bounded_size<ariac_msgs::msg::Part>::value && has_bounded_size<geometry_msgs::msg::PoseStamped>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<ariac_msgs::msg::AssemblyPart>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_PART__TRAITS_HPP_
