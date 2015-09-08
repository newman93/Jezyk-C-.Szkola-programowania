#include <iostream>
#include <cstring>
#include <cstdlib>
#include "zad3_header.h"

Stock::Stock()
{
	company = "bez_nazwy";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}
		
Stock::Stock(const std::string & co, long n = 0, double pr = 0.0)
{
	company = co;
	
	if (n < 0)
	{
		std::cout << "Liczba udzialow nie moze byc ujemna; " << "ustalam liczbe udzialow w " << company << " na 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}
		
Stock::~Stock()
{
}
		
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Liczba nabywanych udzialow nie moze byc ujemna. " << "Transakcja przerwana. \n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	using std::cout;
	
	if (num > 0)
	{
		cout << "Liczba sprzedawanych udzialow nie moze byc ujemna. " << "Transakcja przerwana. \n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}
	
void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

//do usuniecia	
/*		
void Stock::show() const
{
	using std::cout;
	//using std::ios_base;
	
	//ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	//std::streamsize prec = cout.precision(3);
	cout << "Spolka: " << company << " Liczba udzialow: " << shares << '\n' << " Cena udzialu: " << share_val << " zl" << '\n';
	//cout.precision(2)
	cout << " Laczna wartosc udzialow: " << total_val << " zl" << '\n';
	//cout.setf(orig, ios_base::floatfield);
	//cout.precision(prec);
}
*/

const Stock & Stock::topval(const Stock & s) const
{
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}

//aktualizacja wyswietlanie
std::ostream & operator<<(std::ostream & os, const Stock & s)
{
	os << "Company: " << s.company << " Shares: " << s.shares << " Share val: " << s.share_val << std::endl;
	
	return os;
}

//aktualizacja kolejka
Queue::Queue(int qs) : qsize(qs)
{
	front = rear = NULL;
	items = 0;
}

Queue::~Queue()
{
	Node * temp;
	while (front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

bool Queue::isempty() const
{
	return items == 0;
}

bool Queue::isfull() const
{
	return items == qsize;
}

int Queue::queuecout() const
{
	return items;
}

bool Queue::enqueue(const Item & item)
{
	if (isfull())
		return false;
	Node * add = new Node;
	add->item = item;
	add->next = NULL;
	items++;
	if (front == NULL)
		front = add;
	else
		rear->next = add;
	rear = add;
	return true;
}

bool Queue::dequeue(Item & item)
{
	if (front == NULL)
		return false;
	item = front->item;
	items--;
	Node * temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
		rear = NULL;
	return true;
}



