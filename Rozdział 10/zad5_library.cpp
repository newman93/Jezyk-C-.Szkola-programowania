#include <iostream>
#include <cstring>
#include "zad5_header.h"

Stack::Stack()
{
	top = 0;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
	
}

bool Stack::push(Customer & customer)
{
	if (top < MAX)
	{
		customers[top++] = customer;
		return true;
		pay_sum = pay_sum + customer.payment;
	}
	else
		return false;
}
		
bool Stack::pop(Customer & customer)
{
	if (top > 0)
	{
		customer = customers[--top];
		return true;
	}
	else
		return false;
}

void Stack::show()
{
	using std::cout;
	using std::endl;
	
	cout << "Pracownicy: " << endl;
	for(int i=0; i < top; ++i)
		cout << "Imię: " << customers[i].fullname << " Rachunek: " << customers[i].payment;
	cout << endl;
	cout << "Suma: " << pay_sum;
}


