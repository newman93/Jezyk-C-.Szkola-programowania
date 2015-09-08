#include <iostream>

using namespace std;
	
	struct pudlo{
		char producent[40];
		float wysokosc;
		float szerokosc;
		float dlugosc;
		float objetosc;
	} kostka { "Lego", 10.25, 15.46, 9.24, 0};

void show_data(pudlo);
void insert_capasity(pudlo *);

int main(void)
{
	show_data(kostka);
	insert_capasity(&kostka);
	show_data(kostka);
	cin.get();
	
	return 0;
}
void show_data(pudlo kostka)
{
	cout << "Kostka: " << endl;
	cout << kostka.producent << endl;
	cout << kostka.wysokosc << endl;
	cout << kostka.szerokosc << endl;
	cout << kostka.dlugosc << endl;
	cout << kostka.objetosc << endl;
}

void insert_capasity(pudlo *kostka)
{
	kostka->objetosc = kostka->dlugosc * kostka->szerokosc * kostka->wysokosc;
} 
