#include <iostream>

using namespace std;

int fill_array(double *,int);
void show_array(double *,int);
void reverse_array(double *,int);

int main(void)
{
	int n_rozmiar{0};
	int n_wprowadzono{0};
	
	cout << "Podaj rozmiar tablicy: ";
	cin >> n_rozmiar;
	double *d_tablica = new double [n_rozmiar];
	 
	n_wprowadzono = fill_array(d_tablica,n_rozmiar);
	cout << "Wprowadzono: " << n_wprowadzono << endl;
	cout << "Tablica: " << endl;
	show_array(d_tablica,n_rozmiar);
	reverse_array(d_tablica,n_rozmiar);
	cout << endl;
	cout << "Odwrócona tablica: " << endl;
	show_array(d_tablica,n_rozmiar);
	
	return 0;
}

int fill_array(double d_tablica[],int n_rozmiar)
{
	int n_wprowadzone_dane{0};
    double d_bufor;
    
    for (int i=0; i < n_rozmiar;++i)
	{
		cout << "#" << i + 1 << ": ";
		if (cin >> d_bufor) 
		{
			d_tablica[i] = d_bufor;
			++ n_wprowadzone_dane;
			cout << endl; 
		}
		else
			break;
	}
	
	return n_wprowadzone_dane;
}

void show_array(double d_tablica[],int n_rozmiar)
{
	for (int i=0; i < n_rozmiar; ++i)
		cout << d_tablica[i] << " ";
}

void reverse_array(double d_tablica[],int n_rozmiar)
{
	double d_bufor{0};
	
	for(int i = 0; i < n_rozmiar/2; ++i) //ważny fragment n_rozmiar/2
	{
		d_bufor = d_tablica[i];
		d_tablica[i] = d_tablica[n_rozmiar-1-i];
		d_tablica[n_rozmiar-1-i] = d_bufor;
	}
}
