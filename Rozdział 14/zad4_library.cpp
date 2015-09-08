#include "zad4_header.h"
#include <iostream>

//Person

void Person::Show()  //wyswietla imie i nazwisko
{
	std::cout << "Imie: " << s_imie << " Nazwisko: " << s_nazwisko << std::endl;
}

//Gunslinger

void Gunslinger::Show()	//wyswietla czas i nacisniecia
{
	Person::Show();
	std::cout << "Czas: " << d_czas << " Nacisniecia: " << n_nacisniecia << std::endl;
}

//PokerPlayer

void PokerPlayer::Show() //zwraca karte
{
	Person::Show();
	std::cout << "Karta: " << n_liczba << std::endl;
}

//BadDude

void BadDude::Show()
{
	Gunslinger::Show();
	std::cout << "Karta: " << PokerPlayer::Draw() << std::endl;
} 
