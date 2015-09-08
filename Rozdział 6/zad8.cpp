#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(void)
{
	ifstream inFile;
	inFile.open("plik_zad8.txt");
	if (!inFile.is_open())
	{
		cout << "Otawrcie pliku nie powiodło się" << endl;
		cout << "Program zostanie zakończony" << endl;
		exit(EXIT_FAILURE);
	}
	
	int n_licznik{0};
	char ch;
	
	inFile >> ch;
	while (inFile.good())
	{
		++n_licznik;
		cout << ch;
		inFile >> ch;
	}
	cout << endl;
	
	if (inFile.eof())
		cout << "Koniec pliku. Wczytano " << n_licznik << " znaków." << endl;
	else
	if (inFile.fail())
		cout << "Wczytywanie danych zostało przerwane - blad";
	else
		cout << "Wczytywanie danych przerwane - przyczyna nieznana";
	
	return 0;
}
