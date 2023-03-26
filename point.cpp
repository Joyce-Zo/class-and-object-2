#pragma once
#include<iostream>
#include"point.h"
using namespace std;


void point::setx(int x) // 设置点的横坐标x
{
	p_x = x;
}
int point::getx()
{
	return p_x;
}
void point::sety(int y) // 设置点的纵坐标y
{
	p_y = y;
}
int point::gety()
{
	return p_y;
}




