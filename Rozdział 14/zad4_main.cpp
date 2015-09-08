#include <iostream>
#include "zad4_header.h"

int main()
{
	using std::cout;
	using std::endl;
	using std::cin;
	
	Person osoba_1("Adrian", "Kowalski");
	Gunslinger osoba_2("Adrianna", "Kowalska", 22.14, 15);
	PokerPlayer osoba_3("Adam", "Kowal", 14);
	BadDude osoba_4("Tomasz", "Kal", 16.48, 32, 16);
	
	osoba_1.Show();
	osoba_2.Show();
	osoba_3.Show();
	osoba_4.Show();
	
	cin.get();
	
	return 0;
}
