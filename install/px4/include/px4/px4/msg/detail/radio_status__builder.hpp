// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4:msg/RadioStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4__MSG__DETAIL__RADIO_STATUS__BUILDER_HPP_
#define PX4__MSG__DETAIL__RADIO_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4/msg/detail/radio_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4
{

namespace msg
{

namespace builder
{

class Init_RadioStatus_fix
{
public:
  explicit Init_RadioStatus_fix(::px4::msg::RadioStatus & msg)
  : msg_(msg)
  {}
  ::px4::msg::RadioStatus fix(::px4::msg::RadioStatus::_fix_type arg)
  {
    msg_.fix = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4::msg::RadioStatus msg_;
};

class Init_RadioStatus_rxerrors
{
public:
  explicit Init_RadioStatus_rxerrors(::px4::msg::RadioStatus & msg)
  : msg_(msg)
  {}
  Init_RadioStatus_fix rxerrors(::px4::msg::RadioStatus::_rxerrors_type arg)
  {
    msg_.rxerrors = std::move(arg);
    return Init_RadioStatus_fix(msg_);
  }

private:
  ::px4::msg::RadioStatus msg_;
};

class Init_RadioStatus_remote_noise
{
public:
  explicit Init_RadioStatus_remote_noise(::px4::msg::RadioStatus & msg)
  : msg_(msg)
  {}
  Init_RadioStatus_rxerrors remote_noise(::px4::msg::RadioStatus::_remote_noise_type arg)
  {
    msg_.remote_noise = std::move(arg);
    return Init_RadioStatus_rxerrors(msg_);
  }

private:
  ::px4::msg::RadioStatus msg_;
};

class Init_RadioStatus_noise
{
public:
  explicit Init_RadioStatus_noise(::px4::msg::RadioStatus & msg)
  : msg_(msg)
  {}
  Init_RadioStatus_remote_noise noise(::px4::msg::RadioStatus::_noise_type arg)
  {
    msg_.noise = std::move(arg);
    return Init_RadioStatus_remote_noise(msg_);
  }

private:
  ::px4::msg::RadioStatus msg_;
};

class Init_RadioStatus_txbuf
{
public:
  explicit Init_RadioStatus_txbuf(::px4::msg::RadioStatus & msg)
  : msg_(msg)
  {}
  Init_RadioStatus_noise txbuf(::px4::msg::RadioStatus::_txbuf_type arg)
  {
    msg_.txbuf = std::move(arg);
    return Init_RadioStatus_noise(msg_);
  }

private:
  ::px4::msg::RadioStatus msg_;
};

class Init_RadioStatus_remote_rssi
{
public:
  explicit Init_RadioStatus_remote_rssi(::px4::msg::RadioStatus & msg)
  : msg_(msg)
  {}
  Init_RadioStatus_txbuf remote_rssi(::px4::msg::RadioStatus::_remote_rssi_type arg)
  {
    msg_.remote_rssi = std::move(arg);
    return Init_RadioStatus_txbuf(msg_);
  }

private:
  ::px4::msg::RadioStatus msg_;
};

class Init_RadioStatus_rssi
{
public:
  explicit Init_RadioStatus_rssi(::px4::msg::RadioStatus & msg)
  : msg_(msg)
  {}
  Init_RadioStatus_remote_rssi rssi(::px4::msg::RadioStatus::_rssi_type arg)
  {
    msg_.rssi = std::move(arg);
    return Init_RadioStatus_remote_rssi(msg_);
  }

private:
  ::px4::msg::RadioStatus msg_;
};

class Init_RadioStatus_timestamp
{
public:
  Init_RadioStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadioStatus_rssi timestamp(::px4::msg::RadioStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RadioStatus_rssi(msg_);
  }

private:
  ::px4::msg::RadioStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4::msg::RadioStatus>()
{
  return px4::msg::builder::Init_RadioStatus_timestamp();
}

}  // namespace px4

#endif  // PX4__MSG__DETAIL__RADIO_STATUS__BUILDER_HPP_