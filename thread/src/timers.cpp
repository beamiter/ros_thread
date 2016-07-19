/*
 * timers.cpp
 *
 *  Created on: 2016年7月19日
 *      Author: yin
 */
#include "ros/ros.h"
	/**
	 * This tutorial demonstrates the use of timer callbacks.
	 */
	void callback1(const ros::TimerEvent&)
	{
	  ROS_INFO("Callback 1 triggered");
	}
	void callback2(const ros::TimerEvent&)
	{
	  ROS_INFO("Callback 2 triggered");
	}
	int main(int argc, char **argv)
	{
	  ros::init(argc, argv, "third_talker");
	  ros::NodeHandle n;
	  ros::Timer timer1 = n.createTimer(ros::Duration(0.1), callback1);
	  ros::Timer timer2 = n.createTimer(ros::Duration(1.0), callback2);
	  ros::spin();
	  return 0;
	}



