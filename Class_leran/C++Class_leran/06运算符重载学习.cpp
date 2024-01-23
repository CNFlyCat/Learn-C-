#include <iostream>
using namespace std;

/*

	运算符重载的根本意义是自定义+,-,*,/符号的运算规则
	来实现自定义的运算方式
	目前来看这种方法似乎只适用于类内成员的使用
	不建议在全局使用，使用场景较少，因此只有一个例子
	其他符号的定义都类似

*/

//class Person
//{
//
//public:
//	// 运算符作为成员重定义
//	// 重定义了加号的运算方式
//	Person operator+(Person& p)
//	{
//		Person temp;
//		temp.num_A = this->num_A + p.num_A;
//		temp.num_B = this->num_B + p.num_B;
//		return temp;
//	}
//
//	// 一个有意思的写法
//	void operator()(string text)
//	{
//		cout << text << endl;
//	}
//
//	int num_A;
//	int num_B;
//
//};
//
//void print(string text)
//{
//	cout << text << endl;
//}
//
//void test()
//{
//	Person p1;
//	Person p2;
//
//	p1.num_A = 10;
//	p1.num_B = 10;
//
//	p2.num_A = 10;
//	p2.num_B = 10;
//
//	// 使用重定义+号实现此功能
//	Person p3 = p1 + p2;
//
//	cout << p3.num_A << endl;
//}

//int main()
//{
//	test();
//	print("hello world ");
//}