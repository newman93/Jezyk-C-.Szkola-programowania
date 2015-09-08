#include <iostream>

using namespace std;

template<typename T>
T max5(T []);


int main(void)
{
	int n_tab1[5] = { 0, 8, 10, 0, 20 };
	double d_tab2[5] = { 0.0, 8.0, 10.0, 21.64, 0.12 };
	max5(n_tab1);
	max5(d_tab2);
	cin.get();
	
	return 0;
}

template<typename T>
T max5(T tablica[])
{
	T tmp = tablica[0];
	for (int i=0;i<5;++i)
		if(tmp < tablica[i])
			tmp = tablica[i];
	cout << "Max: " << tmp << endl;
	return tmp;
}
