#include <iostream>
#include "sprawdzajace_zad2_header.h"

int main(void)
{
	using namespace std;
	
	Frabjous obiekt_1("obiket_p");
	Gloam obiekt_2(2, "obiket_d");
	Gloam obiekt_3(3, obiekt_1);
	
	obiekt_1.tell();
	obiekt_2.tell();
	obiekt_3.tell();
	
	cin.get();

	return 0;
}
