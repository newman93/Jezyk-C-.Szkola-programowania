#include "zad1_header.h"
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <cstdlib>

int main(void)
{
	using namespace std;
	ofstream inFile;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	
	inFile.open("zad1.txt");
	if (!inFile.is_open())
	{
		cout << "Otawrcie pliku nie powiodło się" << endl;
		cout << "Program zostanie zakończony" << endl;
		exit(EXIT_FAILURE);
	}
	
	inFile << "Podaj dystans do przejścia (k, aby zakończyć): ";
	cout << "Podaj dystans do przejścia (k, aby zakończyć): ";
	while (cin >> target)
	{
		inFile << target;
		inFile << "Podaj długość kroku: ";
		cout << "Podaj długość kroku: ";
		if (!(cin >> dstep))
			break;
		else 
			inFile << dstep;
			
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			inFile << endl;
			inFile << steps << ": " << result << endl; 
			steps++;
		}
		
		inFile << "Po " << steps << " krokach delikwent osiągnął położenie: " << endl;
		inFile << result << endl;
		result.polar_mode();
		inFile << " czyli" << endl;
		inFile << result << endl;
		inFile << "Średnia długość kroku pozornego = " << result.magval()/steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		inFile << "Podaj dystans do przejścia (k, aby zakończyć): ";
		cout << "Podaj dystans do przejścia (k, aby zakończyć): ";
	}
	inFile << "Koniec!";
	cout << "Koniec!" << endl;
	
	cin.clear();
	while (cin.get() != '\n')
		continue;
		
		return 0;
}
