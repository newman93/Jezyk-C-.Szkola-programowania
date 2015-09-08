#include <iostream>

using namespace std;

int main(void)
{
	cout << "Liczba pierwsza: ";
	int n_pierwsza;
	cin >> n_pierwsza;
	cout << endl;
	
	cout << "Liczba druga: ";
	int n_druga;
	cin >> n_druga;
	cout << endl;
	
	int n_suma{0};
	for(int i=n_pierwsza; i <= n_druga; ++i)
		n_suma = n_suma + i;
		
	cout << n_suma << endl;
	
	cin.get();
	
	return 0;
}
