#include <iostream>
#include "zad5_header.h"

using namespace std;

int main()
{
	Employee em("Tadeusz", "Hubert", "Sprzedawca");
	cout << em << endl;
	em.ShowAll();
	
	Manager ma("Amforiusz", "Smoczewski", "Malarz", 5);
	cout << ma << endl;
	ma.ShowAll();
	
	Fink fi("Maurycy", "Olkuski", "HYdraulik", "Julian Bar");
	cout << fi << endl;
	fi.ShowAll();
	
	HighFink hf(ma, "Jan Kudlaty");
	hf.ShowAll();
	
	cout << "Wcisnij dowolny przycisk, aby przejsc do nastepnego etapu:\n";
	cin.get();
	
	HighFink hf2;
	hf2.SetAll();
	
	cout << "Uzywa wskaznika Abstr_emp *;\n";
	Abstr_emp * tri[4] = { &em, &fi, &hf, &hf2 };
	for (int i = 0; i < 4; i++)
		tri[i]->ShowAll();
		
	return 0;
}
