#include <iostream>
using namespace std;


// C++����ģ�ͺ�thisָ���ѧϰ // 

// 1 ��Ա�����ͳ�Ա�����ֿ�����

//class Person
//{
//
//
//};
//
//void test01()
//{
//	// ������һ�����󣬶�������Ϊ��ʱ
//	// ��ռ���ڴ�Ϊ1���ֽ�
//	// ����������һ���Ǿ�̬����ʱ����Int��Ĵ�СΪ4�ֽ�
//	// ���ǵ���������һ���Ǿ�̬����ʱ����Ĵ�С�������ı�
//	// �ɴ˿�֪����Ա�����ͳ�Ա�����ֿ������
//	Person p;
//	cout << "sizeof p = " << sizeof(p) << endl;
//
//}

// this ָ���ѧϰ�����

//01 ���������ͻ����
class Person 
{

public:

	// �����ֱ�������ͻʱ���������ڵ�age������������age����ͬһ������Ҫ��this���������
	int age;
	Person(int age)
	{
		//������ͻ��age���ܱ��ɹ���ֵ
		//age = age;	

		// ��ȷд��
		this->age = age;
	}


	// ʹ��this��������ķ�����ʵ����ʽ���

	Person& AddPersonAge(Person p)
	{
		this->age += p.age;
		
		// ������ı���
		return *this;
	}



};


void test01()
{
	Person p1(20);
	cout << p1.age << endl;

}


// 02 ���ض�����
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//	
//	// ��ʽ���˼ά��ʵ����age���ۼ�
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