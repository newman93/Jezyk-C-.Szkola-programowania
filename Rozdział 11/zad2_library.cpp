#include "zad2_header.h"
#include <cmath>

using namespace std;

namespace VECTOR
{			
	const double Rad_to_deg = 45.0 / atan(1.0);
				
	Vector::Vector()
	{
		x = y = 0.0;
		mode = RECT;
	}
	
	Vector::Vector(double n1, double n2, Mode form = RECT)
	{
		if (form == RECT)
		{
			x = n1;
			y = n2;
		}
		else
		{
			cout << "Niepoprawna wartość trzeciego argumentu Vector() -- zeruję wektor" << endl;
			x = y = 0.0;
			mode = RECT;
		}
	}
	
	void Vector::reset(double n1, double n2, Mode form = RECT)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
		}
		else
		{
			cout << "Niepoprawny terzci argument set() -- zeruję wektor" << endl;
			x = y = 0.0;
			mode = RECT;
		}
	}
	
	Vector::~Vector()
	{
    }
    
    double Vector::set_ang()
    {
		double ang;
		if (x== 0.0 && y == 0.0)
			ang = 0.0;
		else
			ang = atan2(y, x);
		
		return ang;
	}
	
	double Vector::set_mag()
	{
		double mag;
		mag = sqrt(x*x+y*y);
		
		return mag;
	}
    
    double Vector::angval() const
    {
		double ang;
		if (x== 0.0 && y == 0.0)
			ang = 0.0;
		else
			ang = atan2(y, x);
		
		return ang;
	}
	
	double Vector::magval() const
	{
		double mag;
		mag = sqrt(x*x+y*y);
		
		return mag;
	}
    		
    void Vector::polar_mode()
    {
		mode = POL;
	}
		
	void Vector::rect_mode()
	{
		mode = RECT;
	}
	
	Vector Vector::operator+(const Vector & b) const
	{
		return Vector(x + b.x, y + b.y);
	}
	
	Vector Vector::operator-(const Vector & b) const
	{
		return Vector(x - b.x, y - b.y);
	}
	
	Vector Vector::operator-() const
	{
		return Vector(-x, -y);
	}
	
	Vector Vector::operator*(double n) const
	{
		return Vector(n * x, n * y);
	}
	
	Vector operator*(double n, const Vector & a)
	{
		return a * n;
	}
	
	ostream & operator<<(ostream & os, const Vector & v)
	{
		if (v.mode == Vector::RECT)
			os << "(x,y) = (" << v.x << "," << v.y << ")";
		else if (v.mode == Vector::POL)
		{
			os << "(m,a) = (" << v.set_mag() << "," << v.set_ang() * Rad_to_deg << ")";
		}
		else
			os << "Niepoprawny tryb reprezentacji obiektu wektora";
		return os;
	}
}
