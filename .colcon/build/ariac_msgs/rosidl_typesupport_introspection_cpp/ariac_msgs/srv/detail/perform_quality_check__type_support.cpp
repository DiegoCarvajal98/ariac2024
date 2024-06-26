// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ariac_msgs:srv/PerformQualityCheck.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ariac_msgs/srv/detail/perform_quality_check__functions.h"
#include "ariac_msgs/srv/detail/perform_quality_check__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ariac_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void PerformQualityCheck_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ariac_msgs::srv::PerformQualityCheck_Request(_init);
}

void PerformQualityCheck_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ariac_msgs::srv::PerformQualityCheck_Request *>(message_memory);
  typed_message->~PerformQualityCheck_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PerformQualityCheck_Request_message_member_array[1] = {
  {
    "order_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::srv::PerformQualityCheck_Request, order_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PerformQualityCheck_Request_message_members = {
  "ariac_msgs::srv",  // message namespace
  "PerformQualityCheck_Request",  // message name
  1,  // number of fields
  sizeof(ariac_msgs::srv::PerformQualityCheck_Request),
  PerformQualityCheck_Request_message_member_array,  // message members
  PerformQualityCheck_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PerformQualityCheck_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PerformQualityCheck_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PerformQualityCheck_Request_message_members,
  get_message_typesupport_handle_function,
  &ariac_msgs__srv__PerformQualityCheck_Request__get_type_hash,
  &ariac_msgs__srv__PerformQualityCheck_Request__get_type_description,
  &ariac_msgs__srv__PerformQualityCheck_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ariac_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ariac_msgs::srv::PerformQualityCheck_Request>()
{
  return &::ariac_msgs::srv::rosidl_typesupport_introspection_cpp::PerformQualityCheck_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, srv, PerformQualityCheck_Request)() {
  return &::ariac_msgs::srv::rosidl_typesupport_introspection_cpp::PerformQualityCheck_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ariac_msgs/srv/detail/perform_quality_check__functions.h"
// already included above
// #include "ariac_msgs/srv/detail/perform_quality_check__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ariac_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void PerformQualityCheck_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ariac_msgs::srv::PerformQualityCheck_Response(_init);
}

void PerformQualityCheck_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ariac_msgs::srv::PerformQualityCheck_Response *>(message_memory);
  typed_message->~PerformQualityCheck_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PerformQualityCheck_Response_message_member_array[7] = {
  {
    "valid_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::srv::PerformQualityCheck_Response, valid_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "all_passed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::srv::PerformQualityCheck_Response, all_passed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "incorrect_tray",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::srv::PerformQualityCheck_Response, incorrect_tray),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "quadrant1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::msg::QualityIssue>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::srv::PerformQualityCheck_Response, quadrant1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "quadrant2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::msg::QualityIssue>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::srv::PerformQualityCheck_Response, quadrant2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "quadrant3",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::msg::QualityIssue>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::srv::PerformQualityCheck_Response, quadrant3),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "quadrant4",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::msg::QualityIssue>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::srv::PerformQualityCheck_Response, quadrant4),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PerformQualityCheck_Response_message_members = {
  "ariac_msgs::srv",  // message namespace
  "PerformQualityCheck_Response",  // message name
  7,  // number of fields
  sizeof(ariac_msgs::srv::PerformQualityCheck_Response),
  PerformQualityCheck_Response_message_member_array,  // message members
  PerformQualityCheck_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PerformQualityCheck_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PerformQualityCheck_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PerformQualityCheck_Response_message_members,
  get_message_typesupport_handle_function,
  &ariac_msgs__srv__PerformQualityCheck_Response__get_type_hash,
  &ariac_msgs__srv__PerformQualityCheck_Response__get_type_description,
  &ariac_msgs__srv__PerformQualityCheck_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ariac_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ariac_msgs::srv::PerformQualityCheck_Response>()
{
  return &::ariac_msgs::srv::rosidl_typesupport_introspection_cpp::PerformQualityCheck_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, srv, PerformQualityCheck_Response)() {
  return &::ariac_msgs::srv::rosidl_typesupport_introspection_cpp::PerformQualityCheck_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ariac_msgs/srv/detail/perform_quality_check__functions.h"
// already included above
// #include "ariac_msgs/srv/detail/perform_quality_check__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ariac_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void PerformQualityCheck_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ariac_msgs::srv::PerformQualityCheck_Event(_init);
}

void PerformQualityCheck_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ariac_msgs::srv::PerformQualityCheck_Event *>(message_memory);
  typed_message->~PerformQualityCheck_Event();
}

size_t size_function__PerformQualityCheck_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ariac_msgs::srv::PerformQualityCheck_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PerformQualityCheck_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ariac_msgs::srv::PerformQualityCheck_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__PerformQualityCheck_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ariac_msgs::srv::PerformQualityCheck_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__PerformQualityCheck_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ariac_msgs::srv::PerformQualityCheck_Request *>(
    get_const_function__PerformQualityCheck_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<ariac_msgs::srv::PerformQualityCheck_Request *>(untyped_value);
  value = item;
}

void assign_function__PerformQualityCheck_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ariac_msgs::srv::PerformQualityCheck_Request *>(
    get_function__PerformQualityCheck_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const ariac_msgs::srv::PerformQualityCheck_Request *>(untyped_value);
  item = value;
}

void resize_function__PerformQualityCheck_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ariac_msgs::srv::PerformQualityCheck_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PerformQualityCheck_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ariac_msgs::srv::PerformQualityCheck_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PerformQualityCheck_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ariac_msgs::srv::PerformQualityCheck_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__PerformQualityCheck_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ariac_msgs::srv::PerformQualityCheck_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__PerformQualityCheck_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ariac_msgs::srv::PerformQualityCheck_Response *>(
    get_const_function__PerformQualityCheck_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<ariac_msgs::srv::PerformQualityCheck_Response *>(untyped_value);
  value = item;
}

void assign_function__PerformQualityCheck_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ariac_msgs::srv::PerformQualityCheck_Response *>(
    get_function__PerformQualityCheck_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const ariac_msgs::srv::PerformQualityCheck_Response *>(untyped_value);
  item = value;
}

void resize_function__PerformQualityCheck_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ariac_msgs::srv::PerformQualityCheck_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PerformQualityCheck_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::srv::PerformQualityCheck_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::srv::PerformQualityCheck_Request>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ariac_msgs::srv::PerformQualityCheck_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__PerformQualityCheck_Event__request,  // size() function pointer
    get_const_function__PerformQualityCheck_Event__request,  // get_const(index) function pointer
    get_function__PerformQualityCheck_Event__request,  // get(index) function pointer
    fetch_function__PerformQualityCheck_Event__request,  // fetch(index, &value) function pointer
    assign_function__PerformQualityCheck_Event__request,  // assign(index, value) function pointer
    resize_function__PerformQualityCheck_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::srv::PerformQualityCheck_Response>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ariac_msgs::srv::PerformQualityCheck_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__PerformQualityCheck_Event__response,  // size() function pointer
    get_const_function__PerformQualityCheck_Event__response,  // get_const(index) function pointer
    get_function__PerformQualityCheck_Event__response,  // get(index) function pointer
    fetch_function__PerformQualityCheck_Event__response,  // fetch(index, &value) function pointer
    assign_function__PerformQualityCheck_Event__response,  // assign(index, value) function pointer
    resize_function__PerformQualityCheck_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PerformQualityCheck_Event_message_members = {
  "ariac_msgs::srv",  // message namespace
  "PerformQualityCheck_Event",  // message name
  3,  // number of fields
  sizeof(ariac_msgs::srv::PerformQualityCheck_Event),
  PerformQualityCheck_Event_message_member_array,  // message members
  PerformQualityCheck_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  PerformQualityCheck_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PerformQualityCheck_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PerformQualityCheck_Event_message_members,
  get_message_typesupport_handle_function,
  &ariac_msgs__srv__PerformQualityCheck_Event__get_type_hash,
  &ariac_msgs__srv__PerformQualityCheck_Event__get_type_description,
  &ariac_msgs__srv__PerformQualityCheck_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ariac_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ariac_msgs::srv::PerformQualityCheck_Event>()
{
  return &::ariac_msgs::srv::rosidl_typesupport_introspection_cpp::PerformQualityCheck_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, srv, PerformQualityCheck_Event)() {
  return &::ariac_msgs::srv::rosidl_typesupport_introspection_cpp::PerformQualityCheck_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "ariac_msgs/srv/detail/perform_quality_check__functions.h"
// already included above
// #include "ariac_msgs/srv/detail/perform_quality_check__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace ariac_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers PerformQualityCheck_service_members = {
  "ariac_msgs::srv",  // service namespace
  "PerformQualityCheck",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<ariac_msgs::srv::PerformQualityCheck>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t PerformQualityCheck_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PerformQualityCheck_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::srv::PerformQualityCheck_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::srv::PerformQualityCheck_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::srv::PerformQualityCheck_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ariac_msgs::srv::PerformQualityCheck>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ariac_msgs::srv::PerformQualityCheck>,
  &ariac_msgs__srv__PerformQualityCheck__get_type_hash,
  &ariac_msgs__srv__PerformQualityCheck__get_type_description,
  &ariac_msgs__srv__PerformQualityCheck__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ariac_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ariac_msgs::srv::PerformQualityCheck>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::ariac_msgs::srv::rosidl_typesupport_introspection_cpp::PerformQualityCheck_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ariac_msgs::srv::PerformQualityCheck_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ariac_msgs::srv::PerformQualityCheck_Response
      >()->data
      );

    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ariac_msgs::srv::PerformQualityCheck_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, srv, PerformQualityCheck)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<ariac_msgs::srv::PerformQualityCheck>();
}

#ifdef __cplusplus
}
#endif
