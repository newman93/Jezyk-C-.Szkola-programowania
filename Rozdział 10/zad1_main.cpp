#include <iostream>
#include <string>
#include "zad1_header.h"

int main(void)
{
	using std::cout;
	using std::cin;
	using std::endl;
	
	Rachunek osoba_1("Adrian", "513987725", 2000.00);
	osoba_1.show();
	cout << "Depozyt 100zł" << endl;
	osoba_1.depozyt(100.00);
	osoba_1.show();
	cout << "Pobranie 100zł" << endl;
	osoba_1.pobranie(100.00);
	osoba_1.show();
	
	cin.get();
	
	return 0;
}
