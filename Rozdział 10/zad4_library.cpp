#include  <iostream>
#include "zad4_header.h"

SALES::Sales::Sales(const double ar[])
{
	using namespace SALES;
	
	double minimum  = ar[0];
	double maximum = ar[0];
	double total{0.0};
	
	for (int i=0; i < 4;++i)
	{
		if (maximum < ar[i])
			maximum = ar[i];
		if (minimum > ar[i])
			minimum = ar[i];
		total = total + ar[i];
		sales[i] = ar[i];
	}
	
	average = total/4;
	min = minimum;
	max = maximum;
	
}

SALES::Sales::~Sales()
{
}

SALES::Sales::Sales()
{
	using namespace SALES;	
		
	for(int i = 0; i < 4;++i)
		sales[i] = 0.0;
	min = 0.0;
	max = 0.0;
	average = 0.0;
}

const SALES::Sales &  SALES::Sales::setSales(const SALES::Sales & s) const
{
	using std::cout;
	using std::cin;
	using std::endl;
	using namespace SALES;
	
	double kwota{0.0};
	double minimum{0.0};
	double maximum{0.0};
	double total{0.0};
	double temp{0.0};
	double srednia{0.0};
	cout << "Podaj kwote: " << endl;
	
	for(int i=0; i < 4;++i)
	{
		cout << "#" << i+1 << ": ";
		cin >> temp;
		setSales(temp,i);
		if (maximum < sales[i])
			maximum = sales[i];
		if (i == 0)
			minimum = sales[i];
		if(minimum > sales[i])
			minimum = sales[i];
		total = total + sales[i];
		cout << endl;
	}

	srednia = total/4;
	setValue(minimum,maximum,srednia);
	
	return *this;
}

void SALES::Sales::showSales()
{
	using namespace SALES;
	using std::cout;
	using std::endl;
	
	cout << "Kwota: " << endl;
	for(int i=0; i < 4;++i)
		cout << " #" << i+1 <<": " <<  sales[i];
	
	cout << endl;
	
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
	cout << "Srednia: " << average << endl;
}

void SALES::Sales::setValue(double minimum,double maximum, double srednia)
{
	using namespace SALES;
	
	min = minimum;
	max = maximum;
	average = srednia;
}

void SALES::Sales::setSales(double kwota, int n)
{
	sales[n] = kwota;
}
