#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string name;
	string dessert;
	
	cout << "Podaj swoje imie: ";
	getline(cin, name);
	cout << endl;
	
	cout << "Podaj swój ulubiony deser: ";
	cin >> dessert;
	cout << endl;
	
	cout << "Mam dla ciebie " << dessert << " , " << name << endl;
	
	cin.get();
	
	return 0;
}
