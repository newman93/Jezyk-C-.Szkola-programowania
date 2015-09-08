#include <iostream>

using namespace std;

struct pudelko{
	char producent[40];
	float wysokosc;
	float szerokosc;
	float dlugosc;
	float pojemnosc;
} karton { "KarteX", 10.25, 20.41, 15.36, 0};

void show(pudelko &);
void fill_it(pudelko &);

int main(void)
{
	show(karton);
	fill_it(karton);
	show(karton);
	cin.get();
	
	return 0;
}

void fill_it(pudelko & karton)
{
	karton.pojemnosc = karton.wysokosc * karton.szerokosc * karton.dlugosc;
}

void show(pudelko & karton)
{
	cout << "Producent: " << karton.producent << endl;
	cout << "Wysokosc: " << karton.wysokosc << " cm" << endl;
	cout << "Szerokosc: " << karton.szerokosc << " cm" << endl;
	cout << "Dlugosc: " << karton.dlugosc << " cm" << endl;
	cout << "Pojemnosc: " << karton.pojemnosc << " cm" << endl;
}
