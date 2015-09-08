#include <iostream>
#include "zad4_header.h"


void SALES::setSales(Sales & s, const double ar[], int n)
{
	double minimum = ar[0];
	double maximum = ar[0];
	double sum{0.0};
	for ( int i = 0; i < 4; ++i)
	{
		if (minimum > ar[i])
			minimum = ar[i];
		if (maximum < ar[i])
			maximum = ar[i];
		s.sales[i] = ar[i];	
		sum = sum + ar[i];
	}
	s.min = minimum;
	s.max = maximum;
	s.average = sum/4;
}
void SALES::setSales(Sales & s)
{
	using std::cout;
	using std::cin;
	using std::endl;
	
	double minimum{0.0};
	double maximum{0.0};
	double sum{0.0};
	
	cout << "Podaj dane: " << endl;
	for ( int i = 0; i < 4; ++i)
	{
		cout << "#" << i+1 << ": " << endl;
		cin >> s.sales[i];
		if (i == 0)
			minimum = s.sales[i];
		sum = sum + s.sales[i];
		if (minimum > s.sales[i])
			minimum = s.sales[i];
		if (maximum < s.sales[i])
			maximum = s.sales[i];
	}
	s.min = minimum;
	s.max = maximum;
	s.average = sum/4;
}
void SALES::showSales(const Sales & s)
{
	using std::cout;
	using std::cin;
	using std::endl;
	

	cout << "Minimum: " << s.min << endl;
	cout << "Maximum: " << s.max << endl;
	cout << "Średnia: " << s.average << endl;
}
