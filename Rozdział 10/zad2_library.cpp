#include <iostream>
#include <string>
#include <cstring>
#include "zad2_header.h"

Person::Person(const std::string & ln, const char * fn = "HejTy")
{
	lname = ln;
	strcpy(fname,fn);
}

Person::~Person()
{	
}

void Person::Show() const
{
	using std::cout;
	using std::endl;
	
	cout << "Casual: " << endl;
	cout << "Imię: " << fname << " Nazwisko: " << lname << endl;
}

void Person::FormalShow() const
{
	using std::cout;
	using std::endl;
	
	cout << "Formal: " << endl;
	cout << "Nazwisko: " << lname << " Imię: " << fname << endl;
}
