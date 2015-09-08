#include <iostream>		//nie jest wymagane w przypadku większościsystemów
#include <fstream>
#include <iomanip>
#include <cstdlib>		//ze względu na funckję exit()

const int LIM = 20;

struct planet
{
	char name[LIM];		//nazwa planety
	double population;	//zaludnienie
	double g;			//przyspieszenie grawitacyjne
};

const char * file = "planety.dat";		//Z ZAŁOŻENIA ISTNIEJE (przykład binary.cpp)
inline void eatline() { while (std::cin.get() != '\n') continue; }

int main()
{
	using namespace std;
	planet pl;
	cout << fixed;
	
	//pokaż początkową zawartość
	fstream finout;		//strumienie do odczytu i zapisu
	finout.open(file, ios_base::in | ios_base::out | ios_base::binary);
	//UWAGA! Niektóre systemy Unix wymagają pominięcia członu ios_base::binary
	int ct = 0;
	if (finout.is_open())
	{
		finout.seekg(0);	//przejdż na początek
		cout << "Oto aktualna zawartość pliku " << file << ":\n";
		while (finout.read((char *) &pl, sizeof pl))
		{
			cout << ct++ << ": " << setw(LIM) << pl.name << ": " << setprecision(0) << setw(12) << pl.population << setprecision(2) << setw(6) << pl.g << endl;
		}
			if (finout.eof())
				finout.clear();		//skasuj znacznik końca pliku
			else
			{
				cerr << "Błąd przy próbie odczytu pliku " << file << ".\n";
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			cerr << "Nie można otworzyć pliku " << file << " -- koniec pracy programu.\n";
			exit(EXIT_FAILURE);
		}
		
		//zmień rekord
		cout << "Podaj numer rekordu, któ¶y chcesz zmienić: ";
		long rec;
		cin >> rec;
		eatline();
		if (rec < 0 || rec >= ct)
		{
			cerr << "Nieprawidłowy numer rekordu -- koniec pracy programu\n";
			exit(EXIT_FAILURE);
		}
		streampos place = rec * sizeof pl;		//konwertuj na typ streampos
		finout.seekg(place);					//dostęp swobodny
		if (finout.fail())
		{
			cerr << "Błąd podczas wyszukiwanie pozycji\n";
			exit(EXIT_FAILURE);
		}
		
		finout.read((char *) &pl, sizeof pl);
		cout << "Twój wybór:\n";
		cout << rec << ": " << setw(LIM) << pl.name << ": " << setprecision(0) << setw(12) << pl.population << setprecision(2) << setw(6) << pl.g << endl;
		
		if (finout.eof())
			finout.clear();			//skasuj znacznik końca pliku
			
		cout << "Podaj nazwę planety: ";
		cin.get(pl.name, LIM);
		cout << "Podaj zaludnienie planety: ";
		cin >> pl.population;
		cout << "Podaj przyspieszenie grawitacyjne na planecie: ";
		cin >> pl.g;
		finout.seekp(place);		//wróć
		finout.write((char *) &pl, sizeof pl) << flush;
		if (finout.fail())
		{
			cerr << "Błądz przy próbie zapisu\n";
			exit(EXIT_FAILURE);
		}
		
		//wyświetl zmieniony plik
		ct = 0;
		finout.seekg(0);	//przejdź na początek pliku
		cout << "Oto nowa zawartość pliku " << file << " :\n";
		while (finout.read((char *) &pl, sizeof pl))
		{
			cout << ct++ << ": " << setw(LIM) << pl.name << ": " << setprecision(0) << setw(12) << pl.population << setprecision(2) << setw(6) << pl.g << endl;
			
		}
		
		finout.close();
		cout << "Koniec.\n";
		
		return 0;
}
	
