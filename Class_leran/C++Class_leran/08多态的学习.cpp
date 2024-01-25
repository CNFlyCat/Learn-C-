#include <iostream>
#include <fstream>
using namespace std;

class Animal
{

public:
	// 动态多态必须存在继承关系
	// 函数名与函数参数要相同
	// 使用 virtual 关键字来将此函数定义为虚函数
	virtual void Speak()
	{
		cout << "动物在说话" << endl;
	}

	void eat()
	{
		cout << "动物在吃东西" << endl;
	}

};

class Cat : public Animal
{
public:
	// 重写了Animal中的Speak函数
	void Speak()
	{

		cout << "喵喵喵" << endl;
	}

};


void doSpeak(Animal& animal)
{
	animal.Speak();
	animal.eat();
}

// 纯虚函数与抽象类
class Base
{
public:
	// 此为纯虚函数，若一个类当中存在纯虚函数，则这个类是抽象类
	// 1、抽象类不能被实例化
	// 2、抽象类的子类必须重写抽象类当中的纯虚函数，否则也不能实例化
	virtual void speak() = 0;

	// 此为虚析构，当使用父类指针接收继承的子类时，需要写虚析构来执行子类当中的析构函数
	virtual ~Base()
	{

	}

private:

};

class son : public Base
{
public:
	void speak()
	{
		cout << "哈哈哈";
	}
};

//void test002(Base& base)
//{
//	base.speak();
//}

void test00()
{
	/*Cat cat;
	doSpeak(cat);*/
	
	son s;
	Base* b = &s;
	b->speak();

}

int main()
{
	test00();
}