#include <iostream>
#include "zad1_header.h"

int main(void)
{
	using std::cin;
	using std::cout;
	using std::endl;
	
	cout << " Podaj nazwe wina: ";
	char lab[50];
	cin.getline(lab, 50);
	cout << "Podaj liczbe rocznikow: ";
	int yrs;
	cin >> yrs;
	
	Wine holding(lab, yrs);		//zapisuje nazwe, liczbe rocznikow i przekazuje informacje o tej liczbie do tablicy
	holding.GetBottles();		//pobiera dane o roczniku i liczbie butelek
	holding.show();				//wyswietla zawartosc obiektu 
	
	const int YRS = 3;
	int y[YRS] = { 1993, 1995, 1998 };
	int b[YRS] = { 48, 60, 72 };
	//tworzy nowy obiekt, inicjalizuje za pomoca danych w tablicach y oraz b
	Wine more("Gushing Grape Red", YRS, y, b);
	more.show();
	cout << "Laczna liczba butelek wina " << more.label() << ": " << more.sum() << endl;
	cout << "Koniec\n";
	
	return 0;
}
