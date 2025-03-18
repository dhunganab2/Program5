#pragma once
#include "Shape.h"
#include "Cricle.h"
class Triangle :public Shape{
protected:
    int pt1X;
    int pt1Y;
    int pt2X;
    int pt2Y;
    int pt3X;
    int pt3Y;
public:
    Triangle();
    Triangle(int x1,int y1,int x2,int y2,int x3,int y3);
    virtual void PrintInfo();
    float getArea();
    float getPerimeter();
};



