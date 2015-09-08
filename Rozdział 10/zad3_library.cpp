#include <iostream>
#include <cstring>
#include "zad3_header.h"

Golf::Golf( const char * fn, const int hp)
{
	strcpy(fullname, fn);
	handicap = hp;
}

Golf::Golf()
{
	strcpy(fullname, "Domyslne");
	handicap = 0;
}

Golf::~Golf()
{
}
	
void Golf::showgolf() const
{
	using std::cout;
	using std::endl;
	
	cout << "Imię: " << fullname << " Handicap: " << handicap << endl; 
}

const Golf &  Golf::setgolf(const Golf & g) const
{
	using std::cout;
	using std::cin;
	char temp[30];
	
	cout << "Podaj imię: ";
	cin >> temp;
	strcpy(fullname,temp);
	
	return *this;
}

