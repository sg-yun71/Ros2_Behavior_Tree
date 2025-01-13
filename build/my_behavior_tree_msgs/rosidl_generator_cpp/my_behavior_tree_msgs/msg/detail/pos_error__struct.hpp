// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_behavior_tree_msgs:msg/PosError.idl
// generated code does not contain a copyright notice

#ifndef MY_BEHAVIOR_TREE_MSGS__MSG__DETAIL__POS_ERROR__STRUCT_HPP_
#define MY_BEHAVIOR_TREE_MSGS__MSG__DETAIL__POS_ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_behavior_tree_msgs__msg__PosError __attribute__((deprecated))
#else
# define DEPRECATED__my_behavior_tree_msgs__msg__PosError __declspec(deprecated)
#endif

namespace my_behavior_tree_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PosError_
{
  using Type = PosError_<ContainerAllocator>;

  explicit PosError_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_error = 0.0f;
      this->angular_error = 0.0f;
      this->angular_error_to_target = 0.0f;
    }
  }

  explicit PosError_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_error = 0.0f;
      this->angular_error = 0.0f;
      this->angular_error_to_target = 0.0f;
    }
  }

  // field types and members
  using _linear_error_type =
    float;
  _linear_error_type linear_error;
  using _angular_error_type =
    float;
  _angular_error_type angular_error;
  using _angular_error_to_target_type =
    float;
  _angular_error_to_target_type angular_error_to_target;

  // setters for named parameter idiom
  Type & set__linear_error(
    const float & _arg)
  {
    this->linear_error = _arg;
    return *this;
  }
  Type & set__angular_error(
    const float & _arg)
  {
    this->angular_error = _arg;
    return *this;
  }
  Type & set__angular_error_to_target(
    const float & _arg)
  {
    this->angular_error_to_target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_behavior_tree_msgs::msg::PosError_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_behavior_tree_msgs::msg::PosError_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_behavior_tree_msgs::msg::PosError_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_behavior_tree_msgs::msg::PosError_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_behavior_tree_msgs::msg::PosError_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_behavior_tree_msgs::msg::PosError_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_behavior_tree_msgs::msg::PosError_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_behavior_tree_msgs::msg::PosError_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_behavior_tree_msgs::msg::PosError_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_behavior_tree_msgs::msg::PosError_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_behavior_tree_msgs__msg__PosError
    std::shared_ptr<my_behavior_tree_msgs::msg::PosError_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_behavior_tree_msgs__msg__PosError
    std::shared_ptr<my_behavior_tree_msgs::msg::PosError_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PosError_ & other) const
  {
    if (this->linear_error != other.linear_error) {
      return false;
    }
    if (this->angular_error != other.angular_error) {
      return false;
    }
    if (this->angular_error_to_target != other.angular_error_to_target) {
      return false;
    }
    return true;
  }
  bool operator!=(const PosError_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PosError_

// alias to use template instance with default allocator
using PosError =
  my_behavior_tree_msgs::msg::PosError_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_behavior_tree_msgs

#endif  // MY_BEHAVIOR_TREE_MSGS__MSG__DETAIL__POS_ERROR__STRUCT_HPP_
