//#include <iostream>
//#include "Point.h"
//#include "Circle.h"
//using namespace std;
//
//
//void isInCircle(Circle* c, Point* p)
//{
//    int distance = (c->GetCenter().GetX() - p->GetX()) * (c->GetCenter().GetX() - p->GetX()) + (c->GetCenter().GetY() - p->GetY()) * (c->GetCenter().GetY() - p->GetY());
//    // �뾶��ƽ��
//    int rDistance = c->GetR() * c->GetR();
//
//    if (distance == rDistance)
//    {
//        cout << "����Բ��" << endl;
//    }
//    else if (distance > rDistance)
//    {
//        cout << "����Բ��" << endl;
//    }
//    else if (distance < rDistance)
//    {
//        cout << "����Բ��" << endl;
//    }
//
//}
//
//// ����ĳ�ʼ��������
////1�����캯�� ���г�ʼ������
//
//class Person
//{
//public:
//    int age=0;
//    // ���캯�� ���౻ʵ����ʱ�Զ�����
//    Person()
//    {
//        cout << "���캯�������ã��Զ����ã���ֻ��һ�Σ�" << endl;
//    }
//    // �вι��캯��
//    Person(int a)
//    {
//        age = a;
//        cout << "�вι��캯�������ã��Զ����ã���ֻ��һ�Σ�" << age << endl;
//    }
//    // �������캯�� ���뺯�����������
//    Person(const Person &p)
//    {
//        age = p.age;  
//        cout << "�������캯�������ã��Զ����ã���ֻ��һ�Σ�" << age << endl;
//    }
//    // �������� ���౻����ʱ�����Զ�����
//    ~Person()
//    {
//        cout << "�������������ã��Զ����ã���ֻ��һ�Σ�" << endl;
//    }
//
//private:
//
//};
//
//void test01()
//{
//    // 1�����ŷ�
//    Person pp1;  // Ĭ�Ϲ��챻����
//    Person pp2(16);  // �вι��캯��������
//    Person pp3(pp2); // �������캯��������
//
//    // 2����ʾ��
//    Person p1;
//    Person P2 = Person(10);
//    // 3����ʽת����
//}
//
//// �������캯���ĵ���ʱ��
////1��ʹ��һ���Ѿ�������ɵĶ�������ʼ��һ���¶���
////2��ֵ���ݵķ�ʽ������������ֵ
//
//int main()
//{
//    test01();
//    // ����Բ
//    Circle c;
//    Point center; 
//    c.SetR(10);
//    center.SetX(10);
//    center.SetY(0);
//    c.SetCenter(center);
//
//    //������
//    Point p;
//    p.SetX(10);
//    p.SetY(15);
//
//    isInCircle(&c, &p);
//    system("pause");
//    //cout << cube.getL() << endl;
//}
