#include <iostream>
#include <cstring>

using namespace std;

template<typename T>
T maxn(T [],int);

template<typename T>
T *max(T [][50],int);

template <> char *max<char>(char str[][50], int);

int main(void)
{
	int n_tab[5] = { 1, 22, 64, 121, 16 };
	double d_tab[4] = { 0.24, 0.6, 0.16, 0.25 };
	char c_tab[4][50] = { "Adrian", "tuptup", "neander", "abcdefg" };

	cout << maxn(n_tab,5);
	cout << endl;
	cout << maxn(d_tab,4);
	cout << endl;
	cout << max(c_tab,4);
	cout << endl;
	 
	return 0;
}

template<typename T>
T maxn(T tablica[],int n_liczba)
{
	T max = tablica[0];
	for(int i = 0; i<n_liczba;++i)
		if (max < tablica[i])
			max = tablica[i];
			
	return max;
}	

template <> char *max<char>(char str[][50], int a)
{
	unsigned int n_dlugosc = strlen(str[0]);
	static char slowo[50];
	strcpy(slowo,str[0]);
	for(int i = 0; i < a; ++i)
		if (n_dlugosc < strlen(str[i]))
		{
			n_dlugosc = strlen(str[i]);
			strcpy(slowo, str[i]);
		}
	return slowo;
}

