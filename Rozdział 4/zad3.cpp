#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
	cout << "Podaj imie: ";
	char imie[20];
	cin.get(imie,20).get();
	cout << endl;
	
	cout << "Podaj nazwisko: ";
	char nazwisko[20];
	cin.get(nazwisko,20).get();
	cout << endl;
	
	char bufor[200] = "Oto informacje zestawione w jeden napis: ";
	
	strcat(bufor,nazwisko);
	strcat(bufor," , ");
	strcat(bufor, imie);
	
	cout << bufor;
	cin.get();
	
	return 0;
}
