#include "Circle.h"
#include "Ellipse.h"

Circle::Circle(double major,double x,double y) :Ellipse(major, major,x,y)
{
	cout << "kons kolo";
}


Circle::~Circle()
{
}

double Circle::area(){
	return 3.14*major*major;
}

double Circle::circuit(){
	return 2 * 3.14 * major;
}

bool Circle::czy_zawiera(double x, double y){
	if ((x <= Circle::x) && (x >= -Circle::x) && (y <= Circle::y) && (y >= -Circle::y)){
		return true;
	}
	else return false;
}