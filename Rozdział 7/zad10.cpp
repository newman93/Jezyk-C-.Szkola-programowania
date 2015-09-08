#include <iostream>

using namespace std;

double calculate(double,double,double (*wsk)(double,double));
double add(double,double);
double multiply(double,double);

int main(void)
{
	cout << "Dodawania: " << calculate(10.5,10.5,add) << endl;
	cout << "Mnożenie: " << calculate(10.5,10.5,multiply) << endl;
	cin.get();
	return 0;
}

double add(double x,double y)
{
	return x+y;
}

double multiply(double x,double y)
{
	return x*y;
}

double calculate(double x,double y, double (*wsk)(double x,double y))
{
	return (*wsk)(x,y);
}
