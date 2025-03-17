
#include "Shape.h"
using namespace std;

Shape::Shape() {
    Color ="Transparent";
    screenPositionX =0;
    screenPositionY= 0;;
    hasLines = false;
    lineWidth= 0;
    lineColor="Black";
    fillType="None";
}

Shape:: Shape(string col,int PosX,int PosY,bool lines,int width,string lcol,string fill){
    Color= col;
    screenPositionX= PosX;
    screenPositionY= PosY;
    hasLines= lines;
    lineWidth = width;
    lineColor = lcol;
    fillType = fill;

}


}