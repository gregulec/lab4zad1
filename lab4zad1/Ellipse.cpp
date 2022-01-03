#include "Ellipse.h"
#include <cmath>

Ellipse::Ellipse(double major, double minor, double x, double y) :major(major), minor(minor), x(x), y(y)
{
}


Ellipse::~Ellipse()
{
}

double Ellipse::area(){
	return 3.14*major*minor;
}

double Ellipse::circuit(){
	return 3.14*(3 / 2 * (major + minor) - (sqrt(major*minor)));
}

bool Ellipse::czy_zawiera(double x, double y){
	if ((x <= Ellipse::major + minor) && (x >= -Ellipse::major + minor) && (y <= Ellipse::major + minor) && (y >= -Ellipse::major + minor)){
		return true;
	}
	else return false;
}