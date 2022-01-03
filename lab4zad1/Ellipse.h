#pragma once
#include "BazaFigur.h"
#include <iostream>
using namespace std;

class Ellipse :public BazaFigur{
protected:
	double major;
	double minor;
	double x;
	double y;
public:
	Ellipse(double major, double minor,double x,double y);
	~Ellipse();
	virtual double area();
	virtual double circuit();
	virtual bool czy_zawiera(double x, double y);
};

