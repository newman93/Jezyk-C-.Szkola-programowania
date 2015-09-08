#include <iostream>
#include <iomanip>

int main()
{
	using namespace std;
	
	int n_wprowadz;
	
	cout << "Podaj wartosc: ";
	cin >> n_wprowadz;
	cout << endl;
	
	cout << setw(15) << "dziesiętnie" << setw(15) << "szesnastkowo" << setw(15) << "ósemkowo" << "\n";
	cout << showbase;	//lub cout.setf(ios::showbase)
	cout << setw(15) << n_wprowadz << hex << setw(15) << n_wprowadz << oct << setw(15) << n_wprowadz << "\n";
	 
	return 0;
}
