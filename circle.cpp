#pragma once
#include<iostream>
#include"circle.h"
using namespace std;

void circle::setr(int r) // 设置半径
{
	c_r = r;
}
int circle::getr()
{
	return c_r;
}
void circle::setCenter(point center) // 设置圆心，本质也是个半径
{
	c_center = center;
}
point circle::getCenter()
{
	return c_center;
}
