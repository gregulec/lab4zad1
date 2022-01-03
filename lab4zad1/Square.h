#pragma once
#include "Rectangle.h"
#include <iostream>
using namespace std;

class Square :public Rectangle{
public:
	Square(double width,double x, double y);
	~Square();
	double area();
	double circuit();
	bool czy_zawiera(double x, double y);
};

