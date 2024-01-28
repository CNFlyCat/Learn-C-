#include <iostream>
using namespace std;

// 使用这种方式，可以不用多次重载函数，让多种数据类型传入函数

template<typename T> // 声明一个模板，T是一个通用数据类型
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
	
	cout << a << endl;

	cout << b << endl;

}


int main()
{
	char a = 'a';
	char b = 'b';
	

	mySwap(a, b);
}