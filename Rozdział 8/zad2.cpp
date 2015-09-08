#include <iostream>
#include <cstring>

using namespace std;

struct Batonik{
	char c_marka[50];
	double d_waga;
	int n_kalorie;
} baton;

void fill_it(Batonik &,char *str = "Millennium Munch", double a = 2.85, int b = 350);
void show_it(const Batonik &);

int main(void)
{
	fill_it(baton);
	show_it(baton);
	fill_it(baton, "Mars", 3.25, 240);
	show_it(baton);
	cin.get();
	
	return 0;
}

void fill_it(Batonik & baton,char *str, double a, int b)
{
	strcpy(baton.c_marka,str);
	baton.d_waga = a;
	baton.n_kalorie = b;
}

void show_it(const Batonik & baton)
{
	cout << "Marka: " << baton.c_marka << endl;
	cout << "Waga: " << baton.d_waga << endl;
	cout << "Kalorie: " << baton.n_kalorie << endl;
}
	
