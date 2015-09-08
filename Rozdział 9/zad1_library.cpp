#include <iostream>
#include <cstring>
#include "zad1_header.h"

using std::cin;
using std::cout;
using std::endl;

void setgolf(golf & g, const char * name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}

void setgolf(golf & g)
{
	char name[Len];
	cout << "Podaj imie: ";
	cin >> name;
	cout << endl;
	
	if ( strlen(name) != 0 )
	{
		strcpy(g.fullname, name);
		g.handicap = 0;
	}
	else
		g.handicap = 1;
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf & g)
{
	cout << "Imie: ";
	cout << g.fullname;
	cout << endl;
	cout << "Handicap: ";
	cout << g.handicap;
	cout << endl;
}
