#pragma once
#include <iostream>
using namespace std;
class Shape {
protected:
    string Color;
    int screenPositionX;
    int screenPositionY;
    bool hasLines ;
    int lineWidth;
    string lineColor;
    string fillType;
public:
    Shape();
    Shape(string col,int PosX,int PosY,bool lines,int width,string lcol,string fill);

};