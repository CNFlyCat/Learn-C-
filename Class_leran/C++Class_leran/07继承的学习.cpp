#include <iostream>
using namespace std;


// 继承的基础学习

// 动物类
class Animal
{
public:
	void Property()
	{
		cout << "会吃、喝、睡、是动物" << endl;
	}
	
};

// 猫类 继承Animal属性
class cat : public Animal
{

public:
	void catProperty()
	{
		cout << "会喵喵叫，是猫" << endl;
	}

};

// 猫类 继承Animal属性
// 继承类型分为 public、protected、private
// public 继承父类的 public 与 protected 内容 且权限为 public
// protected 继承父类的 public 与 protected 后将权限转换为 protected
// private 继承父类的 public 与 protected 后将权限转换为 private
class dog : public Animal
{
	
public:
	void dogProperty()
	{
		cout << "会汪汪叫，是狗" << endl;
	}

};

// 继承成员同名处理方式

class Base
{
public:

	int m_A;

	Base()
	{
		m_A = 100;

	}
};

class Son : public Base
{

public:

	int m_A;
	
	Son()
	{
		m_A = 200;
	}

};

//void test02()
//{
//	// 使用 Base::作用域来获得同名的父类内容
//	// 若遇到同名函数，也可以使用Base::作用域来获得同名的父类内容
//	Son s;
//	cout << "SON: " << s.m_A << endl;
//	cout << "Base: " << s.Base::m_A << endl;
//
//}
//
//void test()
//{
//	cat c;
//	c.Property();
//	c.catProperty();
//
//	dog d;
//	d.Property();
//	d.dogProperty();
//
//}
//
//// 菱形继承(很少用到，已了解过这个东西)
//
//
//int main()
//{
//	test02();
//}
