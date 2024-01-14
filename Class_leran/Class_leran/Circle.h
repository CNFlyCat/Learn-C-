#pragma once
#include <iostream>
#include "Point.h"
using namespace std;

class Circle
{
private:
    int m_R = 0;
    Point m_Center;
public:
    void SetR(int r);
    int GetR();
    void SetCenter(Point center);
    Point GetCenter();
};

