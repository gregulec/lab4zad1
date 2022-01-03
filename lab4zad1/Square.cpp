#include "Square.h"
#include "Rectangle.h"


Square::Square(double width,double x,double y) :Rectangle(width, width,x,y)
{
}


Square::~Square()
{
}

double Square::area(){
	return width*width;
}

double Square::circuit(){
	return 4 * width;
}

bool Square::czy_zawiera(double x, double y){
	if ((x >= Square::x) && (x <= Square::x + width) && (y >= Square::y) && (y <= Square::y + width)){
		return true;
	}
	else return false;
}