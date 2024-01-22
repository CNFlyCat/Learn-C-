#include <iostream>

using namespace std;


//class Person
//{
//public:
//	int age;
//	int* Height;
//  Constructor	(构造函数)
//	Person()
//	{
//		cout << "default constructor 默认构造函数" << endl;
//	}
//	
//	Person(int a,int height)
//	{
//		cout << "parpmetric constructor 有参构造函数" << endl;
//		age = a;
//		Height = new int(height);	// allocate a new heap memory
//
//	Person(const Person& p)
//	{
//		cout << "Deep Copy" << endl;	// here is deep copy 
//		age = p.age;
//		//Height = p.Height;  default copy methods，here is Shallow Copy
//		Height = new int(*p.Height);	// deep copy method，allocate(分配) new memory on the heap
//	}
//
//	~Person()
//	{
//		// Destructor，free heap memory
//		if (Height != NULL)
//		{
//			delete Height;
//			Height = NULL;
//		}
//			
//		cout << "Destructor 析构函数" << endl;
//	}
//
//};


//void test01()
//{
//	// 编译器会自己执行浅拷贝的操作
//	Person p1(5,85);
//	Person p2(p1);
//	cout << "p2年龄 " << p2.age << endl;
//	cout << "p2年龄 " << *p2.Height << endl;
//}

// 类对象作为类成员
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
	Phone Pname;	// 当其他类作为本类的成员时，先构造其他类
};


//int main()
//{
//	//test01();
//
//	Person p1("王","六");
//	cout << p1.Name << endl;
//
//	system("pause");
//
//	return 0;
//}
