#include <iostream>
#include <fstream>
#include <string>

int main()
{
	using namespace std;
	string s_plik;
	char c_znak;
	
	cout << "Podaj nazwę pliku, do którego mają zostać zapisane dane: ";
	cin >> s_plik;
	
	ofstream fout(s_plik.c_str());
	
	cout << "Wprowadz dane, zakończ znakiem końca pliku (CTRL+D)" << endl;
	
	while (!(cin.get(c_znak).eof()))
	{
		fout << c_znak;
	}
	cout << "Wprowadzanie danych zakończone..." << endl;
	cout << "Koniec pracy programu" << endl;
	
	fout.close();
	return 0;
}
