#include <iostream>

using std::ostream;
using std::istream;

class Complex
{
	private:
		double r;	//część rzeczywista
		double i;	//część urojona
	public:
		Complex(double relative, double imaginary);
		Complex();
		~Complex();
		friend  ostream & operator<<(ostream & os, const Complex & a);
		friend  istream & operator>>(istream & os, Complex & a);
		friend Complex operator+(const Complex & a,const Complex & b);
		friend Complex operator-(const Complex & a,const Complex & b); 
		friend Complex operator*(const Complex & a,const Complex & b);
		friend Complex operator*(double a,const Complex & b);
		friend Complex operator-(const Complex & a);
};
