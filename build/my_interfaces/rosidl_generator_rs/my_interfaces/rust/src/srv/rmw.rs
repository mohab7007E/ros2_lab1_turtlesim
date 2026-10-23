#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__SetSpeeds_Request() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__srv__SetSpeeds_Request__init(msg: *mut SetSpeeds_Request) -> bool;
    fn my_interfaces__srv__SetSpeeds_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetSpeeds_Request>, size: usize) -> bool;
    fn my_interfaces__srv__SetSpeeds_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetSpeeds_Request>);
    fn my_interfaces__srv__SetSpeeds_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetSpeeds_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetSpeeds_Request>) -> bool;
}

// Corresponds to my_interfaces__srv__SetSpeeds_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__srv__SetSpeeds_Request__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__srv__SetSpeeds_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetSpeeds_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__SetSpeeds_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__SetSpeeds_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__SetSpeeds_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetSpeeds_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetSpeeds_Request where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/srv/SetSpeeds_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__SetSpeeds_Request() }
  }
}


#[link(name = "my_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__SetSpeeds_Response() -> *const std::ffi::c_void;
}

#[link(name = "my_interfaces__rosidl_generator_c")]
extern "C" {
    fn my_interfaces__srv__SetSpeeds_Response__init(msg: *mut SetSpeeds_Response) -> bool;
    fn my_interfaces__srv__SetSpeeds_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetSpeeds_Response>, size: usize) -> bool;
    fn my_interfaces__srv__SetSpeeds_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetSpeeds_Response>);
    fn my_interfaces__srv__SetSpeeds_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetSpeeds_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetSpeeds_Response>) -> bool;
}

// Corresponds to my_interfaces__srv__SetSpeeds_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetSpeeds_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetSpeeds_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_interfaces__srv__SetSpeeds_Response__init(&mut msg as *mut _) {
        panic!("Call to my_interfaces__srv__SetSpeeds_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetSpeeds_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__SetSpeeds_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__SetSpeeds_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_interfaces__srv__SetSpeeds_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetSpeeds_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetSpeeds_Response where Self: Sized {
  const TYPE_NAME: &'static str = "my_interfaces/srv/SetSpeeds_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_interfaces__srv__SetSpeeds_Response() }
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


