# Use an official ROS Noetic base image with Gazebo
FROM osrf/ros:noetic-desktop-full

# Set environment variables
ENV DEBIAN_FRONTEND=noninteractive \
    ROS_DISTRO=noetic \
    CATKIN_WS=/home/user/simulation_ws

# Install necessary dependencies
RUN apt-get update && apt-get install -y \
    python3-pip \
    python3-rosdep \
    python3-catkin-tools \
    ros-noetic-rosbridge-server \
    ros-noetic-joint-state-publisher \
    ros-noetic-joint-state-publisher-gui \
    ros-noetic-robot-state-publisher \
    ros-noetic-xacro \
    ros-noetic-gazebo-ros \
    ros-noetic-gazebo-plugins \
    ros-noetic-gazebo-ros-pkgs \
    && rm -rf /var/lib/apt/lists/*

# Initialize rosdep
RUN rosdep update && rosdep fix-permissions

# Create a catkin workspace
WORKDIR ${CATKIN_WS}/src
COPY . ${CATKIN_WS}/src

# Install dependencies
WORKDIR ${CATKIN_WS}
RUN rosdep install --from-paths src --ignore-src -r -y

# Build the workspace
RUN . /opt/ros/noetic/setup.sh && catkin_make

# Set up entrypoint
RUN echo "source ${CATKIN_WS}/devel/setup.bash" >> /root/.bashrc
ENTRYPOINT ["/bin/bash", "-c", "source /root/.bashrc && bash"]
