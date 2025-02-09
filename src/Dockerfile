# Extend the existing image
FROM eldgar/tortoisebot-ros1-gazebo

# Copy the missing package into the container
COPY ./tortoisebot_waypoints /simulation_ws/src/tortoisebot_waypoints

# Build the workspace inside the container
RUN source /opt/ros/noetic/setup.bash && \
    cd /simulation_ws && \
    catkin_make && \
    source devel/setup.bash
