#include <iostream>
#include <cmath>
#include "wyjatek_header.h"

double Hmean(double _a, double _b);
double Gmean(double _a, double _b);

int main()
{
	using std::cout;
	using std::endl;
	using std::cin;
	
	double d_x, d_y, d_z;
	
	cout << "Podaj dwie liczby: ";
	while (cin >> d_x >> d_y)
	{
		try {	//poczatek bloku try
				d_z = Hmean(d_x, d_y);
				cout << "Srednia harmoniczna liczb " << d_x << " i " << d_y << " wynosi " << d_z << endl;
				cout << "Srednia geometryczna liczb " << d_x << " i " << d_y << " wynosi " << Gmean(d_x, d_y)  << endl;
				cout << "Podaj kolejna pare liczb <w, aby wyjsc>: ";
		} //koniec bloku try
		catch (Bad_hmean & _bg) //poczatke bloku catch
		{
			_bg.Mesg();
			cout << "Sprobuj ponownie. \n";
			continue;
		}
		catch (Bad_gmean & _hg)
		{
			cout << _hg.Mesg();
			cout << "Uzyte wartosci: " << _hg.d_v1 << ", " << _hg.d_v2 << endl;
			cout << "Niestety, to koniec zabawy.\n";
			break;
		} //koniec bloku catch
	}	
	cout << "Koniec\n";	
	
	return 0;
}

double Hmean(double _a, double _b)
{
	if (_a == -_b)
		throw Bad_hmean(_a, _b);
		
	return 2.0 * _a * _b / (_a + _b);
}

double Gmean(double _a, double _b)
{
	if (_a < 0 || _b < 0)
		throw Bad_gmean(_a, _b);
	return std::sqrt(_a * _b);
}
