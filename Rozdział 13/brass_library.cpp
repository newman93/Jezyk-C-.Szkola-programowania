#include "brass_header.h"
#include <iostream>
#include <cstring>

//Brass
Brass::Brass(const char * _i = "Brak", const char * _n = "Brak", long _r = -1, double _s = 0.0)
{
	using std::strlen;
	using std::strcpy;
	
	c_imie = new char[strlen(_i) + 1];
	strcpy(c_imie, _i);
	
	c_nazwisko = new char[strlen(_n) + 1];
	strcpy(c_nazwisko, _n);
	
	 l_numer_rachunku = _r;
	 d_saldo = _s;
}

Brass::~Brass()
{
	delete [] c_imie;
	delete [] c_nazwisko;
}

void Brass::Wyplac(double _p)
{
	if (d_saldo >= _p)
		d_saldo -= _p;
	else
		std::cout << "Brak srodkow na koncie!" << std::endl;
}

void Brass::Show()
{
	using std::cout;
	using std::endl;
 
	cout << "Informacje - Konto Bankowe" << endl;
	cout << "Imie: " << c_imie << " Nazwisko: " << c_nazwisko << endl;
	cout << "Numer rachunku: " << l_numer_rachunku << " Saldo: " << d_saldo << endl;
}

//BrassPlus
BrassPlus::~BrassPlus()
{
}

void BrassPlus::Wyplac(double _p) //moze powstac debet, na rachunku BrassPlus
{
	double d_temp{0.0};
	if (Saldo() >= _p)
	{
		d_temp = Saldo();
		d_temp -= _p;
		ZmienSaldo(d_temp);
	}
	else if (((d_limit_debetu + Saldo()) - d_zadluzenie) >= _p)
	{
		d_zadluzenie = _p - Saldo();
		ZmienSaldo(0.0);
	}
	else
		std::cout << "Brak srodkow na koncie!" << std::endl;
} 

void BrassPlus::Show()
{
	using std::cout;
	using std::endl;
	
	Brass::Show();
	cout << "Limit debetu: " << d_limit_debetu << endl;
	cout << "Oprocentowanie: " << d_stopa_oprocentowania << endl;
	cout << "Zadluzenie: " << d_zadluzenie << endl;
}

