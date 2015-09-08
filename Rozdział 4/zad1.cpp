#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(void)
{
    struct {
		string imie;
		string nazwisko;
		int ocena;
		int wiek;
	} osoba;
	
	cout << "Jak masz na imie? ";
	cin >> osoba.imie;
	cout << endl;
	
	cout << "Jak masz na nazwisko? ";
	cin >> osoba.nazwisko;
	cout << endl;
	
	cout << "Na jaką ocene zasługujesz? ";
	cin >> osoba.ocena;
	cout << endl;
	
	cout << "Ile masz lat? ";
	cin >> osoba.wiek;
	cout << endl;
	
	cout << "Nawisko: " << osoba.nazwisko << " Imie: " << osoba.imie << endl;
	cout << "Ocena: " << osoba.ocena << endl;
	cout << "Wiek: " <<osoba.wiek << endl;
	
	cin.get();
	
	return 0;
}
