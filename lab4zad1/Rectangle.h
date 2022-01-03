#pragma once
#include "BazaFigur.h"
#include <iostream>
using namespace std;

class Rectangle :public BazaFigur{
protected:
	double width;
	double height;
	double x;
	double y;
public:
	Rectangle(double width, double height, double x, double y);
	~Rectangle();
	virtual double area();
	virtual double circuit();
	virtual bool czy_zawiera(double x, double y);
};