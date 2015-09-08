#include "zad3_header.h"
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
	int n_total{0};
	int n_min{0};
	int n_max{0};
	int n_N;
	
	cout << "Podaj liczbe prób: ";
	cin >> n_N;
	cout << endl;
		
	cout << "Podaj dystans do przejścia: ";
	cin >> target;
	cout << endl;
	
	cout << "Podaj długość kroku: ";
	cin >> dstep;
	cout << endl;
	
	for (int i = 0; i < n_N; ++i)
	{		
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		
		if (i == 0)
			n_min = steps;
		else if (n_min > steps)
			n_min = steps;
			
		if (n_max < steps)
			n_max = steps;
			
	    n_total = n_total + steps;
	    result.reset(0.0, 0.0);
	    steps = 0; 	
		
	}
	
	cout << "Ilość prób: " << n_N << endl;
	cout << "Minimum: " << n_min << endl;
	cout << "Maximum: " << n_max << endl;
	cout << "Średnia: " << n_total/n_N << endl;
	
	cout << "Koniec!" << endl;
	cin.get();
		
	return 0;
}
