
#pragma once
#include "Shape.h"

class Circle :public Shape{
protected:
    int centerX;
    int centerY;
    float radius ;
public:
    Circle();
    Circle(int x,int y,float rad ,string col,int PosX,int PosY,bool lines,int width,string lcol,string fill) ;
    virtual void PrintInfo();
    virtual float getArea();
    float getCircumference();
};




