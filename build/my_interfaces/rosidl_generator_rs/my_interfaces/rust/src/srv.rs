#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to my_interfaces__srv__SetSpeeds_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSpeeds_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub max_linear: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_angular: f64,

}



impl Default for SetSpeeds_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetSpeeds_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetSpeeds_Request {
  type RmwMsg = super::srv::rmw::SetSpeeds_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        max_linear: msg.max_linear,
        max_angular: msg.max_angular,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      max_linear: msg.max_linear,
      max_angular: msg.max_angular,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      max_linear: msg.max_linear,
      max_angular: msg.max_angular,
    }
  }
}


// Corresponds to my_interfaces__srv__SetSpeeds_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSpeeds_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetSpeeds_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetSpeeds_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetSpeeds_Response {
  type RmwMsg = super::srv::rmw::SetSpeeds_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}






#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__srv__SetSpeeds() -> *const std::ffi::c_void;
}

// Corresponds to my_interfaces__srv__SetSpeeds
#[allow(missing_docs, non_camel_case_types)]
pub struct SetSpeeds;

impl rosidl_runtime_rs::Service for SetSpeeds {
    type Request = SetSpeeds_Request;
    type Response = SetSpeeds_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__my_interfaces__srv__SetSpeeds() }
    }
}


