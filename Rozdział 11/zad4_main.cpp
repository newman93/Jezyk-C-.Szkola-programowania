#include "zad4_header.h"

int main(void)
{
	using namespace std;
	
	Time aida(3, 50);
	Time tosca(2, 48);
	Time temp;
	
	cout << "Aida i Tosca" << endl;
	cout << aida << "; " << tosca << endl;
	temp = aida + tosca;
	cout << "Aida + Tosca: " << temp << endl;
	temp = 2 * aida;
	cout << "Aida * 2: " << temp << endl;
	temp = aida - tosca;
	cout << "Aida - Tosca: " << temp << endl;
	
	return 0;
}
