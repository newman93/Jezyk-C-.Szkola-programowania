#include <iostream>

using namespace std;
int pierwszaFunkcja(void);
int drugaFunkcja(void);

int main(void)
{
	pierwszaFunkcja();
	pierwszaFunkcja();
	drugaFunkcja();
	drugaFunkcja();
	
	return 0;
}

int pierwszaFunkcja(void)
{
	cout << "Pierwsze zdanie" << endl;
	
	return 0;
}

int drugaFunkcja(void)
{
	cout << "Drugie zdanie" << endl;

	return 0;
}
