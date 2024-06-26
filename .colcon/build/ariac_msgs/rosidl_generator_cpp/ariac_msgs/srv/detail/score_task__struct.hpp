// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:srv/ScoreTask.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__SCORE_TASK__STRUCT_HPP_
#define ARIAC_MSGS__SRV__DETAIL__SCORE_TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ariac_msgs__srv__ScoreTask_Request __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__srv__ScoreTask_Request __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ScoreTask_Request_
{
  using Type = ScoreTask_Request_<ContainerAllocator>;

  explicit ScoreTask_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order_id = "";
    }
  }

  explicit ScoreTask_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : order_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order_id = "";
    }
  }

  // field types and members
  using _order_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _order_id_type order_id;

  // setters for named parameter idiom
  Type & set__order_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->order_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::srv::ScoreTask_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::srv::ScoreTask_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::srv::ScoreTask_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::srv::ScoreTask_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::ScoreTask_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::ScoreTask_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::ScoreTask_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::ScoreTask_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::srv::ScoreTask_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::srv::ScoreTask_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__srv__ScoreTask_Request
    std::shared_ptr<ariac_msgs::srv::ScoreTask_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__srv__ScoreTask_Request
    std::shared_ptr<ariac_msgs::srv::ScoreTask_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScoreTask_Request_ & other) const
  {
    if (this->order_id != other.order_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScoreTask_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScoreTask_Request_

// alias to use template instance with default allocator
using ScoreTask_Request =
  ariac_msgs::srv::ScoreTask_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ariac_msgs


#ifndef _WIN32
# define DEPRECATED__ariac_msgs__srv__ScoreTask_Response __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__srv__ScoreTask_Response __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ScoreTask_Response_
{
  using Type = ScoreTask_Response_<ContainerAllocator>;

  explicit ScoreTask_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->score = 0.0;
    }
  }

  explicit ScoreTask_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->score = 0.0;
    }
  }

  // field types and members
  using _score_type =
    double;
  _score_type score;

  // setters for named parameter idiom
  Type & set__score(
    const double & _arg)
  {
    this->score = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::srv::ScoreTask_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::srv::ScoreTask_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::srv::ScoreTask_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::srv::ScoreTask_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::ScoreTask_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::ScoreTask_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::ScoreTask_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::ScoreTask_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::srv::ScoreTask_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::srv::ScoreTask_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__srv__ScoreTask_Response
    std::shared_ptr<ariac_msgs::srv::ScoreTask_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__srv__ScoreTask_Response
    std::shared_ptr<ariac_msgs::srv::ScoreTask_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScoreTask_Response_ & other) const
  {
    if (this->score != other.score) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScoreTask_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScoreTask_Response_

// alias to use template instance with default allocator
using ScoreTask_Response =
  ariac_msgs::srv::ScoreTask_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ariac_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ariac_msgs__srv__ScoreTask_Event __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__srv__ScoreTask_Event __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ScoreTask_Event_
{
  using Type = ScoreTask_Event_<ContainerAllocator>;

  explicit ScoreTask_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ScoreTask_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ariac_msgs::srv::ScoreTask_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::srv::ScoreTask_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ariac_msgs::srv::ScoreTask_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::srv::ScoreTask_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ariac_msgs::srv::ScoreTask_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::srv::ScoreTask_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ariac_msgs::srv::ScoreTask_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::srv::ScoreTask_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::srv::ScoreTask_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::srv::ScoreTask_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::srv::ScoreTask_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::srv::ScoreTask_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::ScoreTask_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::ScoreTask_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::ScoreTask_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::ScoreTask_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::srv::ScoreTask_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::srv::ScoreTask_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__srv__ScoreTask_Event
    std::shared_ptr<ariac_msgs::srv::ScoreTask_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__srv__ScoreTask_Event
    std::shared_ptr<ariac_msgs::srv::ScoreTask_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScoreTask_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScoreTask_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScoreTask_Event_

// alias to use template instance with default allocator
using ScoreTask_Event =
  ariac_msgs::srv::ScoreTask_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ariac_msgs

namespace ariac_msgs
{

namespace srv
{

struct ScoreTask
{
  using Request = ariac_msgs::srv::ScoreTask_Request;
  using Response = ariac_msgs::srv::ScoreTask_Response;
  using Event = ariac_msgs::srv::ScoreTask_Event;
};

}  // namespace srv

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__SRV__DETAIL__SCORE_TASK__STRUCT_HPP_
