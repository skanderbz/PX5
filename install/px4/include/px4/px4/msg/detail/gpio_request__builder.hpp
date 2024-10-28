// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/GpioRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4__MSG__DETAIL__GPIO_REQUEST__BUILDER_HPP_
#define PX4__MSG__DETAIL__GPIO_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/gpio_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_GpioRequest_device_id
{
public:
  explicit Init_GpioRequest_device_id(::px4::msg::GpioRequest & msg)
  : msg_(msg)
  {}
  ::px4::msg::GpioRequest device_id(::px4::msg::GpioRequest::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::GpioRequest msg_;
};

class Init_GpioRequest_timestamp
{
public:
  Init_GpioRequest_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpioRequest_device_id timestamp(::px4::msg::GpioRequest::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_GpioRequest_device_id(msg_);
  }

private:
  ::px4::msg::GpioRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::GpioRequest>()
{
  return px4::msg::builder::Init_GpioRequest_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__GPIO_REQUEST__BUILDER_HPP_
