#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.hpp>
#include <thread>

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);

  // auto node = rclcpp::Node::make_shared("ur3_move_demo");
  rclcpp::NodeOptions node_options;
  node_options.automatically_declare_parameters_from_overrides(true);
  auto node = rclcpp::Node::make_shared("ur3_move_demo", node_options);

  // spin in background
  rclcpp::executors::SingleThreadedExecutor executor;
  executor.add_node(node);
  std::thread spinner([&executor]() { executor.spin(); });

  // MoveIt interface
  moveit::planning_interface::MoveGroupInterface move_group(node, "ur_manipulator");

  // sync with current robot state
  move_group.setStartStateToCurrentState();

  // Joint goal
  std::vector<double> joint_goal = {0.0, -1.57, 1.57, -1.57, -1.57, 0.0};
  move_group.setJointValueTarget(joint_goal);

  moveit::planning_interface::MoveGroupInterface::Plan plan;

  RCLCPP_INFO(node->get_logger(), "Planning...");
  bool success = (move_group.plan(plan) == moveit::core::MoveItErrorCode::SUCCESS);

  if (success)
  {
    RCLCPP_INFO(node->get_logger(), "Executing...");
    move_group.execute(plan);
  }
  else
  {
    RCLCPP_ERROR(node->get_logger(), "Planning failed!");
  }

  rclcpp::shutdown();
  spinner.join();
  return 0;
}