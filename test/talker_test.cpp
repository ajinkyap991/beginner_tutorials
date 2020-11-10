/**
 *  @Copyright "Copyright 2020" <Ajinkya Parwekar>
 *  @file talker_test.cpp
 *  @author Ajinkya Parwekar
 *  @date 11/10/2020
 * 
 *  @brief Unit tests for talker node
 *
 *  @section DESCRIPTION
 *
 *  Source file containing unit tests for talker node
 *
 */
#include <gtest/gtest.h>
#include <ros/ros.h>
#include <ros/service_client.h>
#include "beginner_tutorials/AddTwoNum.h"

/**
 * @brief Tests the AddTwoInts service output
 * @param TestTalkerNode Test name 
 * @param TestServiceOutput Unit test name
 */
TEST (TestTalkerNode, TestServiceOutput) {
  // Create a ROS node handle
  ros::NodeHandle node;
  // Create a ROS service client
  ros::ServiceClient client = node.serviceClient<beginner_tutorials::AddTwoNum>("add_two_num");
  
  beginner_tutorials::AddTwoNum srv;
  srv.request.num1 = 4;
  srv.request.num2 = 5;

  // Call ROS Service
  client.call(srv);

  EXPECT_EQ(9, srv.response.addition);
}
