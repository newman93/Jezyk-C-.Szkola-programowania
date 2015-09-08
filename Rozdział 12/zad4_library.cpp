#include "zad4_header.h"
#include <iostream>

Stack::Stack(int n = MAX)
{
	pitems = new Item [n];
	size = 0;
	top = 0;
	wielkosc = n;
}

Stack::Stack(const Stack & st)
{
	
}

Stack::~Stack()
{
	delete [] pitems;
}

bool Stack::isempty() const
{
	bool b_flag = false;
	
	if (top == 0)
		b_flag = true;
		
	return b_flag;
} 

bool Stack::isfull() const
{
	bool b_flag = false;
	
	if (top == (size-1))
		b_flag = true;
	
	return b_flag;
}

bool Stack::push(const Item & item)
{
	bool b_flag = true;
	
	if (top == wielkosc)
	{
		b_flag = false;
	}
	else
	{
		pitems[top++] = item;
		++size;
	}
	return b_flag;
}

bool Stack::pop(Item & item)
{
	bool b_flag = false;
	
	if (top == 0)
	{
		b_flag = false;
	}
	else
	{
		item = pitems[--top];
		--size;
	}
	return b_flag;
}

Stack & Stack::operator=(const Stack & st)
{		
	if (this == &st)
		return *this;
	
	pitems = new Item [st.wielkosc];
	for (int i =0; i < st.size; ++i)
	{
		pitems[i] = st.pitems[i];
	}
	size = st.size;
	wielkosc = st.wielkosc;
	top = st.top;
	
	return  *this;
}

void Stack::show()
{
	using std::cout;
	using std::endl;
	
	cout << "Zawartosc stosu: " << endl;
	for (int i = 0; i < top; ++i)
		cout << "#" << i+1 << ": " << pitems[i] << endl; 
}
