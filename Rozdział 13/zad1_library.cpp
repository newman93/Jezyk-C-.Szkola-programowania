#include <iostream>
#include <cstring>
#include "zad1_header.h"

//Cd - klasa bazowa
Cd::Cd(const char * s1,const char * s2, int n, double x)
{
	std::strcpy(performers, s1);
	std::strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd()
{
	std::strcpy(performers, "Domyslne");
	std::strcpy(label, "Domyslne");
	selections = 0;
	playtime = 0.0;
}


Cd::Cd(const Cd & d)
{
	std::strcpy(performers, d.performers);
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}


Cd::~Cd()
{
}

void Cd::Report() const
{
	using std::cout;
	using std::endl;
	
	cout << "Wykonawca: " << performers << endl;
	cout << "Płyta: " << label << endl;
	cout << "Liczba utworów: " << selections << endl;
	cout << "Czas odtwarzania: " << playtime << endl;
}
		
Cd & Cd::operator=(const Cd & d)
{
	std::strcpy(performers, d.performers);
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
		
//Classic - klasa pochodna
Classic::Classic(const char * s1,const char * s2, int n, double x,const char * s3) : Cd(s1,s2,n,x)
{
	std::strcpy(song, s3);
}

Classic::Classic() : Cd()
{
	std::strcpy(song, "Domyslna");
}

void Classic::Report() const
{
	using std::cout;
	using std::endl;
	cout << "Utwór: " << song << endl;
}
