#include <iostream>

using namespace std;

void czas(int,int);

int main(void)
{
	cout << "Podaj liczbe godzin: " << endl;
	int godzina;
	cin >> godzina;
	cout << "Podaj liczbe minut: " << endl;
	int minuta;
	cin >> minuta;
	czas(godzina,minuta);
	
	cin.get();
	
	return 0;
}

void czas(int godzina,int minuta)
{
	cout << "Czas: " << godzina << ":" << minuta << endl;
}
