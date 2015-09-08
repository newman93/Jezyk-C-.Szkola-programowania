#include <iostream>

using namespace std;

long double probability(unsigned numbers, unsigned picks, unsigned powerball);

int main(void)
{
	double total,choices,powerball;
	cout << "Podaj największą liczbę, jaką można wybrać,\n"
			"liczbę skreśleń,\n"
			"oraz zakres powerball`a,\n";
			
	while ((cin >> total >> choices >> powerball) && choices <= total)
	{
		cout << "Szansa wygranej to jeden do ";
		cout << probability(total, choices, powerball);
		cout << ".\n";
		cout << "Następne dwie liczby (q, aby zakończyć): ";
	}
	cout << "do widzenia\n";
	
	return 0;
}

long double probability(unsigned numbers, unsigned picks,unsigned powerball)
{
	long double result = 1.0;
	long double n;
	unsigned p;
	
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	
	//dodanie prawdopodobieństwa powerball`a	
	result = (result + 1/powerball);
		
	return result;
}
