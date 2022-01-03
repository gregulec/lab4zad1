#pragma once
#include "BazaFigur.h"
#include <iostream>
using namespace std;
class Triangle :public BazaFigur{
protected:
	double lenght;
	double height;
public:
	Triangle(double lenght, double height);
	~Triangle();
	double area();
	double circuit();
	bool czy_zawiera(double x, double y);
};

