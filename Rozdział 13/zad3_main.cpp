#include <iostream>
#include "zad3_header.h"

const int SZT = 4;

int main(void)
{
	using namespace std;
	
	abstractDMA  *tab[SZT];
	
	tab[0] = new baseDMA("Pierwsza_Base", 10);
	tab[1] = new lacksDMA("Pierwsza_Lacks", 9, "zielony");
	tab[2] = new hasDMA("Pierwsza_Has", 8, "beznadziejny");
	tab[3] = tab[2];
	tab[0]->view();
	tab[1]->view();
	tab[2]->view();
	tab[3]->view();
	
	cin.get();
	 
	return 0;
}
