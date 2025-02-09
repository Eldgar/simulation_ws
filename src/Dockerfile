# Use ROS Noetic as base
FROM osrf/ros:noetic-desktop-full

# Set environment variables
ENV DEBIAN_FRONTEND=noninteractive
ENV ROS_MASTER_URI=http://localhost:11311

# Install dependencies
RUN apt update && apt install -y \
    python3-pip \
    ros-noetic-catkin \
    && rm -rf /var/lib/apt/lists/*

# Create a workspace
WORKDIR /simulation_ws

# Copy the ROS package into the container
COPY ./tortoisebot_waypoints /simulation_ws/src/tortoisebot_waypoints

# Source ROS setup
RUN /bin/bash -c "source /opt/ros/noetic/setup.bash && catkin_make"

# Set the default command
CMD ["bash"]
