# Install script for directory: /home/user/simulation_ws/src/tortoisebot_waypoints

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/user/simulation_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tortoisebot_waypoints/action" TYPE FILE FILES "/home/user/simulation_ws/src/tortoisebot_waypoints/action/WaypointAction.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tortoisebot_waypoints/msg" TYPE FILE FILES
    "/home/user/simulation_ws/devel/share/tortoisebot_waypoints/msg/WaypointActionAction.msg"
    "/home/user/simulation_ws/devel/share/tortoisebot_waypoints/msg/WaypointActionActionGoal.msg"
    "/home/user/simulation_ws/devel/share/tortoisebot_waypoints/msg/WaypointActionActionResult.msg"
    "/home/user/simulation_ws/devel/share/tortoisebot_waypoints/msg/WaypointActionActionFeedback.msg"
    "/home/user/simulation_ws/devel/share/tortoisebot_waypoints/msg/WaypointActionGoal.msg"
    "/home/user/simulation_ws/devel/share/tortoisebot_waypoints/msg/WaypointActionResult.msg"
    "/home/user/simulation_ws/devel/share/tortoisebot_waypoints/msg/WaypointActionFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tortoisebot_waypoints/cmake" TYPE FILE FILES "/home/user/simulation_ws/build/tortoisebot_waypoints/catkin_generated/installspace/tortoisebot_waypoints-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/user/simulation_ws/devel/include/tortoisebot_waypoints")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/user/simulation_ws/devel/share/roseus/ros/tortoisebot_waypoints")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/user/simulation_ws/devel/share/common-lisp/ros/tortoisebot_waypoints")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/user/simulation_ws/devel/share/gennodejs/ros/tortoisebot_waypoints")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/user/simulation_ws/devel/lib/python3/dist-packages/tortoisebot_waypoints")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/user/simulation_ws/devel/lib/python3/dist-packages/tortoisebot_waypoints")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/user/simulation_ws/build/tortoisebot_waypoints/catkin_generated/installspace/tortoisebot_waypoints.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tortoisebot_waypoints/cmake" TYPE FILE FILES "/home/user/simulation_ws/build/tortoisebot_waypoints/catkin_generated/installspace/tortoisebot_waypoints-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tortoisebot_waypoints/cmake" TYPE FILE FILES
    "/home/user/simulation_ws/build/tortoisebot_waypoints/catkin_generated/installspace/tortoisebot_waypointsConfig.cmake"
    "/home/user/simulation_ws/build/tortoisebot_waypoints/catkin_generated/installspace/tortoisebot_waypointsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tortoisebot_waypoints" TYPE FILE FILES "/home/user/simulation_ws/src/tortoisebot_waypoints/package.xml")
endif()

