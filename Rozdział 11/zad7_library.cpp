#include <iostream>
#include "zad7_header.h"

using namespace std;		
		
Complex::Complex(double relative, double imaginary)
{
	r = relative;
	i = imaginary;
}

Complex::Complex()
{
	r = i = 0.0;
}	
			
Complex::~Complex()
{
}
		
ostream & operator<<(ostream & os, const Complex & a)
{
	os << "Liczba zespolona: " << a.r << " + " << a.i << "i" << endl;
}

istream & operator>>(istream & os, Complex & a)
{
	cout << "Część rzeczywista: ";
	os >> a.r;
	cout << endl;
	cout << "Część urojona: ";
	os >> a.i;
	cout << endl;
}
		
Complex operator+(const Complex & a,const Complex & b)
{
	Complex temp;
	
	temp.r = a.r + b.r;
	temp.i = a.i + b.i;
	
	return temp;
}

Complex operator-(const Complex & a,const Complex & b)
{
	Complex temp;
	
	temp.r = a.r - b.r;
	temp.i = a.i - b.i;
	
	return temp;
}
 
Complex operator*(const Complex & a,const Complex & b)
{
	Complex temp;
	
	temp.r = a.r*b.r - a.i*b.i;
	temp.i = a.i*b.r + a.r*b.i;
	
	return temp;
}

Complex operator*(double a, const Complex & b)
{
	Complex temp;
	
	temp.r = a * b.r;
	temp.i = a * b.i;
	
	return temp;
}
		 
Complex operator-(const Complex & a)
{
	Complex temp;
	
	temp.r = a.r;
	temp.i = -a.i;
	
	return temp;
}
