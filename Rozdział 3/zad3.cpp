#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	const float minuta_na_sekunde = {60};
	const float stopien_na_minute = {60};
	
	cout << "Podaj dlugosc geograficzna: stopnie, minuty, sekundy" << endl;
	cout << "Stopnie: ";
	int n_stopnie;
	cin >> n_stopnie;
	cout << "Minuty: ";
	int n_minuty;
	cin >> n_minuty;
	cout << "Sekundy: ";
	int n_sekundy;
	cin >> n_sekundy;
	cout << endl;
	
	cout << n_stopnie << " stopnie " << n_minuty << " minuty " << n_sekundy << " sekundy = " <<  n_stopnie+(n_minuty/stopien_na_minute)+((n_sekundy/minuta_na_sekunde)/stopien_na_minute) << endl; 
	cin.get();

	return 0;
}
