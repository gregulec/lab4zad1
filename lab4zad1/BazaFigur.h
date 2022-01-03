#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class BazaFigur{
protected:
	string name;
	vector<BazaFigur*>figury;
public:

	BazaFigur();
	virtual ~BazaFigur();
	void dodaj(BazaFigur* figura);
	void wyswietl();
	virtual double area() = 0;
	virtual double circuit() = 0;
	virtual bool czy_zawiera(double x,double y)=0;
};

