#include <iostream>
#include "zad4_header.h"

using std::cout;
using std::endl;
using std::cin;

int main(void)
{
	SALES::Sales obiekt_1;
	SALES::Sales obiekt_2;
	double tablica[4] = { 1024.56, 2016.54, 700.53, 2000.34 };
	
	SALES::setSales(obiekt_1, tablica, 4);
	SALES::setSales(obiekt_2);	
	
	cout << "Obiekt 1: " << endl;
	SALES::showSales(obiekt_1);
	cout << "Obiekt 2: " << endl;
	SALES::showSales(obiekt_2);
	
	cin.get();
	
	return 0;
}
