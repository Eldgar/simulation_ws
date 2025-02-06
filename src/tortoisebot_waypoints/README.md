## TortoiseBot Waypoints Testing

## Overview
This package provides test cases for verifying the functionality of the Waypoints Action Server in ROS1. The tests ensure that the robot reaches the target waypoints with the correct orientation and detect failure conditions such as timeouts or an unavailable action server.

## Prerequisites
Ensure that your environment is correctly set up before running the tests:

1. **ROS1 Setup**: Source the necessary ROS environment:

   source /opt/ros/noetic/setup.bash

2. **Workspace Setup**: Navigate to your workspace and source it:

   cd ~/simulation_ws
   source devel/setup.bash


## Running the ROS1 Simulation
Launch the TortoiseBot simulation in Gazebo:

roslaunch tortoisebot_gazebo tortoisebot_playground.launch

If Gazebo encounters issues, restart it using:

kill -9 <gazebo_pid>


## Running the Waypoints Action Server
Start the Waypoints Action Server in a separate terminal:

cd ~/simulation_ws && catkin_make && source devel/setup.bash
rosrun course_web_dev_ros tortoisebot_action_server.py


## Running Tests
### Testing Passing Conditions
A test is considered **passing** if the robot successfully reaches the target **X, Y** position with the correct **yaw** orientation.

Execute the following command to test passing conditions:

cd ~/simulation_ws && catkin_make && source devel/setup.bash
rostest tortoisebot_waypoints waypoints_test.test --reuse-master

Expected output:

[ROSTEST]-----------------------------------------------------------------------

SUMMARY
 * RESULT: SUCCESS
 * TESTS: 2
 * ERRORS: 0
 * FAILURES: 0


### Testing Failing Conditions
A test is considered **failing** if:
- The action server is **unavailable**.
- stop action server in action server terminal with CTRL C to test error

- The robot **times out** before reaching the target waypoint.
Lines 47 and 48 simulation_ws/src/tortoisebot_waypoints/test/waypoints_test.py
Example:
        self.goal = WaypointActionGoal()
        self.goal.position.x = 50.20
        self.goal.position.y = 50.25
        self.client.send_goal(self.goal)

Execute the following command to test failing conditions:

cd ~/simulation_ws && catkin_make && source devel/setup.bash
rostest tortoisebot_waypoints waypoints_test.test --reuse-master

Expected output:

[ROSTEST]-----------------------------------------------------------------------

SUMMARY
 * RESULT: FAIL
 * TESTS: 2
 * ERRORS: 2
 * FAILURES: 0


## Notes
- Ensure the action server is running before executing tests.
- Verify that the robot is able to move freely in the simulation environment.
- If tests are not running as expected, check Gazebo, ROS master, and action server logs for potential issues.

