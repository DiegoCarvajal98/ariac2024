// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:srv/VacuumGripperControl.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__VACUUM_GRIPPER_CONTROL__BUILDER_HPP_
#define ARIAC_MSGS__SRV__DETAIL__VACUUM_GRIPPER_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ariac_msgs/srv/detail/vacuum_gripper_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ariac_msgs
{

namespace srv
{

namespace builder
{

class Init_VacuumGripperControl_Request_enable
{
public:
  Init_VacuumGripperControl_Request_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ariac_msgs::srv::VacuumGripperControl_Request enable(::ariac_msgs::srv::VacuumGripperControl_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::srv::VacuumGripperControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::srv::VacuumGripperControl_Request>()
{
  return ariac_msgs::srv::builder::Init_VacuumGripperControl_Request_enable();
}

}  // namespace ariac_msgs


namespace ariac_msgs
{

namespace srv
{

namespace builder
{

class Init_VacuumGripperControl_Response_success
{
public:
  Init_VacuumGripperControl_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ariac_msgs::srv::VacuumGripperControl_Response success(::ariac_msgs::srv::VacuumGripperControl_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::srv::VacuumGripperControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::srv::VacuumGripperControl_Response>()
{
  return ariac_msgs::srv::builder::Init_VacuumGripperControl_Response_success();
}

}  // namespace ariac_msgs


namespace ariac_msgs
{

namespace srv
{

namespace builder
{

class Init_VacuumGripperControl_Event_response
{
public:
  explicit Init_VacuumGripperControl_Event_response(::ariac_msgs::srv::VacuumGripperControl_Event & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::srv::VacuumGripperControl_Event response(::ariac_msgs::srv::VacuumGripperControl_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::srv::VacuumGripperControl_Event msg_;
};

class Init_VacuumGripperControl_Event_request
{
public:
  explicit Init_VacuumGripperControl_Event_request(::ariac_msgs::srv::VacuumGripperControl_Event & msg)
  : msg_(msg)
  {}
  Init_VacuumGripperControl_Event_response request(::ariac_msgs::srv::VacuumGripperControl_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_VacuumGripperControl_Event_response(msg_);
  }

private:
  ::ariac_msgs::srv::VacuumGripperControl_Event msg_;
};

class Init_VacuumGripperControl_Event_info
{
public:
  Init_VacuumGripperControl_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VacuumGripperControl_Event_request info(::ariac_msgs::srv::VacuumGripperControl_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_VacuumGripperControl_Event_request(msg_);
  }

private:
  ::ariac_msgs::srv::VacuumGripperControl_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::srv::VacuumGripperControl_Event>()
{
  return ariac_msgs::srv::builder::Init_VacuumGripperControl_Event_info();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__SRV__DETAIL__VACUUM_GRIPPER_CONTROL__BUILDER_HPP_
