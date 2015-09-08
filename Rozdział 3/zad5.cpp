#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	cout << "Liczba mieszkancow Polski: ";
	long long ll_polska;
	cin >> ll_polska;
	cout << endl;
	
	cout << "Liczba miszkancow swiata: ";
	long long ll_swiat;
	cin >> ll_swiat;
	cout << endl;
	
	cout << "Polpulacja Polski stanowi " << ll_polska/ll_swiat << ',' << ll_polska%ll_swiat << "% ludnosci swiata" << endl;
	cin.get();
	
	return 0;
}
