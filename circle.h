#pragma once
#include<iostream>
#include"point.h"
using namespace std;

class circle // ���� Բ ��
{
public:
	void setr(int r); // ���ð뾶

		int getr();

		void setCenter(point center); // ����Բ�ģ�����Ҳ�Ǹ��뾶

		point getCenter();

private:
	int c_r; 
	point c_center;// һ�����п��԰�����һ���࣬��Ϊԭ����ĳ�Ա
};


