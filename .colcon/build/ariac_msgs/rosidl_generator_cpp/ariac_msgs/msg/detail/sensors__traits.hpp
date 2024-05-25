// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/Sensors.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__SENSORS__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__SENSORS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ariac_msgs/msg/detail/sensors__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ariac_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Sensors & msg,
  std::ostream & out)
{
  out << "{";
  // member: break_beam
  {
    out << "break_beam: ";
    rosidl_generator_traits::value_to_yaml(msg.break_beam, out);
    out << ", ";
  }

  // member: proximity
  {
    out << "proximity: ";
    rosidl_generator_traits::value_to_yaml(msg.proximity, out);
    out << ", ";
  }

  // member: laser_profiler
  {
    out << "laser_profiler: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_profiler, out);
    out << ", ";
  }

  // member: lidar
  {
    out << "lidar: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar, out);
    out << ", ";
  }

  // member: camera
  {
    out << "camera: ";
    rosidl_generator_traits::value_to_yaml(msg.camera, out);
    out << ", ";
  }

  // member: logical_camera
  {
    out << "logical_camera: ";
    rosidl_generator_traits::value_to_yaml(msg.logical_camera, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sensors & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: break_beam
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "break_beam: ";
    rosidl_generator_traits::value_to_yaml(msg.break_beam, out);
    out << "\n";
  }

  // member: proximity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "proximity: ";
    rosidl_generator_traits::value_to_yaml(msg.proximity, out);
    out << "\n";
  }

  // member: laser_profiler
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laser_profiler: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_profiler, out);
    out << "\n";
  }

  // member: lidar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lidar: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar, out);
    out << "\n";
  }

  // member: camera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera: ";
    rosidl_generator_traits::value_to_yaml(msg.camera, out);
    out << "\n";
  }

  // member: logical_camera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "logical_camera: ";
    rosidl_generator_traits::value_to_yaml(msg.logical_camera, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sensors & msg, bool use_flow_style = false)
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
  const ariac_msgs::msg::Sensors & msg,
  std::ostream & out, size_t indentation = 0)
{
  ariac_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ariac_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ariac_msgs::msg::Sensors & msg)
{
  return ariac_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ariac_msgs::msg::Sensors>()
{
  return "ariac_msgs::msg::Sensors";
}

template<>
inline const char * name<ariac_msgs::msg::Sensors>()
{
  return "ariac_msgs/msg/Sensors";
}

template<>
struct has_fixed_size<ariac_msgs::msg::Sensors>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ariac_msgs::msg::Sensors>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ariac_msgs::msg::Sensors>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__SENSORS__TRAITS_HPP_
