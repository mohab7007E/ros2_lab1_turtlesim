// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:srv/SetSpeeds.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/srv/set_speeds.hpp"


#ifndef MY_INTERFACES__SRV__DETAIL__SET_SPEEDS__BUILDER_HPP_
#define MY_INTERFACES__SRV__DETAIL__SET_SPEEDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/srv/detail/set_speeds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetSpeeds_Request_max_angular
{
public:
  explicit Init_SetSpeeds_Request_max_angular(::my_interfaces::srv::SetSpeeds_Request & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::SetSpeeds_Request max_angular(::my_interfaces::srv::SetSpeeds_Request::_max_angular_type arg)
  {
    msg_.max_angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::SetSpeeds_Request msg_;
};

class Init_SetSpeeds_Request_max_linear
{
public:
  Init_SetSpeeds_Request_max_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSpeeds_Request_max_angular max_linear(::my_interfaces::srv::SetSpeeds_Request::_max_linear_type arg)
  {
    msg_.max_linear = std::move(arg);
    return Init_SetSpeeds_Request_max_angular(msg_);
  }

private:
  ::my_interfaces::srv::SetSpeeds_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::SetSpeeds_Request>()
{
  return my_interfaces::srv::builder::Init_SetSpeeds_Request_max_linear();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetSpeeds_Response_success
{
public:
  Init_SetSpeeds_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::srv::SetSpeeds_Response success(::my_interfaces::srv::SetSpeeds_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::SetSpeeds_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::SetSpeeds_Response>()
{
  return my_interfaces::srv::builder::Init_SetSpeeds_Response_success();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetSpeeds_Event_response
{
public:
  explicit Init_SetSpeeds_Event_response(::my_interfaces::srv::SetSpeeds_Event & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::SetSpeeds_Event response(::my_interfaces::srv::SetSpeeds_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::SetSpeeds_Event msg_;
};

class Init_SetSpeeds_Event_request
{
public:
  explicit Init_SetSpeeds_Event_request(::my_interfaces::srv::SetSpeeds_Event & msg)
  : msg_(msg)
  {}
  Init_SetSpeeds_Event_response request(::my_interfaces::srv::SetSpeeds_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetSpeeds_Event_response(msg_);
  }

private:
  ::my_interfaces::srv::SetSpeeds_Event msg_;
};

class Init_SetSpeeds_Event_info
{
public:
  Init_SetSpeeds_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSpeeds_Event_request info(::my_interfaces::srv::SetSpeeds_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetSpeeds_Event_request(msg_);
  }

private:
  ::my_interfaces::srv::SetSpeeds_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::SetSpeeds_Event>()
{
  return my_interfaces::srv::builder::Init_SetSpeeds_Event_info();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__SRV__DETAIL__SET_SPEEDS__BUILDER_HPP_
