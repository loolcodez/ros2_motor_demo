from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    config = os.path.join(
        get_package_share_directory('motor_bringup'),
        'config',
        'board.yaml'
    )

    return LaunchDescription([
        Node(
            package='motor_hw',
            executable='board_probe_node',
            name='board_probe',
            output='screen',
            parameters=[config]
        )
    ])
