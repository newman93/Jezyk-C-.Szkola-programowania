#include <iostream>
#include "zad5_header.h"

using namespace std;

//Abstr_emp

Abstr_emp::Abstr_emp()
{
	s_fname = "brak";
	s_lname = "brak";
}

void Abstr_emp::ShowAll() const	//opisuje i wyswietla dane
{
	cout << "Imie: " << s_fname << " Nazwisko: " << s_lname << endl;
}	
			
void Abstr_emp::SetAll()	//prosi uzytkownika o podanie wartosci
{
	cout << "Podaj imie: ";
	getline(cin, s_fname);
	cout << endl;
	cout << "Podaj nazwisko: ";
	getline(cin, s_lname);
	cout << endl;
}		

ostream & Abstr_emp::operator<<(ostream & _os, const Abstr_emp & _e)	//wyswietla tylko imie i nazwisko
{
	_os << _e.s_fname;
	_os << " ";
	_os << _e.s_lname;
	_os << endl; 
	
	return _os;
}		
		
Abstr_emp::~Abstr_emp() {} 

//Manager

void Manager::ShowAll() const
{
	Abstr_emp::ShowAll();
	cout << "Liczba obiektow: " << n_inchargeof << endl;
}

void Manager::SetAll()
{
	Abstr_emp::SetAll();
	cout << "Podaj liczbe obiektow: ";
	cin >> n_inchargeof;
	cout << endl;
}

//Fink

void Fink::ShowAll() const
{
	Abstr_emp::ShowAll();
	cout << "Raport: " << s_reportsto << endl;
}

void Fink::SetAll()
{
	Abstr_emp::SetAll();
	cout << "Podaj adresta raportu: ";
	getline(cin, s_reportsto);
	cout << endl;
}

//HighFink

void HighFink::ShowAll() const
{
	Abstr_emp::ShowAll();
	cout << "Liczba obiektow: " << Manager::InChargeOf() << endl;
	cout << "Raport: " << Fink::ReportsTo << endl;
}
	
void HighFink::SetAll()
{
	Abstr_emp::SetAll();
	
}
		
