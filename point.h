#pragma once
#include<iostream>
using namespace std;

class point //  �� ��
{
public:
	void setx(int x); // ���õ�ĺ�����x

	int getx();

	void sety(int y);// ���õ��������y

	int gety();

private:
	int p_x;
	int p_y;
};
