#include <iostream>

using namespace std;


// ��̬��Ա������ѧϰ

class Person {

public:

	// ��̬�������ڱ���ʱ�ͷ����ڴ棬��ȫ������
	// ������������������ȫ�ֻ�����ʼ��
	// ������ȫ�ֱ������ⲿ�����޸Ķ�ȡ��ֵ
	static string p_Name;

	int Get_age()
	{
		return age;
	}

private:

	static int age;


};

// �����ʼ��
//string Person::p_Name = "�ɻ�";
//int Person::age = 3;

// ��̬��Ա����
class people {

public:

	// ��̬��Ա����
	// ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	// ��̬��Ա�������ܷ�����ͨ����
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
//	// ��������ķ�ʽ����
//	Person p1;
//	cout << p1.p_Name << endl;
//	cout << p1.Get_age() << endl;
//
//	//ͨ���������з���
//	cout << Person::p_Name << endl;
//	//cout << Person::age << endl; ���ɷ��ʣ����ܵ�˽������
//
//}




//int main()
//{
//	test();
//	system("pause");
//}
