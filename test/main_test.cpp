/**
 * @file main_test.cpp
 * @author Ajinkya Parwekar
 * @brief main test file running all unit tests
 * @Copyright "Copyright 2020" <Ajinkya Parwekar>
 */

#include "ros/ros.h"
#include <gtest/gtest.h>

int main(int argc, char** argv) {
    ros::init(argc, argv, "talker_node_test");
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}