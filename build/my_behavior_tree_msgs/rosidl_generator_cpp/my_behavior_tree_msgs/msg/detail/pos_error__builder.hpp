// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_behavior_tree_msgs:msg/PosError.idl
// generated code does not contain a copyright notice

#ifndef MY_BEHAVIOR_TREE_MSGS__MSG__DETAIL__POS_ERROR__BUILDER_HPP_
#define MY_BEHAVIOR_TREE_MSGS__MSG__DETAIL__POS_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_behavior_tree_msgs/msg/detail/pos_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_behavior_tree_msgs
{

namespace msg
{

namespace builder
{

class Init_PosError_angular_error_to_target
{
public:
  explicit Init_PosError_angular_error_to_target(::my_behavior_tree_msgs::msg::PosError & msg)
  : msg_(msg)
  {}
  ::my_behavior_tree_msgs::msg::PosError angular_error_to_target(::my_behavior_tree_msgs::msg::PosError::_angular_error_to_target_type arg)
  {
    msg_.angular_error_to_target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_behavior_tree_msgs::msg::PosError msg_;
};

class Init_PosError_angular_error
{
public:
  explicit Init_PosError_angular_error(::my_behavior_tree_msgs::msg::PosError & msg)
  : msg_(msg)
  {}
  Init_PosError_angular_error_to_target angular_error(::my_behavior_tree_msgs::msg::PosError::_angular_error_type arg)
  {
    msg_.angular_error = std::move(arg);
    return Init_PosError_angular_error_to_target(msg_);
  }

private:
  ::my_behavior_tree_msgs::msg::PosError msg_;
};

class Init_PosError_linear_error
{
public:
  Init_PosError_linear_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosError_angular_error linear_error(::my_behavior_tree_msgs::msg::PosError::_linear_error_type arg)
  {
    msg_.linear_error = std::move(arg);
    return Init_PosError_angular_error(msg_);
  }

private:
  ::my_behavior_tree_msgs::msg::PosError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_behavior_tree_msgs::msg::PosError>()
{
  return my_behavior_tree_msgs::msg::builder::Init_PosError_linear_error();
}

}  // namespace my_behavior_tree_msgs

#endif  // MY_BEHAVIOR_TREE_MSGS__MSG__DETAIL__POS_ERROR__BUILDER_HPP_
