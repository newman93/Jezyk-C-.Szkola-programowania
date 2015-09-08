#include "zad4_header.h"
#include <cstring>

//klasa bazowa
Port::Port(const char * br = "Brak", const char * st = "Brak", int b = 0)
{
	brand = new char[std::strlen(br) + 1];
	std::strcpy(brand, br);
	std::strcpy(style, st);
	bootles = b;
}
		
Port::Port(const Port & p)		//konstruktor kopiujacy
{
	brand = new char[std::strlen(p.brand) + 1];
	std::strcpy(brand, p.brand);
	std::strcpy(style, p.style);
	bootles = p.bootles;
}
		
Port & Port::operator=(const Port & p)
{
	if (this == &p)
		return *this;

	delete [] brand;

	brand = new char[std::strlen(p.brand) + 1];
	std::strcpy(brand, p.brand);
	std::strcpy(style, p.style);
	bootles = p.bootles;

	return *this;
}

Port & Port::operator+=(int b) 	//dodaje b do booteles
{
	bootles = bootles + b;
}		
		
Port & Port::operator-=(int b)	//odejmuje bo do bootles, jesli operacja ta jest mozliwa
{
	if ( (bootles - b) >= 0)
		bootles = bootles - b;
}		

void Port::show() const
{
	using std::cout;
	using std::endl;
	
	cout << "Marka: " << brand << endl;
	cout << "Rodzaj: " << style << endl;
	cout << "Butelek: " << bootles << endl;
}		
/*
ostream & Port::operator<<(ostream & os,const Port & p)
{
	using std::ostream;
	
	os << p.brand;
	os << ", ";
	os << p.style;
	os << ", ";
	os << p.bootles << std::endl;
	
	return os; 
}
*/		
//klasa pochodna		
VintagePort::VintagePort() : Port("Brak","najlepszy rocznik",0)
{
	nickname = new char[5];
	std::strcpy(nickname, "brak");
	year = 0;
}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y) : Port(br,"najlepszy rocznik",b)
{
	nickname = new char[std::strlen(nn) + 1];
	std::strcpy(nickname, nn);
	year = y;
}
		
VintagePort::VintagePort(const VintagePort & vp) : Port(vp)
{
	nickname = new char[std::strlen(vp.nickname) + 1];
	std::strcpy(nickname, vp.nickname);
	year = vp.year;
}
		
VintagePort & VintagePort::operator=(const VintagePort & vp) 
{
	if (this == &vp)
		return *this;

	delete [] nickname;

	nickname = new char[std::strlen(vp.nickname) + 1];
	std::strcpy(nickname, vp.nickname);
	year = vp.year;

	return *this;
}
		
void VintagePort::show() const
{
	using std::cout;
	using std::endl;
	
	cout << "Marka: " << get_brand() << endl;
	cout << "Rodzaj: " << get_style() << endl;
	cout << "Butelek: " << get_bootles() << endl;
	cout << "Nick: " << nickname << endl;
	cout << "Rok: " << year << endl;
}
/*
ostream & VintagePort::operator<<(ostream & os, const VintagePort & vp)
{
	using std::ostream;
	
	os << get_brand();
	os << ", ";
	os << get_style();
	os << ", ";
	os << get_bootles();
	os << << ", ";
	os << nickname;
	os << ", ";
	os << year << std::endl;
	
	return os;
}
*/
