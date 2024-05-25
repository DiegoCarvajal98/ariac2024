###############################
# Base image for UR control #
###############################

ARG ROS_DISTRO=iron

FROM osrf/ros:${ROS_DISTRO}-desktop as base 
ENV ROS_DISTRO=${ROS_DISTRO}
SHELL [ "/bin/bash" , "-c" ]

# Create colcon workspace with external dependencies
RUN mkdir -p /ariac_ws/src
WORKDIR /ariac_ws/src
COPY dependencies.repos .
RUN vcs import < dependencies.repos

# Build the workspace
WORKDIR /ariac_ws
RUN source /opt/ros/${ROS_DISTRO}/setup.bash \
    && apt-get update -y \
    && rosdep install --from-paths src --ignore-src --rosdistro ${ROS_DISTRO} -y \
    && colcon build --symlink-install

RUN apt-get update \
    && apt-get install -y --no-install-recommends \
    ros-${ROS_DISTRO}-rmw-cyclonedds-cpp 

ENV RMW_IMPLEMENTATION=rmw_cyclonedds_cpp

##################################
# Overlay image for UR control #
##################################

FROM base AS overlay

# Create overlay colcon workspace
RUN mkdir -p /overlay_ws/src
WORKDIR /overlay_ws
COPY ./ARIAC/ ./src/ARIAC/
COPY ./nist_competitor/ ./src/nist_competitor/
RUN source /opt/ros/${ROS_DISTRO}/setup.bash \
    # && source /ariac_ws/install/setup.bash \
    && apt-get update \
    && rosdep install --from-paths src --ignore-src --rosdistro ${ROS_DISTRO} -y \
    && colcon build --symlink-install --parallel-workers 1

# Setup entrypoint
COPY ./docker/entrypoint.sh /
ENTRYPOINT [ "/entrypoint.sh" ]

######################################
# Development image for UR control #
######################################

FROM overlay AS dev 

# Change USERNAME to the host USERNAME
ARG USERNAME=robotics
ARG USER_UID=1000
ARG USER_GID=${USER_UID}

# Install extra tools for development
RUN apt-get update && apt-get install -y --no-install-recommends \
    gdb \
    gdbserver \
    nano 

# Create new user and home directory
RUN groupadd --gid $USER_GID $USERNAME \
    && useradd --uid ${USER_GID} --gid ${USER_UID} --create-home ${USERNAME} \
    && echo ${USERNAME} ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/${USERNAME} \
    && chmod 0440 /etc/sudoers.d/${USERNAME} \
    && mkdir -p /home/${USERNAME} \
    && chown -R ${USER_UID}:${USER_GID} /home/${USERNAME}

# Set the ownership of the overlay workspace to the new user
RUN chown -R ${USER_UID}:${USER_GID} /overlay_ws/

# Set the user and source entrypoint in the user's .bashrc file
USER ${USERNAME}
RUN echo "source /entrypoint.sh" >> /home/${USERNAME}/.bashrc
# RUN echo "export GAZEBO_MODEL_PATH=/overlay_ws/src/flower_catcher_gazebo/models:$GAZEBO_MODEL_PATH" >> /home/${USERNAME}/.bashrc
