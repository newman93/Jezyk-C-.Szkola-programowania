#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int zamienNaMiesiace(int);

int main(void)
{
	cout << "Podaj swoj wiek w latach" << endl;
	
	int wiek;
	cin >> wiek;
	
	cout << "Masz: " << wiek << " lat, " << zamienNaMiesiace(wiek) << " miesiecy." << endl;
	
	return 0;
}

int zamienNaMiesiace(int wiek)
{
	return wiek*12;
}
