#include <iostream>
using namespace std;


// C++对象模型和this指针的学习 // 

// 1 成员变量和成员函数分开储存

//class Person
//{
//
//
//};
//
//void test01()
//{
//	// 当创建一个对象，对象内容为空时
//	// 所占用内存为1个字节
//	// 当类内声明一个非静态变量时，如Int类的大小为4字节
//	// 但是当类内声明一个非静态函数时，类的大小不发生改变
//	// 由此可知，成员变量和成员函数分开储存的
//	Person p;
//	cout << "sizeof p = " << sizeof(p) << endl;
//
//}

// this 指针的学习与理解

//01 解决命名冲突问题
class Person 
{

public:

	// 当出现变量名冲突时，函数体内的age与类内声明的age不是同一个，需要用this来解决问题
	int age;
	Person(int age)
	{
		//命名冲突，age不能被成功赋值
		//age = age;	

		// 正确写法
		this->age = age;
	}


	// 使用this返回自身的方法来实现链式编程

	Person& AddPersonAge(Person p)
	{
		this->age += p.age;
		
		// 返回类的本身
		return *this;
	}



};


void test01()
{
	Person p1(20);
	cout << p1.age << endl;

}


// 02 返回对象本身
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//	
//	// 链式编程思维，实现了age的累加
//	p2.AddPersonAge(p1).AddPersonAge(p1).AddPersonAge(p1);
//
//	cout << p2.age << endl;
//
//
//}


//int main()
//{
//	test02();
//	
//
//
//}