#include <iostream>
#include "zad7_header.h"

using namespace std;

int main(void)
{
	Complex a(3.0, 4.0);
	Complex c;
	
	cout << "Podaj liczbę zespoloną (k, aby zakończyć):\n";
	while (cin >> c)
	{
		cout << "c to " << c << '\n';
		cout << "sprzężąna z c to " << -c << '\n';
		cout << "a to " << a << '\n';
		cout << "a + c wynosi " << a + c << '\n';
		cout << "a - c wynosi " << a - c << '\n';
		cout << "a * c wynosi " << a * c << '\n';
		cout << "2 * c wynosi " << 2 * c << '\n';
		cout << "Podaj liczbę zespoloną (k, aby zakończyć):\n";
	}
		cout << "Gotowe!\n";
		
	return 0;
}
