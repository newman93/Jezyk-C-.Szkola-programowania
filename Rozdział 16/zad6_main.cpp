#include <iostream>
#include <cstdlib>
#include <ctime>
#include <queue>
#include "zad6_header.h"

using namespace std;

const int MIN_PER_HR = 60; 

bool NewCustomer(double _x);

//chyba cos zle mi ti obsluguje
int main()
{
	srand(time(0));
	
	cout << "Studium przypadku: bankomat Banku Stu Kas\n";
	cout << "Podaj maksymalna dlugosc kolejki: ";
	int n_qs;
	cin >> n_qs;
	
	queue<Customer> line;
	
	cout << "Podaj symulowany czas (w godzinach): ";
	int n_hours;
	cin >> n_hours;
	
	long l_cyclelimit = MIN_PER_HR * n_hours;
	
	cout << "Podaj srednia ilosc klientow na godzine: ";
	double d_perhour;
	cin >> d_perhour;
	
	double d_min_per_cust;
	d_min_per_cust = MIN_PER_HR;
	
	Customer tmp;
	long l_turnways{0};
	long l_customers{0};
	long l_served{0};
	long l_sum_line{0};
	int n_wait_time{0};
	long l_line_wait{0};
		
	for (int n_cycle = 0; n_cycle < l_cyclelimit; n_cycle++)
	{
		if (NewCustomer(d_min_per_cust))
		{
			if (line.size() == n_qs)
				l_turnways++;
			else
			{
				l_customers++;
				tmp.set(n_cycle);
				line.push(tmp);
			}
		}
		if (n_wait_time <= 0 && !line.empty())
		{
			line.pop();
			n_wait_time = tmp.ptime();
			l_line_wait += n_cycle - tmp.when();
			l_served++;
		}
		if (n_wait_time > 0)
			n_wait_time--;
			l_sum_line += line.size();
	}
	
	if (l_customers > 0)
	{
		cout << " liczba klientow przyjetych: " << l_customers << endl;
		cout << "liczba klientow obsluzonych: " << l_served << endl;
		cout << "liczba klientow odeslanych: " << l_turnways << endl;
		cout << "srednia dlugosc kolejki: ";
		cout << (double) l_sum_line / l_cyclelimit << endl;
		cout << " sredni czas oczekiwania: " << (double) l_line_wait / l_served << " minuty\n";
	}
	else
		cout << "Brak klientow!\n";
		
		cout << "Gotowe!\n";
		
	return 0;
}

bool NewCustomer(double _x)
{
	return (rand() * _x / RAND_MAX < 1);
}
