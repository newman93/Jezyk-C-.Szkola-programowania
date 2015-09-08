#include <iostream>
#include <cctype>

//W programie jest blad, ktorego nie widze

using namespace std;

void insert_data(int *,int);
int srednia(int*,int);
void show_data(int*,int,int);

int main(void)
{
	
	int n_srednia{0};
	int wyniki[10];
	int n_licznik{0};
	insert_data(wyniki,n_licznik);
	n_srednia = srednia(wyniki,n_licznik);
	show_data(wyniki,n_licznik,n_srednia);
	return 0;
}

void insert_data(int wyniki[],int n_licznik)
{
	int n_pauza{0};
	cout << "Wprowadz wyniki. Aby zakonczyc wprowadzanie danych wpisz znak." << endl;
	while (n_licznik < 10 && n_pauza == 0)
	{
		cout << "#" << n_licznik + 1 << " ";
		cin >> wyniki[n_licznik];
		if (isalpha(wyniki[n_licznik]))
			n_pauza = 1;
		else
			++n_licznik;
	}
}

void show_data(int wyniki[],int n_licznik,int srednia)
{
	cout << "Wyniki: " << endl;
	for (int i=0; i < n_licznik; ++i)
		cout << "#" << i << " " << wyniki[i] << " ";
	cout << "Srednia: " << srednia;
}

int srednia(int wyniki[],int n_licznik)
{
	int sred{0};
	for (int i = 0;i<n_licznik;++i)
		sred = sred + wyniki[i];
	sred = sred/n_licznik;
	
	return sred;
}
