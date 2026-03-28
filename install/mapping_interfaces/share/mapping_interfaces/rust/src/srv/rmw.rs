#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "mapping_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mapping_interfaces__srv__GenerateMappingPlan_Request() -> *const std::ffi::c_void;
}

#[link(name = "mapping_interfaces__rosidl_generator_c")]
extern "C" {
    fn mapping_interfaces__srv__GenerateMappingPlan_Request__init(msg: *mut GenerateMappingPlan_Request) -> bool;
    fn mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GenerateMappingPlan_Request>, size: usize) -> bool;
    fn mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GenerateMappingPlan_Request>);
    fn mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GenerateMappingPlan_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GenerateMappingPlan_Request>) -> bool;
}

// Corresponds to mapping_interfaces__srv__GenerateMappingPlan_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GenerateMappingPlan_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub planning_frame: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub radius: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start_angle_deg: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub end_angle_deg: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub num_views: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub height: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub face_outward: bool,

}



impl Default for GenerateMappingPlan_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mapping_interfaces__srv__GenerateMappingPlan_Request__init(&mut msg as *mut _) {
        panic!("Call to mapping_interfaces__srv__GenerateMappingPlan_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GenerateMappingPlan_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GenerateMappingPlan_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GenerateMappingPlan_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mapping_interfaces/srv/GenerateMappingPlan_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mapping_interfaces__srv__GenerateMappingPlan_Request() }
  }
}


#[link(name = "mapping_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mapping_interfaces__srv__GenerateMappingPlan_Response() -> *const std::ffi::c_void;
}

#[link(name = "mapping_interfaces__rosidl_generator_c")]
extern "C" {
    fn mapping_interfaces__srv__GenerateMappingPlan_Response__init(msg: *mut GenerateMappingPlan_Response) -> bool;
    fn mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GenerateMappingPlan_Response>, size: usize) -> bool;
    fn mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GenerateMappingPlan_Response>);
    fn mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GenerateMappingPlan_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GenerateMappingPlan_Response>) -> bool;
}

// Corresponds to mapping_interfaces__srv__GenerateMappingPlan_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GenerateMappingPlan_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub planned_poses: geometry_msgs::msg::rmw::PoseArray,

}



impl Default for GenerateMappingPlan_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mapping_interfaces__srv__GenerateMappingPlan_Response__init(&mut msg as *mut _) {
        panic!("Call to mapping_interfaces__srv__GenerateMappingPlan_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GenerateMappingPlan_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GenerateMappingPlan_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GenerateMappingPlan_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mapping_interfaces/srv/GenerateMappingPlan_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mapping_interfaces__srv__GenerateMappingPlan_Response() }
  }
}


#[link(name = "mapping_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mapping_interfaces__srv__ExecuteMappingPlan_Request() -> *const std::ffi::c_void;
}

#[link(name = "mapping_interfaces__rosidl_generator_c")]
extern "C" {
    fn mapping_interfaces__srv__ExecuteMappingPlan_Request__init(msg: *mut ExecuteMappingPlan_Request) -> bool;
    fn mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMappingPlan_Request>, size: usize) -> bool;
    fn mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMappingPlan_Request>);
    fn mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteMappingPlan_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteMappingPlan_Request>) -> bool;
}

// Corresponds to mapping_interfaces__srv__ExecuteMappingPlan_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMappingPlan_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub planned_poses: geometry_msgs::msg::rmw::PoseArray,


    // This member is not documented.
    #[allow(missing_docs)]
    pub capture_data: bool,

}



impl Default for ExecuteMappingPlan_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mapping_interfaces__srv__ExecuteMappingPlan_Request__init(&mut msg as *mut _) {
        panic!("Call to mapping_interfaces__srv__ExecuteMappingPlan_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteMappingPlan_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteMappingPlan_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteMappingPlan_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mapping_interfaces/srv/ExecuteMappingPlan_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mapping_interfaces__srv__ExecuteMappingPlan_Request() }
  }
}


#[link(name = "mapping_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mapping_interfaces__srv__ExecuteMappingPlan_Response() -> *const std::ffi::c_void;
}

#[link(name = "mapping_interfaces__rosidl_generator_c")]
extern "C" {
    fn mapping_interfaces__srv__ExecuteMappingPlan_Response__init(msg: *mut ExecuteMappingPlan_Response) -> bool;
    fn mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMappingPlan_Response>, size: usize) -> bool;
    fn mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMappingPlan_Response>);
    fn mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteMappingPlan_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteMappingPlan_Response>) -> bool;
}

// Corresponds to mapping_interfaces__srv__ExecuteMappingPlan_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMappingPlan_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub completed_count: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub failed_index: i32,

}



impl Default for ExecuteMappingPlan_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mapping_interfaces__srv__ExecuteMappingPlan_Response__init(&mut msg as *mut _) {
        panic!("Call to mapping_interfaces__srv__ExecuteMappingPlan_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteMappingPlan_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteMappingPlan_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteMappingPlan_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mapping_interfaces/srv/ExecuteMappingPlan_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mapping_interfaces__srv__ExecuteMappingPlan_Response() }
  }
}






#[link(name = "mapping_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mapping_interfaces__srv__GenerateMappingPlan() -> *const std::ffi::c_void;
}

// Corresponds to mapping_interfaces__srv__GenerateMappingPlan
#[allow(missing_docs, non_camel_case_types)]
pub struct GenerateMappingPlan;

impl rosidl_runtime_rs::Service for GenerateMappingPlan {
    type Request = GenerateMappingPlan_Request;
    type Response = GenerateMappingPlan_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mapping_interfaces__srv__GenerateMappingPlan() }
    }
}




#[link(name = "mapping_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mapping_interfaces__srv__ExecuteMappingPlan() -> *const std::ffi::c_void;
}

// Corresponds to mapping_interfaces__srv__ExecuteMappingPlan
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteMappingPlan;

impl rosidl_runtime_rs::Service for ExecuteMappingPlan {
    type Request = ExecuteMappingPlan_Request;
    type Response = ExecuteMappingPlan_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mapping_interfaces__srv__ExecuteMappingPlan() }
    }
}


