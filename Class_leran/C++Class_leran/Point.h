#pragma once
#include <iostream>
using namespace std;

class Point
{

private:
    int m_X;
    int m_Y;
    


public:
    void SetX(int x);
    void SetY(int y);
    int GetX();
    int GetY();
    Point();
    ~Point();



};

