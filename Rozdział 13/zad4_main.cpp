#include <iostream>
#include "zad4_header.h"

int main(void)
{
	using namespace std;
	
	Port wino_1("Producent_p", "czerwone", 10);
	Port wino_2("Proucent_d", "lekko czerwone", 20);
	Port wino_3;
	wino_1 += 10;
	wino_2 -= 10;
	wino_3 = wino_1;
	
	VintagePort wino_4("Producent_c", 35, "biale",  2014);
	VintagePort wino_5;
	wino_5 = wino_4;
	/*
	cout << wino_1 << endl;
	cout << wino_2 << endl;
	cout << wino_3 << endl;
	cout << wino_4 << endl;
	cout << wino_5 << endl;
	*/
	wino_1.show();
	wino_2.show();
	wino_3.show();
	wino_4.show();
	wino_5.show();
					
	 cin.get();
	
	return 0;
}
