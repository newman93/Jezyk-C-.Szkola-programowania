#include <iostream>

using namespace std;

int main(void)
{
	cout << "Wprowadź miesięczną liczbe sprzedaży: " << endl;
	char *miesiace[12] = { "styczen", "luty", "marzec", "kwiecien", "maj", "czerwiec", "lipiec", "sierpien", "wrzesien", "pazdziernik", "listopad", "grudzien" };
	int sprzedaz[12] = {};
	
	for (int i=0; i<12; ++i)
	{
		cout << miesiace[i] << ": ";
		cin >> sprzedaz[i];
	}
	
	int n_suma{0};
	for (int i=0; i<12; ++i)
		n_suma = n_suma + sprzedaz[i];
		
	cout << "Roczna sprzedaz: " << n_suma << endl;
	cin.get();
	
	
	return 0;
}
