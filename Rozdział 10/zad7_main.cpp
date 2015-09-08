#include <iostream>
#include "zad7_header.h"

int main(void)
{
	using std::cin;
	
	Plorg pro_1("Adrian", 100);
	Plorg pro_2;
	
	pro_1.say();
	pro_2.say();
	pro_2.change(0);
	pro_2.say();
	
	cin.get();
	
	return 0;
}
