cmake_minimum_required(VERSION 3.0.2)
project(tortoisebot_waypoints)

find_package(catkin REQUIRED COMPONENTS
  rospy
  actionlib
  actionlib_msgs
  geometry_msgs
  nav_msgs
  std_msgs
  tf
  message_generation
)

## Declare your action files
add_action_files(
  DIRECTORY action
  FILES WaypointAction.action
)

## Actually generate the action messages
generate_messages(
  DEPENDENCIES
  actionlib_msgs
  geometry_msgs
  std_msgs
)

catkin_package(
  CATKIN_DEPENDS 
    actionlib_msgs
    geometry_msgs
    message_runtime
    std_msgs
    tf
)

catkin_install_python(PROGRAMS scripts/tortoisebot_action_server.py
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})


if(CATKIN_ENABLE_TESTING)
  find_package(rostest REQUIRED)

  add_rostest(test/waypoints_test.test)
endif()


include_directories(
  ${catkin_INCLUDE_DIRS}
)
