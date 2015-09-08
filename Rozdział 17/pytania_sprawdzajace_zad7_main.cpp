#include <iostream> 
#include <iomanip>

int main()
{
	using namespace std;
	
	char c_imie[20];
	double d_stawka;
	double d_godziny;
	
	cout << "Podaj swoje imię i nazwisko: ";
	cin.get(c_imie, 20).get();		//drugi get() dlatego, że w strumieniu zostanie znak '\n'
	cout << "Podaj swoją stawkę godzinową: ";
	cin >> d_stawka;
	cout << "Podaj liczbę przepracowanych godzin: ";
	cin >> d_godziny;
	
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::right, ios::adjustfield);
	cout << "Pierwszy format:" << endl;
	cout << setw(30) << c_imie << ":" << setprecision(2) << setw(9) << d_stawka << " zł :" << setprecision(1) << setw(5) << d_godziny << "\n";
	
	cout << "Drugi format: " << endl;
	cout.setf(ios::left, ios::adjustfield);
	cout << setw(30) << c_imie << ":" << setprecision(2) << setw(9) << d_stawka << " zł :" << setprecision(1) << setw(5) << d_godziny << "\n";
	
	return 0;
}
