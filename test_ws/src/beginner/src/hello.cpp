#include "ros/ros.h"    //ros头文件必须包含
int main(int argc, char  *argv[])
{
    setlocale(LC_ALL,"");    //防止中文乱码
    ros::init(argc,argv,"hello");//ros节点初始化 
    ros::NodeHandle n;//创建节点句柄，这里非必须
    //控制台输出
    ROS_INFO("hello  ROS!");
    ROS_INFO("你好 机器人");
    ros::spin();         //处理所有回调函数，这里非必须。
    return 0;
}
