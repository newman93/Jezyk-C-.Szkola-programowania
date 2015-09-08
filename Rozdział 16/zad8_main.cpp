#include <iostream>
#include <list>

using namespace std;

void Add(list<string> & _v1);
void Merge(list<string> & _v1, list<string> & _v2, list<string> & _v3);
void Show(list<string> & _v3);

int main()
{
	int n_wybor;
	list<string> Bolek;
	list<string> Lolek;
	list<string> Dodatkowa;
	
	cout << "Siema Bolek!" << endl;
	cout << "Dodaj osoby do listy, ładnie proszę :)" << endl;
	Add(Bolek);
	cout << endl;
	
	cout << "Twoi znajomi Bolek!" << endl;
	Show(Bolek);
	
	cout << "Siema Lolek!" << endl;
	cout << "Proszę o to samo :)" << endl;
	Add(Lolek);
	cout << endl;
	
	cout << "Twoi znajomi Bolek!" << endl;
	Show(Lolek);
	
	cout << "Scalam listy..." << endl;
	Merge(Bolek, Lolek, Dodatkowa);
	cout << endl;
	
	cout << "Wspolni znajomi" << endl;
	Show(Dodatkowa);
	
	return 0;
}

void Add(list<string> & _v1)
{
	string s_wybor;
	string s_imie;
	
	cout << "Dodac osobe? <t/n>" << endl;
	getline(cin, s_wybor);
	cout << "Imie: ";
	getline(cin, s_imie);
	
	while (s_imie != "n")
	{
		_v1.push_front(s_imie);
		cout << "Imie: ";
		getline(cin, s_imie);
	}
	
	_v1.sort();
}
void Merge(list<string> & _v1, list<string> & _v2, list<string> & _v3)
{
	list<string>::iterator it;
	_v3.insert (_v3.begin(),_v1.begin(),_v1.end());
	_v3.insert (_v3.end(),_v2.begin(),_v2.end());
	
	_v3.sort();
	_v3.unique();
}

void Show(list<string> & _v3)
{
	 list<string>::iterator i;
     for(i = _v3.begin(); i != _v3.end(); i++)
		cout << *i << endl;
}
