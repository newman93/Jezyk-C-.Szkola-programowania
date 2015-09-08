#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	struct car{
		string s_marka;
		int n_rok_budowy;
	};
	
	cout << "Wprowadz liczbe skatalogowanych samochodów: ";
	int n_liczba;
	cin >> n_liczba;
	cin.get();
	
	car *katalog = new car  [n_liczba];
	for (int i=0; i < n_liczba; ++i)
	{
		cout << "Marka: ";
		getline(cin, katalog[i].s_marka);
		cout << endl;
		
		cout << "Rok budowy: ";
		cin >> katalog[i].n_rok_budowy;
		cin.get();
		cout << endl;
	}
	for (int i=0; i < n_liczba; ++i)
	{
		cout << "Samochód #" << i << endl;
		cout << "Marka: " << katalog[i].s_marka << endl;
		cout << "Rok budowy: " << katalog[i].n_rok_budowy << endl;
	}
	
	cin.get();
	return 0;
}
