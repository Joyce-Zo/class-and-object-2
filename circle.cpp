#pragma once
#include<iostream>
#include"circle.h"
using namespace std;

void circle::setr(int r) // ���ð뾶
{
	c_r = r;
}
int circle::getr()
{
	return c_r;
}
void circle::setCenter(point center) // ����Բ�ģ�����Ҳ�Ǹ��뾶
{
	c_center = center;
}
point circle::getCenter()
{
	return c_center;
}
