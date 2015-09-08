#include <iostream>
#include <valarray>
#include <cstdlib>

const int SIZE = 12;
typedef std::valarray<int> vint; 	//upraszcza deklaracje
void Show(const vint & v, int cols);

int main()
{
	using std::slice; //z plikua <valarray>
	using std::cout;
	
	vint valint(SIZE);	//mozna wyobrazic sobie jako 4 rzedy po 3 elementy
	
	int i;
	for (i=0; i < SIZE; ++i)
		valint[i] = std::rand() % 10;
	cout << "Oryginalna tablica:\n";
	Show(valint, 3);	//wyswietla w 3 kolumnach
	vint vcol(valint[slice(1,4,3)]);	//wyciaga druga kolumne
	Show(vcol, 1);	//wyswietla w 1 kolumnie
	vint vrow(valint[slice(3,3,1)]);	//wyciaga drugi wiersz
	cout << "Drugi wiersz:\n";
	Show(vrow, 3);
	valint[slice(2,4,3)] = 10;	//przypisuje 10 do elementow drugiej kolumny
	cout << "Przypisuje 10 do ostatniej kolumny:\n";
	Show(valint, 3); 
	cout << "Przypisuje do pierwszej kolumny sume dwoch kolejnych:\n";
	//+ nie jest zdefiniowane dla wycinkow, potrzebna konwersja na valarray<int>
	valint[slice(0,4,3)] = vint(valint[slice(1,4,3)]) + vint(valint[slice(2,4,3)]);
	Show(valint, 3);
	
	return 0;
}

void Show(const vint & v, int cols)
{
	using std::cout;
	using std::endl;
	
	int lim = v.size();
	for (int i = 0; i < lim; ++i)
	{
		cout.width(3);
		cout << v[i];
		if (i % cols == cols - 1)
			cout << endl;
		else
			cout << " ";
	}
	if (lim % cols != 0)
		cout << endl;
}
