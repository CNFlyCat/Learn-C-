#include "Point.h"


Point::Point()
{
    cout << "Point被创建！自动调用！且只有一次！" << endl;
}

Point::~Point()
{

}

void Point::SetX(int x)
{
    m_X = x;
}
void Point::SetY(int y)
{
    m_Y = y;
}
int Point::GetX()
{
    return m_X;
}
int Point::GetY()
{
    return m_Y;
}
