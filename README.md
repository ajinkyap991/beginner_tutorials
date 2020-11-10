[![License](https://img.shields.io/badge/License-BSD%203--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)
# ROS Beginner Tutorials Package for ENPM808X

## Overview and Description

This repository contains ROS package for publishing a simple string message over ROS system and subscribing to the same message with additional features.

## Authors

Ajinkya Parwekar

## License

BSD License Clause

## TODO
1. Navigating the ROS wiki Tutorial - Complete
2. Navigating the File System Tutorial - Complete
3. Create ROS Package Tutorial - Complete
4. Create beginner_tutorials package - Complete
5. Build ROS package Tutorial - Complete
6. Understanding ROS Nodes Tutorial - Complete
7. Understanding ROS topics Tutorial - Complete
8. Writing a ROS publisher and subscriber - Complete
9. Updated CMakeLists.txt for build
10. Examining Publisher and Subscriber Tutorial - Complete
11. Added custom string message - Complete.
12. Modified the tutorial code to follow Google C++ Style Guide- Complete
13. Added CPPCheck and CPPLint results
14. Added Licence
15. Getting started with roswtf Tutorial - Complete
16. Understanding ROS Services and Parameters Tutorial - Complete
17. Using rqt_console and roslaunch Tutorial - Complete
18. Definined srv file
19. Implemented ROS service to change output of publisher node with logger levels
20. Used rqt_console and rqt_logger_levels

## Dependencies/Assumptions

This package was created and tested on ROS Melodic on Ubuntu 18.04 (should run fine on other distros as well).
This package uses catkin for building the package.
This packages follows C++ 11 standard of coding.
There are no extra dependencies required for this package.

## Steps to run the program
Open new terminal window and type the following:
```
mkdir catkin_ws/src
cd catkin_ws/src
git clone https://github.com/ajinkyap991/beginner_tutorials.git
cd ..
source /opt/ros/melodic/setup.bash    # Replace melodic with your distro name for a different distro
catkin_make
source ~/catkin_ws/devel/setup.bash
roscore
```
Open a new terminal window and type:
```
roscore
```
Open a new terminal window and type:
```
cd catkin_ws
rosrun beginner_tutorials talker
```
Open a new terminal window and type:
```
cd catkin_ws
rosrun beginner_tutorials listener
```
### Change the publishing message to a custom message using rosservice

Execute the files and then open a new terminal and type:
```
cd catkin_ws
rosservice call /add_two_ints 2 3
```
To end the process, type ctrl+C on all the terminal windows one by one.

### Execution Steps (with launch file)
End all the previous processes and type in a new terminal window:
```
cd catkin_ws
roslaunch beginner_tutorials week10.launch a:=2 b:=3
```
## Inspect tf frames
```
cd catkin_ws
source devel/setup.bash
rosrun rqt_tf_tree rqt_tf_tree
```
## Running rostest
```
cd catkin_ws
source devel/setup.bash
roslaunch talker_test.launch a:=4 b:=5
```
## Recording rosbag
```
cd catkin_ws
source devel/setup.bash
roslaunch Week10.launch record:=true
```
## Inspecting rosbag file
```
cd catkin_ws/src/beginner_tutorials/results
rosbag info beginner_tutorials.bag
```
## Playback rosbag file with listener node
Terminal 1
```
cd catkin_ws/src/beginner_tutorials/results
rosbag play beginner_tutorials.bag
```
Terminal 2
```
cd catkin_ws
source devel/setup.bash
rosrun beginner_tutorials listener
```
## Cpplint check
```
cd  <path to repository>
cpplint $( find . -name \*.hpp -or -name \*.cpp | grep -vE -e "^./build/" -e "^./vendor/" -e "^./docs/" -e "^./results" )

```

## Cppcheck check
```
cd <path to repository>
cppcheck --enable=all --std=c++11 -I include/ --suppress=missingIncludeSystem $( find . -name *.cpp | grep -vE -e "^./build/" -e "^./vendor/" )

```