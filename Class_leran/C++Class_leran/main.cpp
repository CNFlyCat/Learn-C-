//#include <iostream>
//#include "Point.h"
//#include "Circle.h"
//using namespace std;
//
//
//void isInCircle(Circle* c, Point* p)
//{
//    int distance = (c->GetCenter().GetX() - p->GetX()) * (c->GetCenter().GetX() - p->GetX()) + (c->GetCenter().GetY() - p->GetY()) * (c->GetCenter().GetY() - p->GetY());
//    // 半径的平方
//    int rDistance = c->GetR() * c->GetR();
//
//    if (distance == rDistance)
//    {
//        cout << "点在圆上" << endl;
//    }
//    else if (distance > rDistance)
//    {
//        cout << "点在圆外" << endl;
//    }
//    else if (distance < rDistance)
//    {
//        cout << "点在圆内" << endl;
//    }
//
//}
//
//// 对象的初始化和清理
////1、构造函数 进行初始化操作
//
//class Person
//{
//public:
//    int age=0;
//    // 构造函数 当类被实例化时自动调用
//    Person()
//    {
//        cout << "构造函数被调用！自动调用！且只有一次！" << endl;
//    }
//    // 有参构造函数
//    Person(int a)
//    {
//        age = a;
//        cout << "有参构造函数被调用！自动调用！且只有一次！" << age << endl;
//    }
//    // 拷贝构造函数 传入函数本体的引用
//    Person(const Person &p)
//    {
//        age = p.age;  
//        cout << "拷贝构造函数被调用！自动调用！且只有一次！" << age << endl;
//    }
//    // 析构函数 当类被销毁时，会自动调用
//    ~Person()
//    {
//        cout << "析构函数被调用！自动调用！且只有一次！" << endl;
//    }
//
//private:
//
//};
//
//void test01()
//{
//    // 1、括号法
//    Person pp1;  // 默认构造被调用
//    Person pp2(16);  // 有参构造函数被调用
//    Person pp3(pp2); // 拷贝构造函数被调用
//
//    // 2、显示法
//    Person p1;
//    Person P2 = Person(10);
//    // 3、隐式转换法
//}
//
//// 拷贝构造函数的调用时机
////1、使用一个已经创建完成的对象来初始化一个新对象
////2、值传递的方式给函数参数传值
//
//int main()
//{
//    test01();
//    // 创建圆
//    Circle c;
//    Point center; 
//    c.SetR(10);
//    center.SetX(10);
//    center.SetY(0);
//    c.SetCenter(center);
//
//    //创建点
//    Point p;
//    p.SetX(10);
//    p.SetY(15);
//
//    isInCircle(&c, &p);
//    system("pause");
//    //cout << cube.getL() << endl;
//}
