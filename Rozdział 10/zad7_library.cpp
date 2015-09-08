#include <iostream>
#include <cstring>
#include "zad7_header.h"

Plorg::Plorg(char * n = "Plorga", int s = 50)
{
	strcpy(imie,n);
	sytosc = s;
}

Plorg::~Plorg()
{
}

void Plorg::change(int n)
{
	sytosc=n;
}

void Plorg::say()
{
	using std::cout;
	using std::endl;
	
	cout << "Czesc!" << endl;
	cout << "Mam na imię: " << imie << " Mój współczynnik sytości wynosi: " << sytosc << endl;
}

