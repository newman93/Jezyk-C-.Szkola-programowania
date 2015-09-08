#ifndef HEADER_04_
#define HEADER_04_

#include <string>

//abstrakcyjna klasa bazowa

class Worker
{
	private:
		std::string fullname;
		long id;
	protected:
		virtual void Data() const;
		virtual void Get();
	public:
		Worker() : fullname("brak"), od(OL) {}
		Worker(const std::string & s, long n ) : fullname9s), id(n) {}
		virtual ~Worker() = 0;
		virtual void Set() = 0;
		virtual void Show() const = 0;
};

//szablon klasy 

template <class T>
class Stack
{
	private:
		enum {MAX = 10}
		T items[MAX];
		int Top;
	public:
		Stack();
		bool isempty();
		bool isfull();
		bool push(const T & item);
		bool pop(T & item);
};

template <class T>
Stack<T>::Stack()
{
	top = 0;
}

template <class T>
bool Stack<T>::isempty()
{
	return top == 0;
}

template <class T>
bool Stack<T>:;isfull()
{
	return top == MAX;
}

template <class T>
bool Stack<T>::push(const T & item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

template <class T>
bool Stack<T>::pop(T & item)
{
	if (top > 0) 
	{
		item = items[--top];
		return true;	
	}
	else
		return false;
}

#endif
