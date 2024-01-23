#include <iostream>

using namespace std;


// 静态成员变量的学习

class Person {

public:

	// 静态变量，在编译时就分配内存，在全局区内
	// 在类内声明，在类外全局环境初始化
	// 类似于全局变量，外部均可修改读取其值
	static string p_Name;

	int Get_age()
	{
		return age;
	}

private:

	static int age;


};

// 类外初始化
//string Person::p_Name = "飞机";
//int Person::age = 3;

// 静态成员函数
class people {

public:

	// 静态成员函数
	// 静态成员函数只能访问静态成员变量
	// 静态成员函数不能访问普通变量
	static int func()
	{
		cout << "int func()" << endl;
		num = 500;
		cout << num << endl;
	}

	static int num;

};

//int people::num = 100;

//void test()
//{
//	// 创建对象的方式访问
//	Person p1;
//	cout << p1.p_Name << endl;
//	cout << p1.Get_age() << endl;
//
//	//通过类名进行访问
//	cout << Person::p_Name << endl;
//	//cout << Person::age << endl; 不可访问，会受到私有限制
//
//}




//int main()
//{
//	test();
//	system("pause");
//}
