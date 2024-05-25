// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:srv/GetPreAssemblyPoses.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__GET_PRE_ASSEMBLY_POSES__BUILDER_HPP_
#define ARIAC_MSGS__SRV__DETAIL__GET_PRE_ASSEMBLY_POSES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ariac_msgs/srv/detail/get_pre_assembly_poses__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ariac_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPreAssemblyPoses_Request_order_id
{
public:
  Init_GetPreAssemblyPoses_Request_order_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ariac_msgs::srv::GetPreAssemblyPoses_Request order_id(::ariac_msgs::srv::GetPreAssemblyPoses_Request::_order_id_type arg)
  {
    msg_.order_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::srv::GetPreAssemblyPoses_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::srv::GetPreAssemblyPoses_Request>()
{
  return ariac_msgs::srv::builder::Init_GetPreAssemblyPoses_Request_order_id();
}

}  // namespace ariac_msgs


namespace ariac_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPreAssemblyPoses_Response_parts
{
public:
  explicit Init_GetPreAssemblyPoses_Response_parts(::ariac_msgs::srv::GetPreAssemblyPoses_Response & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::srv::GetPreAssemblyPoses_Response parts(::ariac_msgs::srv::GetPreAssemblyPoses_Response::_parts_type arg)
  {
    msg_.parts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::srv::GetPreAssemblyPoses_Response msg_;
};

class Init_GetPreAssemblyPoses_Response_agv_at_station
{
public:
  explicit Init_GetPreAssemblyPoses_Response_agv_at_station(::ariac_msgs::srv::GetPreAssemblyPoses_Response & msg)
  : msg_(msg)
  {}
  Init_GetPreAssemblyPoses_Response_parts agv_at_station(::ariac_msgs::srv::GetPreAssemblyPoses_Response::_agv_at_station_type arg)
  {
    msg_.agv_at_station = std::move(arg);
    return Init_GetPreAssemblyPoses_Response_parts(msg_);
  }

private:
  ::ariac_msgs::srv::GetPreAssemblyPoses_Response msg_;
};

class Init_GetPreAssemblyPoses_Response_valid_id
{
public:
  Init_GetPreAssemblyPoses_Response_valid_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPreAssemblyPoses_Response_agv_at_station valid_id(::ariac_msgs::srv::GetPreAssemblyPoses_Response::_valid_id_type arg)
  {
    msg_.valid_id = std::move(arg);
    return Init_GetPreAssemblyPoses_Response_agv_at_station(msg_);
  }

private:
  ::ariac_msgs::srv::GetPreAssemblyPoses_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::srv::GetPreAssemblyPoses_Response>()
{
  return ariac_msgs::srv::builder::Init_GetPreAssemblyPoses_Response_valid_id();
}

}  // namespace ariac_msgs


namespace ariac_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPreAssemblyPoses_Event_response
{
public:
  explicit Init_GetPreAssemblyPoses_Event_response(::ariac_msgs::srv::GetPreAssemblyPoses_Event & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::srv::GetPreAssemblyPoses_Event response(::ariac_msgs::srv::GetPreAssemblyPoses_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::srv::GetPreAssemblyPoses_Event msg_;
};

class Init_GetPreAssemblyPoses_Event_request
{
public:
  explicit Init_GetPreAssemblyPoses_Event_request(::ariac_msgs::srv::GetPreAssemblyPoses_Event & msg)
  : msg_(msg)
  {}
  Init_GetPreAssemblyPoses_Event_response request(::ariac_msgs::srv::GetPreAssemblyPoses_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetPreAssemblyPoses_Event_response(msg_);
  }

private:
  ::ariac_msgs::srv::GetPreAssemblyPoses_Event msg_;
};

class Init_GetPreAssemblyPoses_Event_info
{
public:
  Init_GetPreAssemblyPoses_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPreAssemblyPoses_Event_request info(::ariac_msgs::srv::GetPreAssemblyPoses_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetPreAssemblyPoses_Event_request(msg_);
  }

private:
  ::ariac_msgs::srv::GetPreAssemblyPoses_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::srv::GetPreAssemblyPoses_Event>()
{
  return ariac_msgs::srv::builder::Init_GetPreAssemblyPoses_Event_info();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__SRV__DETAIL__GET_PRE_ASSEMBLY_POSES__BUILDER_HPP_
