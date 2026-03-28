#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to mapping_interfaces__srv__GenerateMappingPlan_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GenerateMappingPlan_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub planning_frame: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GenerateMappingPlan_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GenerateMappingPlan_Request {
  type RmwMsg = super::srv::rmw::GenerateMappingPlan_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        planning_frame: msg.planning_frame.as_str().into(),
        radius: msg.radius,
        start_angle_deg: msg.start_angle_deg,
        end_angle_deg: msg.end_angle_deg,
        num_views: msg.num_views,
        height: msg.height,
        face_outward: msg.face_outward,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        planning_frame: msg.planning_frame.as_str().into(),
      radius: msg.radius,
      start_angle_deg: msg.start_angle_deg,
      end_angle_deg: msg.end_angle_deg,
      num_views: msg.num_views,
      height: msg.height,
      face_outward: msg.face_outward,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      planning_frame: msg.planning_frame.to_string(),
      radius: msg.radius,
      start_angle_deg: msg.start_angle_deg,
      end_angle_deg: msg.end_angle_deg,
      num_views: msg.num_views,
      height: msg.height,
      face_outward: msg.face_outward,
    }
  }
}


// Corresponds to mapping_interfaces__srv__GenerateMappingPlan_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GenerateMappingPlan_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub planned_poses: geometry_msgs::msg::PoseArray,

}



impl Default for GenerateMappingPlan_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GenerateMappingPlan_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GenerateMappingPlan_Response {
  type RmwMsg = super::srv::rmw::GenerateMappingPlan_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        planned_poses: geometry_msgs::msg::PoseArray::into_rmw_message(std::borrow::Cow::Owned(msg.planned_poses)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        planned_poses: geometry_msgs::msg::PoseArray::into_rmw_message(std::borrow::Cow::Borrowed(&msg.planned_poses)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      planned_poses: geometry_msgs::msg::PoseArray::from_rmw_message(msg.planned_poses),
    }
  }
}


// Corresponds to mapping_interfaces__srv__ExecuteMappingPlan_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMappingPlan_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub planned_poses: geometry_msgs::msg::PoseArray,


    // This member is not documented.
    #[allow(missing_docs)]
    pub capture_data: bool,

}



impl Default for ExecuteMappingPlan_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ExecuteMappingPlan_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteMappingPlan_Request {
  type RmwMsg = super::srv::rmw::ExecuteMappingPlan_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        planned_poses: geometry_msgs::msg::PoseArray::into_rmw_message(std::borrow::Cow::Owned(msg.planned_poses)).into_owned(),
        capture_data: msg.capture_data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        planned_poses: geometry_msgs::msg::PoseArray::into_rmw_message(std::borrow::Cow::Borrowed(&msg.planned_poses)).into_owned(),
      capture_data: msg.capture_data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      planned_poses: geometry_msgs::msg::PoseArray::from_rmw_message(msg.planned_poses),
      capture_data: msg.capture_data,
    }
  }
}


// Corresponds to mapping_interfaces__srv__ExecuteMappingPlan_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMappingPlan_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub completed_count: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub failed_index: i32,

}



impl Default for ExecuteMappingPlan_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ExecuteMappingPlan_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteMappingPlan_Response {
  type RmwMsg = super::srv::rmw::ExecuteMappingPlan_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        completed_count: msg.completed_count,
        failed_index: msg.failed_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      completed_count: msg.completed_count,
      failed_index: msg.failed_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      completed_count: msg.completed_count,
      failed_index: msg.failed_index,
    }
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


