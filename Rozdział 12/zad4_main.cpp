#include <iostream>
#include "zad4_header.h"

int main(void)
{
	using namespace std;
	
	Stack obiekt_1(3);
	
	Item item_1 = 1;
	Item item_2 = 2;
	Item item_3 = 3;
	Item item_4 = 4;
	
	obiekt_1.push(item_1);
	obiekt_1.push(item_2);
	obiekt_1.pop(item_2);
	obiekt_1.push(item_3);
	
	Stack obiekt_2;
	obiekt_2 = obiekt_1;
	
	obiekt_1.show();
	obiekt_2.show();
	
	cin.get();
	
	return 0;
}
