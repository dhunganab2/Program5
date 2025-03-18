
#include "Traingle.h"

Triangle::Triangle() {
        pt1X=0;
        pt1Y=0;
        pt2X=0;
        pt2Y=0;
        pt3X=0;
        pt3Y=0;
}
Triangle::Triangle(int x1, int y1, int x2, int y2, int x3, int y3){
        pt1X=x1;
        pt1Y=y1;
        pt2X= x2;
        pt2Y=y2;
        pt3X=x3;
        pt3Y=y3;

}
float Triangle::getArea() {
        float Area = 1/2*
                return Area;
}
float Triangle::getPerimeter() {

}

void Triangle::PrintInfo() {
        cout<<"TRIANGLE"<<endl;
        cout <<"POINT1:"<<pt1X,pt1Y<<endl;
        cout <<"POINT 2:"<<pt2X,pt2Y<<endl;
        cout << "POINT 3:"<<pt3X,pt3Y<<endl;
        cout <<"AREA:"<<getArea()<<endl;

}


