#include <iostream>
#include <cstring>
#include "zad2_header.h"

//Cd - klasa bazowa
Cd::Cd(const char * s1,const char * s2, int n, double x)
{
	int n_lenght = std::strlen(s1);
	performers = new char[n_lenght + 1];
	std::strcpy(performers, s1);
	n_lenght = std::strlen(s2);
	label = new char[n_lenght + 1];
	std::strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd()
{
	performers = new char [9];
	label = new char [9];
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
	delete [] performers;
	delete [] label;
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

void Cd::show_details() const
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
	delete [] performers;
	delete [] label;
	performers = new char[std::strlen(d.performers) + 1];
	std::strcpy(performers, d.performers);
	label = new char[std::strlen(d.label) + 1];
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
		
//Classic - klasa pochodna
Classic::Classic(const char * s1,const char * s2, int n, double x,const char * s3) : Cd(s1,s2,n,x)
{
	song = new char [std::strlen(s3)+1];
	std::strcpy(song, s3);
}

Classic::Classic() : Cd()
{
	song = new char[9];
	std::strcpy(song, "Domyslna");
}

void Classic::Report() const
{
	using std::cout;
	using std::endl;
		
	show_details();
	cout << "Utwór: " << song << endl;
}

