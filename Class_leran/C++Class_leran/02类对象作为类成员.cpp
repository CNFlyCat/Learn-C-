#include <iostream>

using namespace std;

// �������Ϊ���Ա��ѧϰ

class Phone {

	

public:

	// ���캯��
	Phone(string Name)
	{
		Phone_Name = Name;
	}

	string Phone_Name;



};


class Person
{
public:

	Person(string pname, string phone):p_Name(pname),p_Phone(phone)
	{

	}

	string p_Name;
	Phone p_Phone;

};

//int main()
//{
//	Person p1("��", "С��");
//
//	cout << p1.p_Name << endl;
//	cout << p1.p_Phone.Phone_Name << endl;
//
//	system("pause");
//}