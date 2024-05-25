// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ariac_msgs:srv/ConveyorBeltControl.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ariac_msgs/srv/detail/conveyor_belt_control__functions.h"
#include "ariac_msgs/srv/detail/conveyor_belt_control__struct.hpp"
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

void ConveyorBeltControl_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ariac_msgs::srv::ConveyorBeltControl_Request(_init);
}

void ConveyorBeltControl_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ariac_msgs::srv::ConveyorBeltControl_Request *>(message_memory);
  typed_message->~ConveyorBeltControl_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConveyorBeltControl_Request_message_member_array[1] = {
  {
    "power",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::srv::ConveyorBeltControl_Request, power),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConveyorBeltControl_Request_message_members = {
  "ariac_msgs::srv",  // message namespace
  "ConveyorBeltControl_Request",  // message name
  1,  // number of fields
  sizeof(ariac_msgs::srv::ConveyorBeltControl_Request),
  ConveyorBeltControl_Request_message_member_array,  // message members
  ConveyorBeltControl_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ConveyorBeltControl_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConveyorBeltControl_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConveyorBeltControl_Request_message_members,
  get_message_typesupport_handle_function,
  &ariac_msgs__srv__ConveyorBeltControl_Request__get_type_hash,
  &ariac_msgs__srv__ConveyorBeltControl_Request__get_type_description,
  &ariac_msgs__srv__ConveyorBeltControl_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ariac_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ariac_msgs::srv::ConveyorBeltControl_Request>()
{
  return &::ariac_msgs::srv::rosidl_typesupport_introspection_cpp::ConveyorBeltControl_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, srv, ConveyorBeltControl_Request)() {
  return &::ariac_msgs::srv::rosidl_typesupport_introspection_cpp::ConveyorBeltControl_Request_message_type_support_handle;
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
// #include "ariac_msgs/srv/detail/conveyor_belt_control__functions.h"
// already included above
// #include "ariac_msgs/srv/detail/conveyor_belt_control__struct.hpp"
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

void ConveyorBeltControl_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ariac_msgs::srv::ConveyorBeltControl_Response(_init);
}

void ConveyorBeltControl_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ariac_msgs::srv::ConveyorBeltControl_Response *>(message_memory);
  typed_message->~ConveyorBeltControl_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConveyorBeltControl_Response_message_member_array[1] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::srv::ConveyorBeltControl_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConveyorBeltControl_Response_message_members = {
  "ariac_msgs::srv",  // message namespace
  "ConveyorBeltControl_Response",  // message name
  1,  // number of fields
  sizeof(ariac_msgs::srv::ConveyorBeltControl_Response),
  ConveyorBeltControl_Response_message_member_array,  // message members
  ConveyorBeltControl_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ConveyorBeltControl_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConveyorBeltControl_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConveyorBeltControl_Response_message_members,
  get_message_typesupport_handle_function,
  &ariac_msgs__srv__ConveyorBeltControl_Response__get_type_hash,
  &ariac_msgs__srv__ConveyorBeltControl_Response__get_type_description,
  &ariac_msgs__srv__ConveyorBeltControl_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ariac_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ariac_msgs::srv::ConveyorBeltControl_Response>()
{
  return &::ariac_msgs::srv::rosidl_typesupport_introspection_cpp::ConveyorBeltControl_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, srv, ConveyorBeltControl_Response)() {
  return &::ariac_msgs::srv::rosidl_typesupport_introspection_cpp::ConveyorBeltControl_Response_message_type_support_handle;
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
// #include "ariac_msgs/srv/detail/conveyor_belt_control__functions.h"
// already included above
// #include "ariac_msgs/srv/detail/conveyor_belt_control__struct.hpp"
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

void ConveyorBeltControl_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ariac_msgs::srv::ConveyorBeltControl_Event(_init);
}

void ConveyorBeltControl_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ariac_msgs::srv::ConveyorBeltControl_Event *>(message_memory);
  typed_message->~ConveyorBeltControl_Event();
}

size_t size_function__ConveyorBeltControl_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ariac_msgs::srv::ConveyorBeltControl_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConveyorBeltControl_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ariac_msgs::srv::ConveyorBeltControl_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__ConveyorBeltControl_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ariac_msgs::srv::ConveyorBeltControl_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__ConveyorBeltControl_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ariac_msgs::srv::ConveyorBeltControl_Request *>(
    get_const_function__ConveyorBeltControl_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<ariac_msgs::srv::ConveyorBeltControl_Request *>(untyped_value);
  value = item;
}

void assign_function__ConveyorBeltControl_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ariac_msgs::srv::ConveyorBeltControl_Request *>(
    get_function__ConveyorBeltControl_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const ariac_msgs::srv::ConveyorBeltControl_Request *>(untyped_value);
  item = value;
}

void resize_function__ConveyorBeltControl_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ariac_msgs::srv::ConveyorBeltControl_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ConveyorBeltControl_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ariac_msgs::srv::ConveyorBeltControl_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConveyorBeltControl_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ariac_msgs::srv::ConveyorBeltControl_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__ConveyorBeltControl_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ariac_msgs::srv::ConveyorBeltControl_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__ConveyorBeltControl_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ariac_msgs::srv::ConveyorBeltControl_Response *>(
    get_const_function__ConveyorBeltControl_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<ariac_msgs::srv::ConveyorBeltControl_Response *>(untyped_value);
  value = item;
}

void assign_function__ConveyorBeltControl_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ariac_msgs::srv::ConveyorBeltControl_Response *>(
    get_function__ConveyorBeltControl_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const ariac_msgs::srv::ConveyorBeltControl_Response *>(untyped_value);
  item = value;
}

void resize_function__ConveyorBeltControl_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ariac_msgs::srv::ConveyorBeltControl_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConveyorBeltControl_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::srv::ConveyorBeltControl_Event, info),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::srv::ConveyorBeltControl_Request>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ariac_msgs::srv::ConveyorBeltControl_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConveyorBeltControl_Event__request,  // size() function pointer
    get_const_function__ConveyorBeltControl_Event__request,  // get_const(index) function pointer
    get_function__ConveyorBeltControl_Event__request,  // get(index) function pointer
    fetch_function__ConveyorBeltControl_Event__request,  // fetch(index, &value) function pointer
    assign_function__ConveyorBeltControl_Event__request,  // assign(index, value) function pointer
    resize_function__ConveyorBeltControl_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::srv::ConveyorBeltControl_Response>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ariac_msgs::srv::ConveyorBeltControl_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConveyorBeltControl_Event__response,  // size() function pointer
    get_const_function__ConveyorBeltControl_Event__response,  // get_const(index) function pointer
    get_function__ConveyorBeltControl_Event__response,  // get(index) function pointer
    fetch_function__ConveyorBeltControl_Event__response,  // fetch(index, &value) function pointer
    assign_function__ConveyorBeltControl_Event__response,  // assign(index, value) function pointer
    resize_function__ConveyorBeltControl_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConveyorBeltControl_Event_message_members = {
  "ariac_msgs::srv",  // message namespace
  "ConveyorBeltControl_Event",  // message name
  3,  // number of fields
  sizeof(ariac_msgs::srv::ConveyorBeltControl_Event),
  ConveyorBeltControl_Event_message_member_array,  // message members
  ConveyorBeltControl_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ConveyorBeltControl_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConveyorBeltControl_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConveyorBeltControl_Event_message_members,
  get_message_typesupport_handle_function,
  &ariac_msgs__srv__ConveyorBeltControl_Event__get_type_hash,
  &ariac_msgs__srv__ConveyorBeltControl_Event__get_type_description,
  &ariac_msgs__srv__ConveyorBeltControl_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ariac_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ariac_msgs::srv::ConveyorBeltControl_Event>()
{
  return &::ariac_msgs::srv::rosidl_typesupport_introspection_cpp::ConveyorBeltControl_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, srv, ConveyorBeltControl_Event)() {
  return &::ariac_msgs::srv::rosidl_typesupport_introspection_cpp::ConveyorBeltControl_Event_message_type_support_handle;
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
// #include "ariac_msgs/srv/detail/conveyor_belt_control__functions.h"
// already included above
// #include "ariac_msgs/srv/detail/conveyor_belt_control__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ConveyorBeltControl_service_members = {
  "ariac_msgs::srv",  // service namespace
  "ConveyorBeltControl",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<ariac_msgs::srv::ConveyorBeltControl>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t ConveyorBeltControl_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConveyorBeltControl_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::srv::ConveyorBeltControl_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::srv::ConveyorBeltControl_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::srv::ConveyorBeltControl_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ariac_msgs::srv::ConveyorBeltControl>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ariac_msgs::srv::ConveyorBeltControl>,
  &ariac_msgs__srv__ConveyorBeltControl__get_type_hash,
  &ariac_msgs__srv__ConveyorBeltControl__get_type_description,
  &ariac_msgs__srv__ConveyorBeltControl__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ariac_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ariac_msgs::srv::ConveyorBeltControl>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::ariac_msgs::srv::rosidl_typesupport_introspection_cpp::ConveyorBeltControl_service_type_support_handle;
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
        ::ariac_msgs::srv::ConveyorBeltControl_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ariac_msgs::srv::ConveyorBeltControl_Response
      >()->data
      );

    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ariac_msgs::srv::ConveyorBeltControl_Event
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, srv, ConveyorBeltControl)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<ariac_msgs::srv::ConveyorBeltControl>();
}

#ifdef __cplusplus
}
#endif
