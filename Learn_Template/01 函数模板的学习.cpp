#include <iostream>
using namespace std;

// ʹ�����ַ�ʽ�����Բ��ö�����غ������ö����������ʹ��뺯��

template<typename T> // ����һ��ģ�壬T��һ��ͨ����������
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