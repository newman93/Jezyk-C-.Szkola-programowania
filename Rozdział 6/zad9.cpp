#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
	struct trzdw{
		string imie;
		double kwota;
	};
	
int main(void)
{
	ifstream inFile;
	inFile.open("plik_zad9.txt");
	if (!inFile.is_open())
	{
		cout << "Otawrcie pliku nie powiodło się" << endl;
		cout << "Program zostanie zakończony" << endl;
		exit(EXIT_FAILURE);
	}
	
	int j;
	
	inFile >> j;
	trzdw *sponsorzy = new trzdw [j];
	
	inFile.get();
	
	for ( int i=0; i < j; ++i)
	{
		getline(inFile, sponsorzy[i].imie);
		inFile >> sponsorzy[i].kwota;
	    inFile.get();
    }
    
    cout << "Wspaniali Sponsorzy" << endl;
	for ( int i=0; i < j; ++i)
		if (sponsorzy[i].kwota >= 10000)
			cout << sponsorzy[i].imie << endl;

	cout << "Nasi Sponsorzy" << endl;
	for ( int i=0; i < j; ++i)
		if (sponsorzy[i].kwota < 10000)
			cout << sponsorzy[i].imie << endl;
			
	return 0;
}

