// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/BasicLogicalCameraImage.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__BASIC_LOGICAL_CAMERA_IMAGE__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__BASIC_LOGICAL_CAMERA_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ariac_msgs/msg/detail/basic_logical_camera_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'part_poses'
// Member 'tray_poses'
// Member 'sensor_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace ariac_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BasicLogicalCameraImage & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: part_poses
  {
    if (msg.part_poses.size() == 0) {
      out << "part_poses: []";
    } else {
      out << "part_poses: [";
      size_t pending_items = msg.part_poses.size();
      for (auto item : msg.part_poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tray_poses
  {
    if (msg.tray_poses.size() == 0) {
      out << "tray_poses: []";
    } else {
      out << "tray_poses: [";
      size_t pending_items = msg.tray_poses.size();
      for (auto item : msg.tray_poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sensor_pose
  {
    out << "sensor_pose: ";
    to_flow_style_yaml(msg.sensor_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BasicLogicalCameraImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: part_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.part_poses.size() == 0) {
      out << "part_poses: []\n";
    } else {
      out << "part_poses:\n";
      for (auto item : msg.part_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: tray_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tray_poses.size() == 0) {
      out << "tray_poses: []\n";
    } else {
      out << "tray_poses:\n";
      for (auto item : msg.tray_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: sensor_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_pose:\n";
    to_block_style_yaml(msg.sensor_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BasicLogicalCameraImage & msg, bool use_flow_style = false)
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
  const ariac_msgs::msg::BasicLogicalCameraImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ariac_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ariac_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ariac_msgs::msg::BasicLogicalCameraImage & msg)
{
  return ariac_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ariac_msgs::msg::BasicLogicalCameraImage>()
{
  return "ariac_msgs::msg::BasicLogicalCameraImage";
}

template<>
inline const char * name<ariac_msgs::msg::BasicLogicalCameraImage>()
{
  return "ariac_msgs/msg/BasicLogicalCameraImage";
}

template<>
struct has_fixed_size<ariac_msgs::msg::BasicLogicalCameraImage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::msg::BasicLogicalCameraImage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::msg::BasicLogicalCameraImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__BASIC_LOGICAL_CAMERA_IMAGE__TRAITS_HPP_
