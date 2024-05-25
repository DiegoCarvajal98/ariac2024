// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/AssemblyState.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_STATE__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ariac_msgs/msg/detail/assembly_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_AssemblyState_sensor_attached
{
public:
  explicit Init_AssemblyState_sensor_attached(::ariac_msgs::msg::AssemblyState & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::AssemblyState sensor_attached(::ariac_msgs::msg::AssemblyState::_sensor_attached_type arg)
  {
    msg_.sensor_attached = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::AssemblyState msg_;
};

class Init_AssemblyState_regulator_attached
{
public:
  explicit Init_AssemblyState_regulator_attached(::ariac_msgs::msg::AssemblyState & msg)
  : msg_(msg)
  {}
  Init_AssemblyState_sensor_attached regulator_attached(::ariac_msgs::msg::AssemblyState::_regulator_attached_type arg)
  {
    msg_.regulator_attached = std::move(arg);
    return Init_AssemblyState_sensor_attached(msg_);
  }

private:
  ::ariac_msgs::msg::AssemblyState msg_;
};

class Init_AssemblyState_pump_attached
{
public:
  explicit Init_AssemblyState_pump_attached(::ariac_msgs::msg::AssemblyState & msg)
  : msg_(msg)
  {}
  Init_AssemblyState_regulator_attached pump_attached(::ariac_msgs::msg::AssemblyState::_pump_attached_type arg)
  {
    msg_.pump_attached = std::move(arg);
    return Init_AssemblyState_regulator_attached(msg_);
  }

private:
  ::ariac_msgs::msg::AssemblyState msg_;
};

class Init_AssemblyState_battery_attached
{
public:
  Init_AssemblyState_battery_attached()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AssemblyState_pump_attached battery_attached(::ariac_msgs::msg::AssemblyState::_battery_attached_type arg)
  {
    msg_.battery_attached = std::move(arg);
    return Init_AssemblyState_pump_attached(msg_);
  }

private:
  ::ariac_msgs::msg::AssemblyState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::AssemblyState>()
{
  return ariac_msgs::msg::builder::Init_AssemblyState_battery_attached();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_STATE__BUILDER_HPP_
