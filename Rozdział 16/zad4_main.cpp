#include <iostream>
#include <vector>
#include <algorithm>

bool Porownanie (int _i, int _j);
int Reduce(long _ar[], int _n);

int main()
{
	using std::cout;
	using std::endl;
	
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

bool Porownanie (int _i, int _j) 
{
  return (_i==_j);
}

int Reduce(long _ar[], int  _n)
{
	int n_liczba{0};
	
	std::vector<int> v_tablica(_n);
    std::vector<int>::iterator it;
    it=std::unique_copy (_ar,_ar +_n,v_tablica.begin());   
    std::sort (v_tablica.begin(),it);                  
    it=std::unique_copy (v_tablica.begin(), it, v_tablica.begin(), Porownanie);
    v_tablica.resize( std::distance(v_tablica.begin(),it) );    
/*	
	for (int i = 0; i < _n; ++i)
		v_tablica.push_back(_ar[i]);
	
	n_liczba = std::unique(v_tablica.begin(), v_tablica.end());
	v_tablica.resize( std::distance(v_tablica.begin(),n_liczba) );

	for (int i = 0; i < n_liczba; ++i)
		std::cout << v_tablica[i] << " ";
*/
	for (it=v_tablica.begin(); it!=v_tablica.end(); ++it)
	{	
		std::cout << ' ' << *it;
		++n_liczba;
	}
	std::cout << std::endl;
	
	return n_liczba;
}
