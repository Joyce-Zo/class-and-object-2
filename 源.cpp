#include<iostream>
#include<string>

using namespace std;
#define PI 3.14


//
//class name
//{
//����Ȩ��:
//
//		����
//
//		��Ϊ
//
//};

// ����һ�� Բ �࣬class����ŵľ����������
class Circle
{
	// ����Ȩ��
public:// ����Ȩ��

	// ����
	int r; // �뾶

	// ��Ϊ
	double caculate_perimeter() // ����Բ���ܳ�
	{
		return 2 * PI * r;
	}
};
//int main()
//{	//   ʵ������ͨ���ഴ��һ������Ĺ���
//	Circle c; // ͨ�� Բ �ഴ�������Բ(����) 
//
//	cin >> c.r; // �� Բ ���� �����Ը�ֵ
//
//	cout << "�뾶Ϊ" << c.r << "��Բ���ܳ�Ϊ" << c.caculate_perimeter() << endl;
//	return 0;
//}

//class student
//{
//public:
//
//	// ���ԣ����� ѧ��
//	string s_name;
//	int s_number;
//
//	// ��Ϊ����������ѧ�Ÿ�ֵ/��ʾ
//	void show()
//	{
//		cout << "ѧ������Ϊ" << s_name << endl;
//		cout << "ѧ��ѧ��Ϊ" << s_number;
//	}
//	// ��ֵ
//	void assignment1() // ��������
//	{
//		cout << "����������" << endl;
//		cin >> s_name;
//		cout << endl;
//		cout << "������ѧ��" << endl;
//		cin >> s_number;
//	}
//	void assignment2(string name,int Studnet_number)// ֱ�Ӵ���
//	{
//		s_name = name;
//		s_number = Studnet_number;
//	}
//};
//int main()
//{
//	student s1;
//	//s1.assignment1();   ����cin����
//	s1.assignment2("joyce", 32054123); // ֱ�Ӵ���
//	s1.show();
//
//	return 0;
//}

//class person
//{
//public:
//	string name;// ����������Ȩ��
//
//protected:
//	string car;// ����������Ȩ��
//
//private:
//	int password;// ���룬˽��Ȩ��
//
//public:
//	void func()
//	{
//		string name = "nana";
//		string car = "BMW";
//		int password = 19931312;
//	}
//};
//
//int main()
//{
//	person p;
//	//p.name = "joyce";// ֻ�й���Ȩ��������ſ��Է���
//	//p.car = "BMW";
//	//p.password = 131221;
//	p.func();
//
//	return 0;
//}


//struct P1 //  public
//{
//	int a;
//};
//class P2  //  private
//{
//	int a;
//};
//int main()
//{
//	P1 p1; // �ṹ��
//	p1.a = 5;
//
//	P2 p2; // ��
//	p2.a = 5; 
//	return 0;
//}

//class My
//{
//public:
//	void setname(string name)// ��������
//	{
//		m_name = name;
//	}
//	string getname() // ��������
//	{
//		return m_name;
//	}
//
//	int getage() // �������䣬�޷��޸�
//	{
//		return m_age;
//	}
//
//	void setage(int age) // �������䣬��Χ0-150
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "Input errot!" << endl;
//			m_age = 0;
//			return;
//		}
//		m_age = age;
//	}
//
//	void setPassword(int password) // �޸����룬�޷��鿴
//	{
//		m_Password = password;
//	}
//private:
//	string m_name; // ����Ϊ�ɶ���д
//	int m_age = 5; // ����Ϊֻ��
//	int m_Password; // ����Ϊֻд
//};
//
//int main()
//{
//	My m;
//	//m.setname("joyce"); // ��������
//	//cout << m.getname() << endl; // �鿴����
//
//	//cout << m.getage() << endl;// �鿴����
//	m.setage(6);
//	cout << m.getage() << endl; // �����޸����䣬�޷�����
//
//	//m.setPassword(3171321); // �޸����룬�޷��鿴
//	////m.m_Password;// ����鿴���룬�޷��鿴
//	return 0;
//}

