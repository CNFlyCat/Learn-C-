#include <iostream>
using namespace std;

// ȫ�ֺ�������Ԫ //

class Buliding
{
	// ������������Ԫ�������˺������ɷ��ʱ����˽������
	friend void My_Friend(Buliding& buliding);

	// ������������Ԫ������
	//friend class Friend2();
	
	// ������������Ԫ�ຯ������
	//friend void Friend2::visit();

public:

	string livingroom;
	
	Buliding()
	{
		livingroom = "����";
		bedroom = "����";
	}

private:

	string bedroom;
};

void My_Friend(Buliding &buliding)
{
	cout << "����" << buliding.livingroom << endl;
	cout << "����" << buliding.bedroom << endl;		// ��������Ϊ�����Ԫ����ʱ�ɷ�����˽������
}


//int main()
//{
//	Buliding b1;
//	My_Friend(b1);
//}