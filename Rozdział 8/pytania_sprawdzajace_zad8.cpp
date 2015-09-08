#include <iostream>

using namespace std;

struct pudelko{
	char producent[40];
	float wysokosc;
	float szerokosc;
	float dlugosc;
	float pojemnosc;
};

void show(pudelko &);
void fill_it(pudelko &);

template<typename T>
T & max(T & a,T & b);

template <> pudelko & max<pudelko>(pudelko & a, pudelko & b);

int main(void)
{
	pudelko karton1 = { "KarteX", 10.25, 20.41, 15.36, 0};
	pudelko karton2 = { "KartoniX", 22.25, 20.41, 15.36, 0};
	
	fill_it(karton1);
	fill_it(karton2);
	show(max(karton1,karton2));
	
	cin.get();
	
	return 0;
}

template<typename T>
T & max(T & a,T & b)
{
	return (a>b) ? a : b;
}

template <> pudelko & max<pudelko>(pudelko & a, pudelko & b)
{
	return (a.pojemnosc > b.pojemnosc) ? a : b;
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
