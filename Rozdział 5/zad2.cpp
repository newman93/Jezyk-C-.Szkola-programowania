#include <iostream>
#include <array>

using namespace std;

int main(void)
{
	array<long double,101> tablica;
	
	tablica[0]=tablica[1]=1;
	for (int i=2; i < 101; ++i)
		tablica[i] = i * tablica[i-1];
	
	cout << tablica[100] << endl;
	cin.get();
	
	return 0;
}
