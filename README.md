```bash
ssh orangepi
mkdir -p ~/Documents/ros2_motor_demo
cd ~/Documents/ros2_motor_demo
```bash

## Create packages
```bash
mkdir -p motor_demo_ws/src
cd motor_demo_ws/src

ros2 pkg create --build-type ament_cmake motor_msgs
ros2 pkg create --build-type ament_cmake motor_bringup
ros2 pkg create motor_hw --build-type ament_cmake --dependencies rclcpp std_srvs std_msgs builtin_interfaces


mkdir -p motor_msgs/msg srv
mkdir -p motor_hw/include/eka_motor_hw src
mkdir -p motor_bringup/launch motor_bringup/config

cd ..
```bash

# Build workspace
cd ~/Documents/ros2_motor_demo
rm -rf build install log
source /opt/ros/jazzy/setup.bash
colcon build --symlink-install

# Run
ros2 launch motor_bringup probe_board.launch.py

# Run in new terminal
cd ~/Documents/ros2_motor_demo
source /opt/ros/jazzy/setup.bash
source install/setup.bash

ros2 topic echo /board/status
