#include <iostream>

using namespace std;


//class Person
//{
//public:
//	int age;
//	int* Height;
//  Constructor	(���캯��)
//	Person()
//	{
//		cout << "default constructor Ĭ�Ϲ��캯��" << endl;
//	}
//	
//	Person(int a,int height)
//	{
//		cout << "parpmetric constructor �вι��캯��" << endl;
//		age = a;
//		Height = new int(height);	// allocate a new heap memory
//
//	Person(const Person& p)
//	{
//		cout << "Deep Copy" << endl;	// here is deep copy 
//		age = p.age;
//		//Height = p.Height;  default copy methods��here is Shallow Copy
//		Height = new int(*p.Height);	// deep copy method��allocate(����) new memory on the heap
//	}
//
//	~Person()
//	{
//		// Destructor��free heap memory
//		if (Height != NULL)
//		{
//			delete Height;
//			Height = NULL;
//		}
//			
//		cout << "Destructor ��������" << endl;
//	}
//
//};


//void test01()
//{
//	// ���������Լ�ִ��ǳ�����Ĳ���
//	Person p1(5,85);
//	Person p2(p1);
//	cout << "p2���� " << p2.age << endl;
//	cout << "p2���� " << *p2.Height << endl;
//}

// �������Ϊ���Ա
class Phone
{
public:
	string PName;
	// Constructor 
	Phone(string name)
	{
		PName = name;
	}



private:

};

class Person
{
public:
	
	Person(string name,Phone phonename):Name(name),Pname(phonename)
	{

	}

	string Name;
	Phone Pname;	// ����������Ϊ����ĳ�Աʱ���ȹ���������
};


//int main()
//{
//	//test01();
//
//	Person p1("��","��");
//	cout << p1.Name << endl;
//
//	system("pause");
//
//	return 0;
//}
