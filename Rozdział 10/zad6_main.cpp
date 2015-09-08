#include <iostream>
#include "zad6_header.h"

int main(void)
{
	using std::cout;
	using std::endl;
	using std::cin;
	
	Move obiekt_1(1.5, 2.5);
	Move obiekt_2(2.5, 1.5);
	Move obiekt_3;
	
	cout << "Obiekt 1: " << endl;
	obiekt_1.showmove();
	cout << "Obiekt 2: " << endl;
	obiekt_2.showmove();
	
	obiekt_1.reset(2.5, 1.5);
	cout << "Obiekt 1 po zmianie: " << endl;
	obiekt_1.showmove();
	
	obiekt_3 = obiekt_1.add(obiekt_2);
	cout << "Obiekt 3: " << endl;
	obiekt_3.showmove();
	cin.get();
	
	return 0;
}
