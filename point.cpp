#pragma once
#include<iostream>
#include"point.h"
using namespace std;


void point::setx(int x) // ���õ�ĺ�����x
{
	p_x = x;
}
int point::getx()
{
	return p_x;
}
void point::sety(int y) // ���õ��������y
{
	p_y = y;
}
int point::gety()
{
	return p_y;
}




