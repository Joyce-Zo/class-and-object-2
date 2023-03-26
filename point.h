#pragma once
#include<iostream>
using namespace std;

class point //  点 类
{
public:
	void setx(int x); // 设置点的横坐标x

	int getx();

	void sety(int y);// 设置点的纵坐标y

	int gety();

private:
	int p_x;
	int p_y;
};
