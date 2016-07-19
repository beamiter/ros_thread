/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年07月17日 星期日 18时13分52秒
 ************************************************************************/

#include<iostream>
#include"ros/ros.h"
using namespace std;
int main(int argc,char** argv)
{
    ros::init(argc,argv,"hello");
    ros::NodeHandle nh;
    ROS_INFO_STREAM("hello,ros! I am testing the final goals!");
}
