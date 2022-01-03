#include "Rectangle.h"

Rectangle::Rectangle(double width, double height,double x, double y) :width(width), height(height),x(x),y(y){
}


Rectangle::~Rectangle(){
}

double Rectangle::area(){
	return width*height;
}

double Rectangle::circuit(){
	return (2 * width) + (2 * height);
}

bool Rectangle::czy_zawiera(double x, double y){
	if ((x >= Rectangle::x) && (x <= Rectangle::x + width) && (y >= Rectangle::y) && (y <=Rectangle::y +height)){
		return true;
	}
	else return false;
}