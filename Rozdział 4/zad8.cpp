#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	struct Analiza {
		string firma;
		float srednica;
		float waga;
	};
	
	Analiza *pizza = new Analiza;
		
	cout << "Srednica: ";
	cin >> pizza->srednica;
	cin.get();
	cout << endl;
	
	cout << "Firma: ";
	getline(cin, pizza->firma);
	cout << endl;

	cout << "Waga: ";
	cin >> pizza->waga;
	cout << endl;
	
	cout << pizza->firma << " , " << pizza->srednica << " , " << pizza->waga << endl;
	cin.get();
	
	return 0;
}
