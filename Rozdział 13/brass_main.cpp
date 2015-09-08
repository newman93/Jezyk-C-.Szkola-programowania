#include <iostream>
#include "brass_header.h"

int main()
{
	Brass konto_1("Adrian", "Kowalski", 3522892, 2500.43);
	Brass konto_2("Adrianna", "Kowalska", 513987725, 1200.76);
	BrassPlus konto_3("Adam", "Nowak", 513962258, 3405.64);
	BrassPlus konto_4 (konto_1, 3000, 0.10);
	
	konto_1.Show();
	konto_2.Show();
	konto_3.Show();
	konto_4.Show();
	
	konto_2.Wyplac(300);
	konto_1.Wplac(600);
	konto_3.Wyplac(4000);
	
	konto_1.Show();
	konto_2.Show();
	konto_3.Show();
	
	konto_3.AnulujDlug();
	
	konto_3.Show();
	
	std::cin.get();
	
	return 0;
}
