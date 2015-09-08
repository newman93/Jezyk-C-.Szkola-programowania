#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	cout << "Podaj swoje imie: ";
	string imie;
	getline(cin, imie);
	cout << endl;
	
	cout << "Podaj swoje nazwisko: ";
	string nazwisko;
	getline(cin, nazwisko);
	cout << endl;
	
	string bufor = "Oto informacje zestawione w jeden napis: ";
	bufor += nazwisko;
	bufor += " , ";
	bufor += imie;
	cout << bufor;
	
	cin.get();
	 
	return 0;
}
