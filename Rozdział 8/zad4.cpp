#include <iostream>
#include <cstring>

//Nie wiem o co ma chodzić w tym programie

using namespace std;

struct stringy {
	char *str;
	int ct;
};

int main(void)
{
	stringy beany;
	char testing[] = "Rzeczywistość, to już nie to co kiedyś.";
	
	set(beany, testing);
	
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Gotowe!");
	
	return 0;
}
	
