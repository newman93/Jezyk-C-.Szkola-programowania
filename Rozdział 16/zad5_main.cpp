#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class U>
bool Compare(U _a, U _b);

template <class T>
int Reduce(T _ar[], int _n);

template <>
int Reduce (string _ar[], int _n);

int main()
{
	const int NUM = 15;
	long l_tab[NUM] = { 12, 18, 34, 25, 0, 12, 16, 98, 15, 25, 36, 2135646, 5486, 0, 5486 };
	
	cout << "Tablica przed sortowaniem:" << endl;
	for (int i = 0; i < NUM; ++i)
		cout << l_tab[i] << " ";
	cout << endl;
	
	cout << "Tablica po sortowaniu:" << endl;
	cout << "Liczba elementow: " << Reduce(l_tab, NUM) << endl; 
		
	return 0;
}

template <class U>
bool Compare(U _a, U _b)
{
	return (_a == _b);
}

template <class T>
int Reduce(T _ar[], int  _n)
{
	int n_liczba{0};
	vector<T> v_tab;
	
	for (int i = 0; i < _n; ++i)
		v_tab.push_back(_ar[i]);
	
	sort (v_tab.begin(), v_tab.end());
	
	vector<T>::iterator it;
	it = unique (v_tab.begin(), v_tab.end());  

	v_tab.resize(distance(v_tab.begin(),it) ); 

	unique (v_tab.begin(), v_tab.end(), Compare);   
	
   for (it = v_tab.begin(); it != v_tab.end(); ++it)
		cout << ' ' << *it;
	
	cout << endl;
	
	return n_liczba;
}

