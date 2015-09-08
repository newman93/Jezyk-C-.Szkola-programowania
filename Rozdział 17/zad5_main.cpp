#include <iostream>
#include <fstream>
#include <list>

int main()
{
	using namespace std;
	
	string s_wiersz;
	list<string> Bolek;
	list<string> Lolek;
	list<string> Bolilol;
	
	ifstream first("bolek.dat");
	ifstream second("lolek.dat");
	ofstream third("bolilol.dat");
	
	while (getline(first, s_wiersz))
	{
		Bolek.push_back(s_wiersz);
	}
	
	first.close();
	
	Bolek.sort();
	
	cout << "Bolek: " << endl;
	
	list<string>::iterator i;
     for(i = Bolek.begin(); i != Bolek.end(); i++)
     {
                         cout << *i << endl;
     }
     
     	
	while (getline(second, s_wiersz))
	{
		Lolek.push_back(s_wiersz);
	}
	
	Lolek.sort();
	second.close();
	
	cout << "Lolek: " << endl;
    for(i = Lolek.begin(); i != Lolek.end(); i++)
    {
                         cout << *i << endl;
    }
	
	for(i = Lolek.begin(); i != Lolek.end(); i++)
    {
                         Bolilol.push_back(*i); 
    }

	for(i = Bolek.begin(); i != Bolek.end(); i++)
    {
                         Bolilol.push_back(*i); 
    }
    
    Bolilol.sort();
    
    Bolilol.unique();

	cout << "Bolek i Lolek: " << endl;
	
	for(i = Bolilol.begin(); i != Bolilol.end(); i++)
    {
                         cout << *i << endl;
                         third << *i << endl; 
    }
	
	third.close();
	
	return 0;
}
