// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:srv/PerformQualityCheck.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__PERFORM_QUALITY_CHECK__BUILDER_HPP_
#define ARIAC_MSGS__SRV__DETAIL__PERFORM_QUALITY_CHECK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ariac_msgs/srv/detail/perform_quality_check__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ariac_msgs
{

namespace srv
{

namespace builder
{

class Init_PerformQualityCheck_Request_order_id
{
public:
  Init_PerformQualityCheck_Request_order_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ariac_msgs::srv::PerformQualityCheck_Request order_id(::ariac_msgs::srv::PerformQualityCheck_Request::_order_id_type arg)
  {
    msg_.order_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::srv::PerformQualityCheck_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::srv::PerformQualityCheck_Request>()
{
  return ariac_msgs::srv::builder::Init_PerformQualityCheck_Request_order_id();
}

}  // namespace ariac_msgs


namespace ariac_msgs
{

namespace srv
{

namespace builder
{

class Init_PerformQualityCheck_Response_quadrant4
{
public:
  explicit Init_PerformQualityCheck_Response_quadrant4(::ariac_msgs::srv::PerformQualityCheck_Response & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::srv::PerformQualityCheck_Response quadrant4(::ariac_msgs::srv::PerformQualityCheck_Response::_quadrant4_type arg)
  {
    msg_.quadrant4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::srv::PerformQualityCheck_Response msg_;
};

class Init_PerformQualityCheck_Response_quadrant3
{
public:
  explicit Init_PerformQualityCheck_Response_quadrant3(::ariac_msgs::srv::PerformQualityCheck_Response & msg)
  : msg_(msg)
  {}
  Init_PerformQualityCheck_Response_quadrant4 quadrant3(::ariac_msgs::srv::PerformQualityCheck_Response::_quadrant3_type arg)
  {
    msg_.quadrant3 = std::move(arg);
    return Init_PerformQualityCheck_Response_quadrant4(msg_);
  }

private:
  ::ariac_msgs::srv::PerformQualityCheck_Response msg_;
};

class Init_PerformQualityCheck_Response_quadrant2
{
public:
  explicit Init_PerformQualityCheck_Response_quadrant2(::ariac_msgs::srv::PerformQualityCheck_Response & msg)
  : msg_(msg)
  {}
  Init_PerformQualityCheck_Response_quadrant3 quadrant2(::ariac_msgs::srv::PerformQualityCheck_Response::_quadrant2_type arg)
  {
    msg_.quadrant2 = std::move(arg);
    return Init_PerformQualityCheck_Response_quadrant3(msg_);
  }

private:
  ::ariac_msgs::srv::PerformQualityCheck_Response msg_;
};

class Init_PerformQualityCheck_Response_quadrant1
{
public:
  explicit Init_PerformQualityCheck_Response_quadrant1(::ariac_msgs::srv::PerformQualityCheck_Response & msg)
  : msg_(msg)
  {}
  Init_PerformQualityCheck_Response_quadrant2 quadrant1(::ariac_msgs::srv::PerformQualityCheck_Response::_quadrant1_type arg)
  {
    msg_.quadrant1 = std::move(arg);
    return Init_PerformQualityCheck_Response_quadrant2(msg_);
  }

private:
  ::ariac_msgs::srv::PerformQualityCheck_Response msg_;
};

class Init_PerformQualityCheck_Response_incorrect_tray
{
public:
  explicit Init_PerformQualityCheck_Response_incorrect_tray(::ariac_msgs::srv::PerformQualityCheck_Response & msg)
  : msg_(msg)
  {}
  Init_PerformQualityCheck_Response_quadrant1 incorrect_tray(::ariac_msgs::srv::PerformQualityCheck_Response::_incorrect_tray_type arg)
  {
    msg_.incorrect_tray = std::move(arg);
    return Init_PerformQualityCheck_Response_quadrant1(msg_);
  }

private:
  ::ariac_msgs::srv::PerformQualityCheck_Response msg_;
};

class Init_PerformQualityCheck_Response_all_passed
{
public:
  explicit Init_PerformQualityCheck_Response_all_passed(::ariac_msgs::srv::PerformQualityCheck_Response & msg)
  : msg_(msg)
  {}
  Init_PerformQualityCheck_Response_incorrect_tray all_passed(::ariac_msgs::srv::PerformQualityCheck_Response::_all_passed_type arg)
  {
    msg_.all_passed = std::move(arg);
    return Init_PerformQualityCheck_Response_incorrect_tray(msg_);
  }

private:
  ::ariac_msgs::srv::PerformQualityCheck_Response msg_;
};

class Init_PerformQualityCheck_Response_valid_id
{
public:
  Init_PerformQualityCheck_Response_valid_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PerformQualityCheck_Response_all_passed valid_id(::ariac_msgs::srv::PerformQualityCheck_Response::_valid_id_type arg)
  {
    msg_.valid_id = std::move(arg);
    return Init_PerformQualityCheck_Response_all_passed(msg_);
  }

private:
  ::ariac_msgs::srv::PerformQualityCheck_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::srv::PerformQualityCheck_Response>()
{
  return ariac_msgs::srv::builder::Init_PerformQualityCheck_Response_valid_id();
}

}  // namespace ariac_msgs


namespace ariac_msgs
{

namespace srv
{

namespace builder
{

class Init_PerformQualityCheck_Event_response
{
public:
  explicit Init_PerformQualityCheck_Event_response(::ariac_msgs::srv::PerformQualityCheck_Event & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::srv::PerformQualityCheck_Event response(::ariac_msgs::srv::PerformQualityCheck_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::srv::PerformQualityCheck_Event msg_;
};

class Init_PerformQualityCheck_Event_request
{
public:
  explicit Init_PerformQualityCheck_Event_request(::ariac_msgs::srv::PerformQualityCheck_Event & msg)
  : msg_(msg)
  {}
  Init_PerformQualityCheck_Event_response request(::ariac_msgs::srv::PerformQualityCheck_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PerformQualityCheck_Event_response(msg_);
  }

private:
  ::ariac_msgs::srv::PerformQualityCheck_Event msg_;
};

class Init_PerformQualityCheck_Event_info
{
public:
  Init_PerformQualityCheck_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PerformQualityCheck_Event_request info(::ariac_msgs::srv::PerformQualityCheck_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PerformQualityCheck_Event_request(msg_);
  }

private:
  ::ariac_msgs::srv::PerformQualityCheck_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::srv::PerformQualityCheck_Event>()
{
  return ariac_msgs::srv::builder::Init_PerformQualityCheck_Event_info();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__SRV__DETAIL__PERFORM_QUALITY_CHECK__BUILDER_HPP_
