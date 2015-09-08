#include "zad_header.h"
#include <cstdlib>
#include <ctime>

int main(void)
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	
	cout << "Podaj dystans do przejścia (k, aby zakończyć): ";
	while (cin >> target)
	{
		cout << "Podaj długość kroku: ";
		if (!(cin >> dstep))
			break;
			
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		
		cout << "Po " << steps << " krokach delikwent osiągnął położenie: " << endl;
		cout << result << endl;
		result.polar_mode();
		cout << " czyli" << endl;
		cout << result << endl;
		cout << "Średnia długość kroku pozornego = " << result.magval()/steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Podaj dystans do przejścia (k, aby zakończyć): ";
	}
	cout << "Koniec!" << endl;
	
	cin.clear();
	while (cin.get() != '\n')
		continue;
		
		return 0;
}
