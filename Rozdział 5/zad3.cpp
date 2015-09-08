#include <iostream>

using namespace std;

int main(void)
{
	cout << "Podaj liczby: " << endl;
	int n_liczba;
	int n_suma{0};
	
	cin >> n_liczba;
	while (n_liczba != 0)
	{
		n_suma = n_suma + n_liczba;
		cout << "Suma: " << n_suma << endl;
		cin >> n_liczba;
	} 
	return 0;
}