//class Cube
//{
//public:
//	// �������ȡ�����
//	void setCube(int L, int W, int H)
//	{
//		m_L = L;
//		m_W = W;
//		m_H = H;
//	}
//	int getL()
//	{
//		return m_L;
//	}
//	int getW()
//	{
//		return m_W;
//	}
//	int getH()
//	{
//		return m_H;
//	}
//	// ��ȡ���������
//	int calculateArea()
//	{
//		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
//	}
//	// ��ȡ���������
//	int calculateVolume()
//	{
//		return m_L * m_W * m_H;
//	}
//	//2���ó�Ա�����ж�2��Cube�Ƿ����
//	bool Judge2(Cube& cube)
//	{
//		if (getH() == cube.getH() &&
//			getL() == cube.getL() &&
//			getW() == cube.getW())
//			return true;
//		return false;
//	}
//private:
//	int m_L, m_W, m_H;
//};
//
//// 1����ȫ�ֺ����ж�2��Cube�Ƿ����
//bool Judge1(Cube&cube1 ,Cube&cube2)
//{
//	if (cube1.getH() == cube2.getH() &&
//		cube1.getL() == cube2.getL() &&
//		cube1.getW() == cube2.getW())
//		return true;
//	return false;
//}
//int main()
//{
//	// ������һ��Cube
//	Cube cube1;
//	cube1.setCube(10,10,10);
//	/*cout << "���������Ϊ" << cube1.calculateArea() << endl;
//	cout << "���������Ϊ" << cube1.calculateVolume() << endl*/;
//
//	// �����ڶ���Cube
//	Cube cube2;
//	cube2.setCube(10, 11, 10);
//
//	bool ret1 = Judge1(cube1,cube2); // ȫ�ֱ������õĶԱ�
//	if (ret1)
//		cout << "cube1��cube2���" << endl;
//	else
//		cout << "cube1��cube2�����" << endl;
//
//	bool ret2 = cube1.Judge2(cube2); // ��Ա�������õĶԱ�
//	if (ret2)	
//		cout << "cube1��cube2���" << endl;
//	else
//		cout << "cube1��cube2�����" << endl;
//	return 0;
//}
//
//      class circle
//{
//public:
//	int contrast(int x_1, int  y_1, int x_2, int  y_2, int r)
//	{
//		if (((x_1 - x_2) * (x_1 - x_2) + (y_1 - y_2) * (y_1 - y_2)) > (r * r))
//			return 1;
//		else if (((x_1 - x_2) * (x_1 - x_2) + (y_1 - y_2) * (y_1 - y_2)) == (r * r))
//			return 2;
//		else
//			return 0;
//	}
//private:
//	int c_r;
//	int x_1, x_2, y_1, y_2;
//	int Distance;
//};


#include"circle.h"
#include"point.h"
void IsInCircle(circle &c,point &p) // �ж�����֮���ϵ
{
	// ��������֮�����
	int distance=
	(c.getCenter().getx() - p.getx()) * (c.getCenter().getx() - p.getx()) +
	(c.getCenter().gety() - p.gety()) * (c.getCenter().gety() - p.gety());

	// ����뾶��ƽ��
	int square = c.getr() * c.getr();

	// �жϾ����ƽ���Ĺ�ϵ
	if		(distance == square)
		cout << "��Բ��" << endl;
	else if (distance > square)
		cout << "��Բ��" << endl;
	else
		cout << "��Բ��" << endl;
}
int main()
{
	// ����Բ
	circle c;
	c.setr(1);
	point center;
	center.setx(2);
	center.sety(2);
	c.setCenter(center);

	// ������
	point p;
	p.setx(2);
	p.sety(1);

	IsInCircle(c, p);

	return 0;
}
