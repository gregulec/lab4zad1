#pragma once
#include "Ellipse.h"
#include <iostream>
using namespace std;

class Circle :public Ellipse{
public:
	Circle(double radius,double x,double y);
	~Circle();
	double area();
	double circuit();
	bool czy_zawiera(double x, double y);
};

