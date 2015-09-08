#include <iostream>
#include "sprawdzajace_zad3_header.h"

int main(void)
{
	using namespace std;
	
	Frabjous obiekt_1("obiekt_p");
	Gloam obiekt_2(2, "obiekt_d");
	Gloam obiekt_3(3, obiekt_1);
	
	obiekt_1.tell();
	obiekt_2.tell();
	obiekt_3.tell();
	
	cin.get();
	
	return 0;
}
