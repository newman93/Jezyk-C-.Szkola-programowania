#include <iostream>
#include <string>
#include "zad1_header.h"

Rachunek::Rachunek(const std::string & name, const std::string & number, double sal)
{
	imie = name;
	numer = number;
	saldo = sal;
}
Rachunek::~Rachunek()
{
}

void Rachunek::show(void) const
{
	using std::cout;
	using std::endl;
	
	cout << "Imie: " << imie << endl;
	cout << "Numer konta: " << numer << endl;
	cout << "Saldo: " << saldo << endl;
}
			
void Rachunek::depozyt(double kwota)
{
	saldo = saldo + kwota;
}
			
void Rachunek::pobranie(double kwota)
{
	saldo = saldo - kwota;
}

