#include<iostream>
#include<string>

using namespace std;
#define PI 3.14


//
//class name
//{
//访问权限:
//
//		属性
//
//		行为
//
//};

// 创建一个 圆 类，class后跟着的就是类的名称
class Circle
{
	// 访问权限
public:// 公共权限

	// 属性
	int r; // 半径

	// 行为
	double caculate_perimeter() // 计算圆的周长
	{
		return 2 * PI * r;
	}
};
//int main()
//{	//   实例化：通过类创建一个对象的过程
//	Circle c; // 通过 圆 类创建具体的圆(对象) 
//
//	cin >> c.r; // 给 圆 对象 的属性赋值
//
//	cout << "半径为" << c.r << "的圆的周长为" << c.caculate_perimeter() << endl;
//	return 0;
//}

//class student
//{
//public:
//
//	// 属性：姓名 学号
//	string s_name;
//	int s_number;
//
//	// 行为：给姓名与学号赋值/显示
//	void show()
//	{
//		cout << "学生姓名为" << s_name << endl;
//		cout << "学生学号为" << s_number;
//	}
//	// 赋值
//	void assignment1() // 键盘输入
//	{
//		cout << "请输入姓名" << endl;
//		cin >> s_name;
//		cout << endl;
//		cout << "请输入学号" << endl;
//		cin >> s_number;
//	}
//	void assignment2(string name,int Studnet_number)// 直接传参
//	{
//		s_name = name;
//		s_number = Studnet_number;
//	}
//};
//int main()
//{
//	student s1;
//	//s1.assignment1();   键盘cin输入
//	s1.assignment2("joyce", 32054123); // 直接传参
//	s1.show();
//
//	return 0;
//}

//class person
//{
//public:
//	string name;// 姓名，公共权限
//
//protected:
//	string car;// 汽车，保护权限
//
//private:
//	int password;// 密码，私有权限
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
//	//p.name = "joyce";// 只有公共权限在类外才可以访问
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
//	P1 p1; // 结构体
//	p1.a = 5;
//
//	P2 p2; // 类
//	p2.a = 5; 
//	return 0;
//}

//class My
//{
//public:
//	void setname(string name)// 设置姓名
//	{
//		m_name = name;
//	}
//	string getname() // 返回姓名
//	{
//		return m_name;
//	}
//
//	int getage() // 返回年龄，无法修改
//	{
//		return m_age;
//	}
//
//	void setage(int age) // 设置年龄，范围0-150
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
//	void setPassword(int password) // 修改密码，无法查看
//	{
//		m_Password = password;
//	}
//private:
//	string m_name; // 设置为可读可写
//	int m_age = 5; // 设置为只读
//	int m_Password; // 设置为只写
//};
//
//int main()
//{
//	My m;
//	//m.setname("joyce"); // 设置姓名
//	//cout << m.getname() << endl; // 查看姓名
//
//	//cout << m.getage() << endl;// 查看年龄
//	m.setage(6);
//	cout << m.getage() << endl; // 若想修改年龄，无法访问
//
//	//m.setPassword(3171321); // 修改密码，无法查看
//	////m.m_Password;// 若想查看密码，无法查看
//	return 0;
//}

//class Cube
//{
//public:
//	// 设置与获取长宽高
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
//	// 获取正方体面积
//	int calculateArea()
//	{
//		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
//	}
//	// 获取正方体体积
//	int calculateVolume()
//	{
//		return m_L * m_W * m_H;
//	}
//	//2、用成员函数判断2个Cube是否相等
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
//// 1、用全局函数判断2个Cube是否相等
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
//	// 创建第一个Cube
//	Cube cube1;
//	cube1.setCube(10,10,10);
//	/*cout << "正方体面积为" << cube1.calculateArea() << endl;
//	cout << "正方体体积为" << cube1.calculateVolume() << endl*/;
//
//	// 创建第二个Cube
//	Cube cube2;
//	cube2.setCube(10, 11, 10);
//
//	bool ret1 = Judge1(cube1,cube2); // 全局变量调用的对比
//	if (ret1)
//		cout << "cube1和cube2相等" << endl;
//	else
//		cout << "cube1和cube2不相等" << endl;
//
//	bool ret2 = cube1.Judge2(cube2); // 成员函数调用的对比
//	if (ret2)	
//		cout << "cube1和cube2相等" << endl;
//	else
//		cout << "cube1和cube2不相等" << endl;
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
void IsInCircle(circle &c,point &p) // 判断两点之间关系
{
	// 计算两点之间距离
	int distance=
	(c.getCenter().getx() - p.getx()) * (c.getCenter().getx() - p.getx()) +
	(c.getCenter().gety() - p.gety()) * (c.getCenter().gety() - p.gety());

	// 计算半径的平方
	int square = c.getr() * c.getr();

	// 判断距离和平方的关系
	if		(distance == square)
		cout << "在圆上" << endl;
	else if (distance > square)
		cout << "在圆外" << endl;
	else
		cout << "在圆内" << endl;
}
int main()
{
	// 创建圆
	circle c;
	c.setr(1);
	point center;
	center.setx(2);
	center.sety(2);
	c.setCenter(center);

	// 创建点
	point p;
	p.setx(2);
	p.sety(1);

	IsInCircle(c, p);

	return 0;
}
