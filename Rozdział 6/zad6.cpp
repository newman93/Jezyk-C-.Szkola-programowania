#include <iostream>
#include <string>

using namespace std;

	struct trzdw{
		string imie;
		double kwota;
	};
	
void insert_value(int,trzdw *);
void famous_sponsors(int, trzdw *);
void other_sponsors(int, trzdw *);

int main(void)
{
	cout << "Podaj liczbe sponsorów: ";
	int n_ilosc;
	cin >> n_ilosc;
	cin.get();
	
	trzdw *sponsorzy = new trzdw [n_ilosc];
	insert_value(n_ilosc,&sponsorzy[0]);
	famous_sponsors(n_ilosc,&sponsorzy[0]);
	other_sponsors(n_ilosc,&sponsorzy[0]);
    
	return 0;
}

void insert_value(int ilosc,trzdw *sponsorzy)
{
	for ( int i=0; i < ilosc; ++i)
	{
		cout << "#" << i+1 << endl;
		cout << "Imie: ";
		getline(cin, sponsorzy[i].imie);
		cout << endl;
		cout << "Kwota: ";
		cin >> sponsorzy[i].kwota;
		cin.get();
		cout << endl;
    }
}

void famous_sponsors(int ilosc,trzdw *sponsorzy)
{
	cout << "Wspaniali Sponsorzy" << endl;
	for ( int i=0; i < ilosc; ++i)
		if (sponsorzy[i].kwota >= 10000)
			cout << sponsorzy[i].imie << endl;
}

void other_sponsors(int ilosc,trzdw *sponsorzy)
{
	cout << "Nasi Sponsorzy" << endl;
	for ( int i=0; i < ilosc; ++i)
		if (sponsorzy[i].kwota < 10000)
			cout << sponsorzy[i].imie << endl;
}
