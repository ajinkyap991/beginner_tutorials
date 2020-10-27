# Beginner Tutorials Package for simple publisher and subscriber nodes

## Overview and Description

This repository contains ROS package for publishing a simple string message over ROS system and subscribing to the same message.

## Authors

Ajinkya Parwekar

## License

BSD License Clause

## Steps to run the program
Open new terminal window and type the following:
```
mkdir catkin_ws/src
cd catkin_ws/src
git clone https://github.com/ajinkyap991/beginner_tutorials.git
cd ..
catkin_make
roscore
```
Open a new terminal window and write:
```
cd catkin_ws
rosrun beginner_tutorials talker
```
Open a new terminal window and write:
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