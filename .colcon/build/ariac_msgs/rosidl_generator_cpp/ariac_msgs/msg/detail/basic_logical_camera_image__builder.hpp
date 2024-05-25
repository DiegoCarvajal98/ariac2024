// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/BasicLogicalCameraImage.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__BASIC_LOGICAL_CAMERA_IMAGE__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__BASIC_LOGICAL_CAMERA_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ariac_msgs/msg/detail/basic_logical_camera_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_BasicLogicalCameraImage_sensor_pose
{
public:
  explicit Init_BasicLogicalCameraImage_sensor_pose(::ariac_msgs::msg::BasicLogicalCameraImage & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::BasicLogicalCameraImage sensor_pose(::ariac_msgs::msg::BasicLogicalCameraImage::_sensor_pose_type arg)
  {
    msg_.sensor_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::BasicLogicalCameraImage msg_;
};

class Init_BasicLogicalCameraImage_tray_poses
{
public:
  explicit Init_BasicLogicalCameraImage_tray_poses(::ariac_msgs::msg::BasicLogicalCameraImage & msg)
  : msg_(msg)
  {}
  Init_BasicLogicalCameraImage_sensor_pose tray_poses(::ariac_msgs::msg::BasicLogicalCameraImage::_tray_poses_type arg)
  {
    msg_.tray_poses = std::move(arg);
    return Init_BasicLogicalCameraImage_sensor_pose(msg_);
  }

private:
  ::ariac_msgs::msg::BasicLogicalCameraImage msg_;
};

class Init_BasicLogicalCameraImage_part_poses
{
public:
  explicit Init_BasicLogicalCameraImage_part_poses(::ariac_msgs::msg::BasicLogicalCameraImage & msg)
  : msg_(msg)
  {}
  Init_BasicLogicalCameraImage_tray_poses part_poses(::ariac_msgs::msg::BasicLogicalCameraImage::_part_poses_type arg)
  {
    msg_.part_poses = std::move(arg);
    return Init_BasicLogicalCameraImage_tray_poses(msg_);
  }

private:
  ::ariac_msgs::msg::BasicLogicalCameraImage msg_;
};

class Init_BasicLogicalCameraImage_header
{
public:
  Init_BasicLogicalCameraImage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BasicLogicalCameraImage_part_poses header(::ariac_msgs::msg::BasicLogicalCameraImage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BasicLogicalCameraImage_part_poses(msg_);
  }

private:
  ::ariac_msgs::msg::BasicLogicalCameraImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::BasicLogicalCameraImage>()
{
  return ariac_msgs::msg::builder::Init_BasicLogicalCameraImage_header();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__BASIC_LOGICAL_CAMERA_IMAGE__BUILDER_HPP_
