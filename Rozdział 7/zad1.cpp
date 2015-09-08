#include <iostream>

using namespace std;

void srednia_harmoniczna(double,double);

int main(void)
{
	double d_liczba2{0};
	double d_liczba1{0};
	int inicjator{0};
	do
	{
		if (inicjator > 0)
			srednia_harmoniczna(d_liczba1,d_liczba2);
		cout << "Liczba 1: ";
		cin >> d_liczba1;
		cout << "Liczba 2: ";		
		cin >> d_liczba2;
		++inicjator;
	} while (d_liczba1 !=0 && d_liczba2 !=0);
	cout << "Koniec pracy programu!";
	
	return 0;
}

void srednia_harmoniczna(double l1, double l2)
{
	cout << "Srednia harmoniczna: " << (2.0*l1*l2)/(l1+l2) << endl;
}
