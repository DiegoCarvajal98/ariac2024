// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:srv/SubmitOrder.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__SUBMIT_ORDER__BUILDER_HPP_
#define ARIAC_MSGS__SRV__DETAIL__SUBMIT_ORDER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ariac_msgs/srv/detail/submit_order__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ariac_msgs
{

namespace srv
{

namespace builder
{

class Init_SubmitOrder_Request_order_id
{
public:
  Init_SubmitOrder_Request_order_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ariac_msgs::srv::SubmitOrder_Request order_id(::ariac_msgs::srv::SubmitOrder_Request::_order_id_type arg)
  {
    msg_.order_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::srv::SubmitOrder_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::srv::SubmitOrder_Request>()
{
  return ariac_msgs::srv::builder::Init_SubmitOrder_Request_order_id();
}

}  // namespace ariac_msgs


namespace ariac_msgs
{

namespace srv
{

namespace builder
{

class Init_SubmitOrder_Response_message
{
public:
  explicit Init_SubmitOrder_Response_message(::ariac_msgs::srv::SubmitOrder_Response & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::srv::SubmitOrder_Response message(::ariac_msgs::srv::SubmitOrder_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::srv::SubmitOrder_Response msg_;
};

class Init_SubmitOrder_Response_success
{
public:
  Init_SubmitOrder_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SubmitOrder_Response_message success(::ariac_msgs::srv::SubmitOrder_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SubmitOrder_Response_message(msg_);
  }

private:
  ::ariac_msgs::srv::SubmitOrder_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::srv::SubmitOrder_Response>()
{
  return ariac_msgs::srv::builder::Init_SubmitOrder_Response_success();
}

}  // namespace ariac_msgs


namespace ariac_msgs
{

namespace srv
{

namespace builder
{

class Init_SubmitOrder_Event_response
{
public:
  explicit Init_SubmitOrder_Event_response(::ariac_msgs::srv::SubmitOrder_Event & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::srv::SubmitOrder_Event response(::ariac_msgs::srv::SubmitOrder_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::srv::SubmitOrder_Event msg_;
};

class Init_SubmitOrder_Event_request
{
public:
  explicit Init_SubmitOrder_Event_request(::ariac_msgs::srv::SubmitOrder_Event & msg)
  : msg_(msg)
  {}
  Init_SubmitOrder_Event_response request(::ariac_msgs::srv::SubmitOrder_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SubmitOrder_Event_response(msg_);
  }

private:
  ::ariac_msgs::srv::SubmitOrder_Event msg_;
};

class Init_SubmitOrder_Event_info
{
public:
  Init_SubmitOrder_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SubmitOrder_Event_request info(::ariac_msgs::srv::SubmitOrder_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SubmitOrder_Event_request(msg_);
  }

private:
  ::ariac_msgs::srv::SubmitOrder_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::srv::SubmitOrder_Event>()
{
  return ariac_msgs::srv::builder::Init_SubmitOrder_Event_info();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__SRV__DETAIL__SUBMIT_ORDER__BUILDER_HPP_
