#include <iostream>
#include "zad4_header.h"

int main(void)
{
	using namespace SALES;
	
	using std::cin;
	
	double sales_tab[4] = {2000.15, 1562.45, 2759.23, 1700.24 }; 
	Sales one(sales_tab);
	Sales two;
	Sales three;
	
	two.setSales(three);
	
	one.showSales();
	two.showSales();
	
	cin.get();
	
	return 0;
}	
