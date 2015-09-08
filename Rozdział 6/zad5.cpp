#include <iostream>

using namespace std;

int main(void)
{
	cout << "Wprowadz zarobki: ";
	double d_zarobki;
	cin >> d_zarobki;
	
	if (d_zarobki < 0) //Dowiedzieć się jak sprawdza się czy wprowadzoną wartością jest double
		cout << "Błędne dane. Praca programu zostanie przerwana." << endl;
	else
		if (d_zarobki <= 5000) 
			cout << "Podatek 0zł" << endl;
		else
		if ( 5000 < d_zarobki && d_zarobki <= 15000)
			cout << "Podatek " << (d_zarobki - 5000) * 0.1 << "zl" << endl;
		else
		if ( 15000 < d_zarobki && d_zarobki <= 35000)
			cout << "Podatek " << (d_zarobki-15000) * 0.15 + 10000 * 0.1 << "zl" << endl;
		else
			cout << "Podatek " << 20000 * 0.15 + 10000 * 0.1 + (d_zarobki-35000) * 0.2 << "zl" << endl;
			
	return 0;
}
