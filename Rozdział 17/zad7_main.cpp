#include <iostream>
#include <vector>
#include <fstream>

void ShowStr(const string & _s);

int main()
{
	using namespace std;
	
	vector<string> vostr;
	string temp;
	
	//pobierz łańcuchy
	cout << "Podaj łańcuchy (aby zakończyć, wprowadź pusty wiersz):\n"
	while (getline(cin, temp) && temp[0] != '\0')
		vostr.push_back(temp);
	
	cout << "Oto Twoje dane wejściowe.\n";
	for_each(vostr.begin(), vostr.end(), ShowStr);
	
	//zapisz w pliku
	ofstream fout("lancuchy.dat", ios_base::out | ios_base::binary);
	for_each(vostr.begin(), vostr.end(), Store(fout));
	fout.close();
	
	//odczytaj zawartośc pliku
	vector<string> vistr;
	ifstream fin("lancuchy.dat", ios_base::in | ios_base::binary);
	if (!fin.is_open())
	{
		cerr << "Nie można otworzyć pliku do odczytu.\n";
		exit(EXIT_FAILURE);
	}
	GetStrs(fin, vistr);
	cout << "\nOto łańcuchy odczytane z pliku:\n";
	for_each(vistr.begin(), vistr.end(), ShowStr);
	
	return 0;
}

void ShowStr(const string & _s)
{
	cout << _s << endl;
}
