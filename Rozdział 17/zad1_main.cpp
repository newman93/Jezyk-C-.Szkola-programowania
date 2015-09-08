#include <iostream>

int main()
{
	using namespace std;
	
	char c_znak;
	int n_licznik{0};
	
	cout << "Wprowadz dane, zakoncz znakiem $" << endl;
	cin >> c_znak;
	while (c_znak != '$')
	{
		++n_licznik;
		cin >> c_znak;
	}
	
	cout << "Wprowadzono: " << n_licznik << " znaków." << endl;
	
	return 0;
}
