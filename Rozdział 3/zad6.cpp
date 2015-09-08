#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	cout << "Ile przejechano kilometrów?" << endl;
	float f_km;
	cin >> f_km;
	
	cout << "Ile litrów benzyny zużyto?" << endl;
	float f_litry;
	cin >> f_litry;
	
	cout << "Ile litrów benzyny zostało w baku?" << endl;
	float f_rezerwa;
	cin >> f_rezerwa;
	
	cout << "Spalanie wynosi: " <<  f_litry/f_km  << " l/km." << endl;
	cout << "Przejedziesz jeszcze: " << f_rezerwa/(f_litry/f_km) << " km." << endl;
	cin.get();
	
	return 0;
}
