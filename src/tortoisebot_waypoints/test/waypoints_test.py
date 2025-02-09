#!/usr/bin/env python3

import rospy
import unittest
import rostest
import actionlib
import math
import sys
import threading
from geometry_msgs.msg import Point
from nav_msgs.msg import Odometry
from tf import transformations

# Import the Waypoint action definitions
from tortoisebot_waypoints.msg import WaypointActionAction, WaypointActionGoal


class TestTortoiseBotWaypoints(unittest.TestCase):
    def setUp(self):
        """
        Called automatically before each test method.
        If the action server is not available within 3 seconds, the test exits immediately.
        """
        rospy.init_node('test_waypoints', anonymous=True)

        # 1) Start a timeout for action server connection
        self.server_connected = False
        timer = threading.Timer(3.0, self.exit_due_to_timeout)
        timer.start()

        # 2) Try connecting to the action server
        self.client = actionlib.SimpleActionClient(
            '/tortoisebot_as', WaypointActionAction)
        rospy.loginfo("Waiting for the action server...")
        if self.client.wait_for_server(timeout=rospy.Duration(3.0)):
            self.server_connected = True  # Mark as connected
            timer.cancel()  # Cancel the timeout
            rospy.loginfo("Action server connected successfully.")
        else:
            rospy.logerr("Action server connection timed out! Exiting...")
            sys.exit(1)

        # 3) Subscribe to /odom for real-time robot pose
        self.odom_sub = rospy.Subscriber('/odom', Odometry, self.odom_callback)
        self.current_position = Point()
        self.current_yaw = 0

        self.goal = WaypointActionGoal()
        self.goal.position.x = 0.20
        self.goal.position.y = 0.25
        self.client.send_goal(self.goal)

        # 5) Wait up to 40s for the action to complete
        self.finished_before_timeout = self.client.wait_for_result(
            rospy.Duration(60.0))

        if not self.finished_before_timeout:
            rospy.logerr(
                "Action server did not finish within 40 seconds! Marking test as failed.")

        # 6) Store result and final pose for both tests to use
        self.result = self.client.get_result()
        rospy.sleep(0.3)  # Ensure final odometry update

        self.final_x = self.current_position.x
        self.final_y = self.current_position.y
        self.desired_yaw = math.atan2(
            self.goal.position.y, self.goal.position.x)
        self.final_yaw = self.current_yaw

        rospy.loginfo(
            f"Action server success?: {self.result.success if self.result else 'Unknown'}")
        rospy.loginfo(
            f"Final position: ({self.final_x:.2f}, {self.final_y:.2f})")
        rospy.loginfo(
            f"Desired yaw: {self.desired_yaw:.2f} rad, Final yaw: {self.final_yaw:.2f} rad")

    def exit_due_to_timeout(self):
        """Exit immediately if the action server does not connect within 3 seconds."""
        if not self.server_connected:
            rospy.logerr(
                "Failed to connect to action server within 3 seconds. Exiting immediately.")
            sys.exit(1)

    def odom_callback(self, msg):
        self.current_position = msg.pose.pose.position
        quaternion = (
            msg.pose.pose.orientation.x,
            msg.pose.pose.orientation.y,
            msg.pose.pose.orientation.z,
            msg.pose.pose.orientation.w
        )
        euler = transformations.euler_from_quaternion(quaternion)
        self.current_yaw = euler[2]

    def test_final_position(self):
        """Check if the robot converged on the desired position within a margin."""
        if not self.finished_before_timeout:
            self.fail("Action server did not complete within 40 seconds!")

        x_err = abs(self.final_x - self.goal.position.x)
        y_err = abs(self.final_y - self.goal.position.y)

        self.assertTrue(self.result.success,
                        "Action server did not report success!")
        self.assertTrue(x_err < 0.1 and y_err < 0.1,
                        f"Robot did not reach the expected position. x_err={x_err:.2f}, y_err={y_err:.2f}")

    def test_final_yaw(self):
        """Check if the robot's final yaw is near the 'desired_yaw'. Runs only if action completed in time."""
        if not self.finished_before_timeout:
            self.fail(
                "Skipping yaw test because action server did not complete in time!")

        yaw_err = abs(self.final_yaw - self.desired_yaw)

        self.assertTrue(self.result.success,
                        "Action server did not report success!")
        self.assertTrue(yaw_err < 0.25,
                        f"Robot's final yaw angle is incorrect (err={yaw_err:.3f} rad)")


if __name__ == '__main__':
    rostest.rosrun('tortoisebot_waypoints', 'test_waypoints',
                   TestTortoiseBotWaypoints)
