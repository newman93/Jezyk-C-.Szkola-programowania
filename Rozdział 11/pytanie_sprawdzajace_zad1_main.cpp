#include <iostream>
#include "pytanie_sprawdzajace_zad1_header.h"

int main(void)
{
	using std::cout;
	using std::endl;
	using std::cin;
	
	Stonewt stone_1(25.64);
	Stonewt stone_2(10, 10.5);
	Stonewt stone_3;
	Stonewt stone_4;
	
	cout << "#1" << endl;
	stone_1.show_lbs();
	stone_1.show_stn();
	
	cout << "#2" << endl;
	stone_2.show_lbs();
	stone_2.show_stn();
	
	cout << "#3" << endl;
	stone_3.show_lbs();
	stone_3.show_stn();
	
	cout << "#4" << endl;
	stone_3.show_lbs();
	stone_3.show_stn();
	
	stone_3 = 12.24 * stone_1;
	stone_4 = stone_1.operator*(12.24);
	
	cout << "Przeciążenie: " << endl;
	cout << "Funkcją zaprzyjaźnioną: " << endl;
	
	cout << "#3" << endl;
	stone_3.show_lbs();
	stone_3.show_stn();
	
	cout << "Metodą klasy: " << endl;
	
	cout << "#4" << endl;
	stone_4.show_lbs();
	stone_4.show_stn();
	
	cin.get();
	
	return 0;
}
