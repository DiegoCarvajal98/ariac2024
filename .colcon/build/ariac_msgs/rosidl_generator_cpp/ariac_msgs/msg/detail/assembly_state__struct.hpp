// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/AssemblyState.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_STATE__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__AssemblyState __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__AssemblyState __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AssemblyState_
{
  using Type = AssemblyState_<ContainerAllocator>;

  explicit AssemblyState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_attached = false;
      this->pump_attached = false;
      this->regulator_attached = false;
      this->sensor_attached = false;
    }
  }

  explicit AssemblyState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_attached = false;
      this->pump_attached = false;
      this->regulator_attached = false;
      this->sensor_attached = false;
    }
  }

  // field types and members
  using _battery_attached_type =
    bool;
  _battery_attached_type battery_attached;
  using _pump_attached_type =
    bool;
  _pump_attached_type pump_attached;
  using _regulator_attached_type =
    bool;
  _regulator_attached_type regulator_attached;
  using _sensor_attached_type =
    bool;
  _sensor_attached_type sensor_attached;

  // setters for named parameter idiom
  Type & set__battery_attached(
    const bool & _arg)
  {
    this->battery_attached = _arg;
    return *this;
  }
  Type & set__pump_attached(
    const bool & _arg)
  {
    this->pump_attached = _arg;
    return *this;
  }
  Type & set__regulator_attached(
    const bool & _arg)
  {
    this->regulator_attached = _arg;
    return *this;
  }
  Type & set__sensor_attached(
    const bool & _arg)
  {
    this->sensor_attached = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::AssemblyState_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::AssemblyState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::AssemblyState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::AssemblyState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::AssemblyState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::AssemblyState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::AssemblyState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::AssemblyState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::AssemblyState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::AssemblyState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__AssemblyState
    std::shared_ptr<ariac_msgs::msg::AssemblyState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__AssemblyState
    std::shared_ptr<ariac_msgs::msg::AssemblyState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AssemblyState_ & other) const
  {
    if (this->battery_attached != other.battery_attached) {
      return false;
    }
    if (this->pump_attached != other.pump_attached) {
      return false;
    }
    if (this->regulator_attached != other.regulator_attached) {
      return false;
    }
    if (this->sensor_attached != other.sensor_attached) {
      return false;
    }
    return true;
  }
  bool operator!=(const AssemblyState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AssemblyState_

// alias to use template instance with default allocator
using AssemblyState =
  ariac_msgs::msg::AssemblyState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_STATE__STRUCT_HPP_
