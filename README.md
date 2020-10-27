# Beginner Tutorials Package for simple publisher and subscriber nodes

## Overview and Description

This repository contains ROS package for publishing a simple string message over ROS system and subscribing to the same message.

## Authors

Ajinkya Parwekar

## License

BSD License Clause

## Dependencies/Assumptions

This package was created and tested on ROS Melodic (should run fine on other distros as well).
This package uses catkin for building the package.
There are no extra dependencies required for this package.

## Steps to run the program
Open new terminal window and type the following:
```
mkdir catkin_ws/src
cd catkin_ws/src
git clone https://github.com/ajinkyap991/beginner_tutorials.git
cd ..
source /opt/ros/melodic/setup.bash    # Replace melodic with your distro name
catkin_make
source ~/catkin_ws/devel/setup.bash
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
To end the process, type ctrl+C on all the terminal windows one by one.

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