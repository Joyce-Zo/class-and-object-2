#pragma once
#include<iostream>
#include"point.h"
using namespace std;

class circle // 设置 圆 类
{
public:
	void setr(int r); // 设置半径

		int getr();

		void setCenter(point center); // 设置圆心，本质也是个半径

		point getCenter();

private:
	int c_r; 
	point c_center;// 一个类中可以包含另一个类，作为原来类的成员
};


