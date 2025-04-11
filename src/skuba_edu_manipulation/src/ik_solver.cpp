/* 
 * IK Solver Node
 * 
 * This node provides an Inverse Kinematics (IK) service for the robotic arm.
 * It uses MoveIt to calculate joint positions for a given end effector pose.
 * Currently handles only arm joints, gripper control will be added later.
 */

#include <memory>
#include <string>
#include <vector>

#include "rclcpp/rclcpp.hpp"
#include "moveit/move_group_interface/move_group_interface.h"
#include "moveit/planning_scene_interface/planning_scene_interface.h"
#include "skuba_msgs/srv/ik_request.hpp"
#include "geometry_msgs/msg/pose.hpp"

class IKSolver : public rclcpp::Node {
public:
    IKSolver() : Node("ik_solver") {
        /* Initialize IK solver service */
        service_ = this->create_service<skuba_msgs::srv::IKRequest>(
            "ik_solver",
            std::bind(&IKSolver::handle_ik_request, this,
                     std::placeholders::_1, std::placeholders::_2));

        RCLCPP_INFO(this->get_logger(), "IK Solver is ready.");
    }

private:
    rclcpp::Service<skuba_msgs::srv::IKRequest>::SharedPtr service_;

    /* 
     * Handle IK request service call
     * 
     * This function:
     * 1. Initializes MoveIt interface
     * 2. Sets target pose and end effector
     * 3. Calculates IK solution for arm joints
     * 4. Returns arm joint positions
     */
    void handle_ik_request(
        const std::shared_ptr<skuba_msgs::srv::IKRequest::Request> request,
        std::shared_ptr<skuba_msgs::srv::IKRequest::Response> response) {
        try {
            /* Initialize MoveIt interface */
            auto move_group_interface = moveit::planning_interface::MoveGroupInterface(
                shared_from_this(), request->group_name);
            
            /* Set end effector link */
            move_group_interface.setEndEffectorLink(request->end_effector_link);

            /* Get current joint values */
            std::vector<double> joint_values = move_group_interface.getCurrentJointValues();

            /* Set target pose */
            geometry_msgs::msg::Pose target_pose = request->target_pose;
            move_group_interface.setPoseTarget(target_pose);

            /* Plan motion */
            moveit::planning_interface::MoveGroupInterface::Plan plan;
            bool success = (move_group_interface.plan(plan) == moveit::core::MoveItErrorCode::SUCCESS);
            
            if (success) {
                /* Get planned joint values */
                joint_values = plan.trajectory_.joint_trajectory.points.back().positions;
                response->joint_positions.assign(joint_values.begin(), joint_values.end());
                response->success = true;
                response->message = "IK solution found";
            } else {
                response->success = false;
                response->message = "Failed to find IK solution";
            }
        } catch (const std::exception& e) {
            response->success = false;
            response->message = std::string("Error: ") + e.what();
        }
    }
};

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<IKSolver>());
    rclcpp::shutdown();
    return 0;
} 
