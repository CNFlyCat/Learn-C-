#include <iostream>
using namespace std;

// 全局函数做友元 //

class Buliding
{
	// 在类中声明友元函数，此函数即可访问本类的私有内容
	friend void My_Friend(Buliding& buliding);

	// 在类中声明友元类例子
	//friend class Friend2();
	
	// 在类中声明友元类函数例子
	//friend void Friend2::visit();

public:

	string livingroom;
	
	Buliding()
	{
		livingroom = "客厅";
		bedroom = "卧室";
	}

private:

	string bedroom;
};

void My_Friend(Buliding &buliding)
{
	cout << "访问" << buliding.livingroom << endl;
	cout << "访问" << buliding.bedroom << endl;		// 当本函数为类的友元函数时可访问其私有内容
}


//int main()
//{
//	Buliding b1;
//	My_Friend(b1);
//}