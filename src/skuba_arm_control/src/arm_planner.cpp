#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <moveit_msgs/msg/display_robot_state.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <trajectory_msgs/msg/joint_trajectory.hpp>
#include <std_msgs/msg/string.hpp>

class ArmPlanner : public rclcpp::Node
{
public:
  ArmPlanner() : Node("arm_planner")
  {
    // Initialize MoveIt
    move_group_interface_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(
      std::shared_ptr<rclcpp::Node>(this, [](auto*) {}), "arm");
    
    // Create publisher for planned trajectory
    trajectory_pub_ = this->create_publisher<trajectory_msgs::msg::JointTrajectory>(
      "/planned_trajectory", 10);

    // Create subscriber for pose goal
    pose_sub_ = this->create_subscription<geometry_msgs::msg::PoseStamped>(
      "/arm_pose_goal", 10,
      std::bind(&ArmPlanner::poseCallback, this, std::placeholders::_1));

    RCLCPP_INFO(this->get_logger(), "Arm planner initialized");
  }

private:
  void poseCallback(const geometry_msgs::msg::PoseStamped::SharedPtr msg)
  {
    // Set the target pose
    move_group_interface_->setPoseTarget(*msg);

    // Plan the motion
    moveit::planning_interface::MoveGroupInterface::Plan plan;
    bool success = (move_group_interface_->plan(plan) == moveit::core::MoveItErrorCode::SUCCESS);

    if (success)
    {
      RCLCPP_INFO(this->get_logger(), "Planning successful");
      
      // Publish the planned trajectory
      trajectory_pub_->publish(plan.trajectory_.joint_trajectory);
    }
    else
    {
      RCLCPP_ERROR(this->get_logger(), "Planning failed");
    }
  }

  std::shared_ptr<moveit::planning_interface::MoveGroupInterface> move_group_interface_;
  rclcpp::Publisher<trajectory_msgs::msg::JointTrajectory>::SharedPtr trajectory_pub_;
  rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr pose_sub_;
};

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<ArmPlanner>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
} 