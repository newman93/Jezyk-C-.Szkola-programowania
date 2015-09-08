#include <iostream>		//nie jest wymagane w przypadku większości systemów
#include <fstream>
#include <iomanip>
#include <cstdlib>		//ze względu na funkcje exit

inline void eatline() { while (std::cin.get() != '\n') continue; }
struct planet
{
	char name[20];		//nazwa planety
	double population;  //zaludnienie
	double g;			//przyspieszenie grawitacyjne
};

const char * file = "planety.dat";

int main()
{ 
	using namespace std;
	planet pl;
	cout << fixed << right;
	
	//pokaz poczatkowa zawartosc
	ifstream fin;
	fin.open(file, ios_base::in | ios_base::binary);	//plik binarny
	//UWAGA! Niektóre systemy nie obsługują trybu ios::binary
	if (fin.is_open())
	{
		cout << "Oto aktualna zawartość pliku " << file << " file:\n";
		while (fin.read((char *) &pl, sizeof pl))
		{
			cout << setw(20) << pl.name << ": " << setprecision(0) << setw(12) << pl.population << setprecision(2) << setw(6) << pl.g << endl;
		}
		fin.close();
	}
	
	//dodaj nowe dane
	ofstream fout(file, ios_base::out | ios_base::app | ios_base::binary);
	//UWAGA! Niektóre systemy nie obsługują opcji trybu ios:::binary
	if (!fout.is_open())
	{
		cerr << "Nie można otworzyć pliku " << file << " do zapisu.\n";
		exit(EXIT_FAILURE);
	}
	
	cout << "Podaj nazwę planety (aby zakończyć, wprowadź pusty wiersz);\n";
	cin.get(pl.name, 20);
	while (pl.name[0] != '\0')
	{
		cout << "Podaj zaludnienie planety: ";
		cin >> pl.population;
		cout << "Podaj przyspieszenie grawitacyjne na planecie: ";
		cin >> pl.g;
		eatline();
		fout.write((char * ) &pl, sizeof pl);
		cout << "Podaj nazwę planety (aby zakończyć, wprowadź pusty wiersz):\n";
		cin.get(pl.name, 20);
	}
	fout.close();
	
	//wyświetl zamieniony plik
	fin.clear();	//instrukcja nie jest konieczna w przypadku niektórych kompilatorów
	fin.open(file, ios_base::in | ios_base::binary);
	if (fin.is_open())
	{
		cout << "Oto nowa zawartość pliku " << file << " :\n";
		while (fin.read((char *) &pl, sizeof pl))
		{
			cout << setw(20) << pl.name << ": " << setprecision(0) << setw(12) << pl.population << setprecision(2) << setw(6) << pl.g << endl;
		}
		fin.close();
	}
	
	cout << "Koniec.\n";
	
	return 0;
}
	
