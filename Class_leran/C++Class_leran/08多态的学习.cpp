#include <iostream>
#include <fstream>
using namespace std;

class Animal
{

public:
	// ��̬��̬������ڼ̳й�ϵ
	// �������뺯������Ҫ��ͬ
	// ʹ�� virtual �ؼ��������˺�������Ϊ�麯��
	virtual void Speak()
	{
		cout << "������˵��" << endl;
	}

	void eat()
	{
		cout << "�����ڳԶ���" << endl;
	}

};

class Cat : public Animal
{
public:
	// ��д��Animal�е�Speak����
	void Speak()
	{

		cout << "������" << endl;
	}

};


void doSpeak(Animal& animal)
{
	animal.Speak();
	animal.eat();
}

// ���麯���������
class Base
{
public:
	// ��Ϊ���麯������һ���൱�д��ڴ��麯������������ǳ�����
	// 1�������಻�ܱ�ʵ����
	// 2������������������д�����൱�еĴ��麯��������Ҳ����ʵ����
	virtual void speak() = 0;

	// ��Ϊ����������ʹ�ø���ָ����ռ̳е�����ʱ����Ҫд��������ִ�����൱�е���������
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
		cout << "������";
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