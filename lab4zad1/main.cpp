#include "BazaFigur.h"
#include "Rectangle.h"
#include "Ellipse.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include <iostream>
using namespace std;

int main(){
	/*Rectangle rectangle(2.0, 3.0,0.0,0.0);
	Square square(2.0,0.0,0.0);
	Ellipse ellipse(2.0, 3.0,0.0,0.0);
	Circle circle(2.0,0.0,0.0);
	Triangle triangle(3.0, 4.0);
	BazaFigur *r = &rectangle, *s = &square, *e = &ellipse, *c = &circle, *t = &triangle;
	r->dodaj(&rectangle);
	r->wyswietl();
	cout << r->czy_zawiera(4.0, 4.0) << endl;
	s->dodaj(&square);
	s->wyswietl();
	cout << s->czy_zawiera(4.0, 4.0) << endl;
	e->dodaj(&ellipse);
	e->wyswietl();
	cout << e->czy_zawiera(4.0, 4.0) << endl;
	c->dodaj(&circle);
	c->wyswietl();
	cout << c->czy_zawiera(4.0, 4.0) << endl;
	t->dodaj(&triangle);
	t->wyswietl();*/
	Circle *o1;
	BazaFigur *f1;
	f1 = o1 = new Circle(3.0, 0.0, 0.0);
	Ellipse *e1;
	e1 = new Ellipse(2.0, 3.0, 0.0, 0.0);
	Circle o2 = *e1;
	//o2.area();

}