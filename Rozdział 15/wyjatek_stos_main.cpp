#include <iostream>
#include <cmath> 
#include <string>
#include "wyjatek_stos_header.h"

class Demo
{
	private:
		std::string s_word;
	public:
		Demo (const char * _str)
		{
			s_word = _str;
			std::cout << "Obiekt demo " << s_word << " utworzony\n";
		}
		~Demo()
		{
			std::cout << "Obiekt demo " << s_word << "usuniety\n";
		}
		void Show() const
		{
			std::cout << "Obiekt demo " << s_word << " zyje\n";
		}
};

//prototypy funkcji 
double Hmean(double _a, double _b);
double Gmean(double _a, double _b);
double Means(double _a, double _b);

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	
	double d_x, d_y, d_z;
	{
		Demo d1("z bloku zagniezdzonego w funkcji main()");
		cout << "Podaj dwie liczby: ";
		while (cin >> d_x >> d_y)
		{
			try {	//poczatek bloku  try
				d_z = Means(d_x, d_y);
				cout << "Srednia srednich liczb " << d_x << " i " << d_y << " wynosi " << d_z << endl;
				cout << "Podaj kolejna pare liczb: ";
			}	//koniec bloku try
			catch (Bad_hmean & _bg)	//poczatek bloku catch
			{
				_bg.Mesg();
				cout << "Sprobuj ponownie.\n";
				continue;
			}
			catch (Bad_gmean & _hg)
			{
				cout << _hg.Mesg();
				cout << "Uzyte wartosci: " << _hg.d_v1 << ", " << _hg.d_v2 << endl;
				cout << "Niestety, to koniec zabawy.\n";
				break;
			}	//koniec bloku catch
		}
		d1.Show();
	}
	
	cout << "Koniec\n";
	cin.get();
	cin.get();
	
	return 0;
}

double Hmean(double _a, double _b)
{
	if (_a == -_b)
			throw Bad_hmean(_a, _b);
	
	return 2.0 * _a * _b / (_a + _b);
}

double Gmean(double _a, double  _b)
{
	if (_a < 0 || _b < 0)
			throw Bad_gmean(_a, _b);
	
	return std::sqrt(_a * _b);
}

double Means(double _a, double _b)
{
	double d_am, d_hm, d_gm;
	
	Demo d2("z funkcji Menas()");
	d_am = (_a + _b) / 2.0;	//srednia arytmetyczna
	try {
		d_hm = Hmean(_a, _b);
		d_gm = Gmean(_a, _b);
	}
	catch (Bad_hmean & _bg)	//poczatek bloku catch
	{
		_bg.Mesg();
		std::cout << "Przechwycony Means()\n";
		throw; //ponownie sglasza wyjatek
	}
	d2.Show();
	
	return (d_am + d_hm + d_gm) / 3.0;
}
	
	
