#include <iostream>
#include <cstring>
#include "zad3_header.h"

//klasa abstrakcyjna
abstractDMA::abstractDMA(const char * l = "brak", int r = 0)
{
	label = new char[std::strlen(l) + 1];
	std::strcpy(label, l);
	rating = r;
}
/*
abstractDMA::abstractDMA(const abstractDMA & rs)
{
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
}
*/
abstractDMA::~abstractDMA()
{
	delete [] label;
}
/*	
abstarctDMA::abstractDMA & operator=(const abstractDMA & rs)
{
	if (this == &rs)
		return *this;
	delete [] label;
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
	return *this;
}
*/	
		 
void abstractDMA::view() const 
{
	using std::cout;
	using std::endl;
	
	cout << "Tytul: " << label << endl;
	cout << "Ocena: " << rating << endl;
}

//#1 klasa pochodna
baseDMA::~baseDMA()
{
}

void baseDMA::view() const
{
	using std::cout;
	using std::endl;
	
	cout << "Nazwa: " << get_label() << endl;
	cout << "Ocena: " << get_rating() << endl;
}

//#2 klasa pochodna
lacksDMA::lacksDMA(const char * l = "brak", int r = 0,const char * c = "brak") : abstractDMA(l,r)
{
	std::strcpy(color, c);
}
		
lacksDMA::~lacksDMA()
{
}
		
lacksDMA::lacksDMA(const char * c, const baseDMA & rs)
{
}		

void lacksDMA::view() const
{
	using std::cout;
	using std::endl;
	
	cout << "Nazwa: " << get_label() << endl;
	cout << "Ocena: " << get_rating() << endl;
	cout << "Kolor: " << color << endl;
}
		
//#3 klasa pochodna
hasDMA::hasDMA(const char * l = "brak", int r = 0,const  char * d ="bez_stylu") : abstractDMA(l,r)
{
	style = new char[std::strlen(d) + 1];
	std::strcpy(style, d);
}

hasDMA::~hasDMA()
{
	delete [] style;
}
	
hasDMA & hasDMA::operator=(const hasDMA & rs)
{
	if (this == &rs)
		return *this;

	delete [] style;

	style = new char[std::strlen(rs.style) + 1];
	std::strcpy(style, rs.style);

	return *this;
}
	 
		
hasDMA::hasDMA(const hasDMA & rs) : abstractDMA(rs)
{
	style = new char[std::strlen(rs.style) +1];
	std::strcpy(style, rs.style);
}

hasDMA::hasDMA(const char * s, const baseDMA & rs) : abstractDMA(rs)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}	

void hasDMA::view() const
{
	using std::cout;
	using std::endl;
	
	cout << "Nazwa: " << get_label() << endl;
	cout << "Ocena: " << get_rating() << endl;
	cout << "Styl: " << style << endl;
}
