#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

const int LIM = 1000000;	// 10000000 przy wiekszym wejsciu brakuje pamieci

void Sort_List(list<int> & _l);
void Sort_Vector(vector<int> & _v);
void Copy_List(list<int> & _l, vector<int> & _v);
void Copy_List_To_Vector(list<int> & _l, vector<int> & _v);

int main()
{
	srand (time(NULL));
	
	vector<int> vi0(LIM);
	
	for (int i = 0; i < LIM; ++i)
		vi0[i] = rand();

	vector<int> vi(LIM);
	list<int> li(LIM);
	
	 int i = 0;
	 for (i = 0; i < LIM; ++i)
		vi.push_back(vi0[i]);

	 Copy_List(li, vi0);
	
	 cout << "Lista: " << endl;
	 Sort_List(li);
	 
	 cout << "Wektor: " << endl;
	 Sort_Vector(vi);
	
	 Copy_List(li, vi0);
	 
	 cout << "Test: " << endl;
	 
	 Copy_List_To_Vector(li, vi);
	 
	return 0;
}

void Sort_List(list<int> & _l)
{
	clock_t cl_start = clock();
	_l.sort();
	clock_t cl_end = clock();
	
	cout << "Czas sortowania: " <<  (double) (cl_end - cl_start) / CLOCKS_PER_SEC << endl;
}

void Sort_Vector(vector<int> & _v)
{
	clock_t cl_start = clock();
	
	sort(_v.begin(), _v.end());
	
	clock_t cl_end = clock();
	
	cout << "Czas sortowania: " <<  (double) (cl_end - cl_start) / CLOCKS_PER_SEC << endl;
}

void Copy_List(list<int> & _l, vector<int> & _v)
{
	int i{0};
	for(vector<int>::iterator it = _v.begin(); it != _v.end(); ++it, ++i) 
	 {
		_l.push_front(_v[i]);
	 }
}

void Copy_List_To_Vector(list<int> & _l, vector<int> & _v)
{
	int i{0};
	
	clock_t cl_start = clock();
    
    _v.insert(_v.begin(), _l.begin(), _l.end());
    sort(_v.begin(), _v.end());
    _l.clear();
    for(vector<int>::iterator it = _v.begin(); it != _v.end(); ++it, ++i) 
	 {
		_l.push_front(_v[i]);
	 }
    
    clock_t cl_end = clock();
    
	cout << "Czas kopiowania listy do wektora, sortowania i ponownego kopiowanie do listy: " <<  (double) (cl_end - cl_start) / CLOCKS_PER_SEC << endl;
	
}
