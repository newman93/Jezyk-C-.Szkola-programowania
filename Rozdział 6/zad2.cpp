#include <iostream>
#include <array>
#include <cctype>

using namespace std;

int main(void)
{
	array<double, 10> tablica;
	double d_liczba;
	cout << ": ";
	cin >> d_liczba;
	
	double d_licznik{0};
	while (d_liczba != 0)
	{
		if (d_licznik < 10)
		{
			tablica[d_licznik] = d_liczba;
			d_licznik = d_licznik +1;
			cout << ": " << endl;
			cin >> d_liczba;
		}
		else 
			break;
	}
	
	double d_suma{0};
	
	for ( int i=0; i < d_licznik; ++i)
		d_suma = d_suma + tablica[i];
	
	cout << d_suma << endl;
	double d_srednia = d_suma/(d_licznik);
	cout << "Średnia: " << d_srednia << endl;
	cout << "Mniejsze od średniej: ";
	for ( int i=0; i < d_licznik; ++i)
	{
		if (tablica[i] < d_srednia)
			cout << tablica[i] << " ";
	}
	
	cin.get();
	
	return 0;
}
