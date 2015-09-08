#include <iostream>
#include "zad6_header.h"

Move::Move(double a = 0, double b = 0)
{
	x=a;
	y=b;
}

void Move::showmove() const
{
	using std::cout;
	using std::endl;
	
	cout << "x: " << x << " y: " << y << endl;
}


Move Move::add(const Move & m) const
{
	double a{0.0};
	double b{0.0};
	a = m.x + this->x;
	b = m.y + this->y;
	Move *obiekt = new Move;
	obiekt->x=a;
	obiekt->y=b;
	
	return *obiekt;
}
void Move::reset(double a = 0, double b = 0)
{
	x=a;
	y=b;
}
