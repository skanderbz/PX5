// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/GimbalControls.idl
// generated code does not contain a copyright notice

#ifndef PX4__MSG__DETAIL__GIMBAL_CONTROLS__BUILDER_HPP_
#define PX4__MSG__DETAIL__GIMBAL_CONTROLS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/gimbal_controls__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_GimbalControls_control
{
public:
  explicit Init_GimbalControls_control(::px4::msg::GimbalControls & msg)
  : msg_(msg)
  {}
  ::px4::msg::GimbalControls control(::px4::msg::GimbalControls::_control_type arg)
  {
    msg_.control = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::GimbalControls msg_;
};

class Init_GimbalControls_timestamp_sample
{
public:
  explicit Init_GimbalControls_timestamp_sample(::px4::msg::GimbalControls & msg)
  : msg_(msg)
  {}
  Init_GimbalControls_control timestamp_sample(::px4::msg::GimbalControls::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_GimbalControls_control(msg_);
  }

private:
  ::px4::msg::GimbalControls msg_;
};

class Init_GimbalControls_timestamp
{
public:
  Init_GimbalControls_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GimbalControls_timestamp_sample timestamp(::px4::msg::GimbalControls::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_GimbalControls_timestamp_sample(msg_);
  }

private:
  ::px4::msg::GimbalControls msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::GimbalControls>()
{
  return px4::msg::builder::Init_GimbalControls_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__GIMBAL_CONTROLS__BUILDER_HPP_