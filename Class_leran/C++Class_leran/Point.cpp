#include "Point.h"


Point::Point()
{
    cout << "Point���������Զ����ã���ֻ��һ�Σ�" << endl;
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
