#include <iostream>
using namespace std;


// �̳еĻ���ѧϰ

// ������
class Animal
{
public:
	void Property()
	{
		cout << "��ԡ��ȡ�˯���Ƕ���" << endl;
	}
	
};

// è�� �̳�Animal����
class cat : public Animal
{

public:
	void catProperty()
	{
		cout << "�������У���è" << endl;
	}

};

// è�� �̳�Animal����
// �̳����ͷ�Ϊ public��protected��private
// public �̳и���� public �� protected ���� ��Ȩ��Ϊ public
// protected �̳и���� public �� protected ��Ȩ��ת��Ϊ protected
// private �̳и���� public �� protected ��Ȩ��ת��Ϊ private
class dog : public Animal
{
	
public:
	void dogProperty()
	{
		cout << "�������У��ǹ�" << endl;
	}

};

// �̳г�Աͬ������ʽ

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
//	// ʹ�� Base::�����������ͬ���ĸ�������
//	// ������ͬ��������Ҳ����ʹ��Base::�����������ͬ���ĸ�������
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
//// ���μ̳�(�����õ������˽���������)
//
//
//int main()
//{
//	test02();
//}
