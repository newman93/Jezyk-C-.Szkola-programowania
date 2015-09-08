#include <iostream>
#include "zad1_header.h"

int main(void)
{
	Cow obiekt_1("Adrian", "Fajne", 76.55);
	Cow obiekt_2(obiekt_1);
	Cow obiekt_3;
	Cow obiekt_4;
	
	obiekt_3 = obiekt_1;
	
	
	obiekt_1.ShowCow();
	obiekt_2.ShowCow();
	obiekt_3.ShowCow();
	obiekt_4.ShowCow();
	
	std::cin.get();
	
	return 0;
}
