#include <cmath>
#include "Cricle.h"
#include <iostream>
using namespace std;

Circle::Circle() {
    centerX= 0;
    centerY=0;
    radius =0.0;
}
Circle::Circle(int x,int y,float rad ,string col,int PosX,int PosY,bool lines,int width,string lcol,string fill) :Shape(col,PosX,PosY,lines,width,lcol,fill){
    centerX=x;
    centerY=y;
    radius=rad;


}

 float Circle::getArea() {
    float Area= M_PI*radius*radius;
    return Area;

}
float Circle::getCircumference() {
    float circum =2*M_PI*radius;
    return circum;
}
void  Circle:: PrintInfo() {
    cout <<"Circle"<<endl;
    cout <<"CENTER POSITION:"<<centerX<<","<<centerY<<endl;
    cout<<"RADIUS:"<<radius<<endl;
    cout <<"AREA:"<<getArea()<<endl;
    cout <<"CIRCUMFERENCE:"<<getCircumference()<<endl;
    Shape::PrintInfo();
}




