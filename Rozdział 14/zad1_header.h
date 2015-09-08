#ifndef HEADER_01_
#define HEADER_01_

#include <iostream>
#include <string>
#include <valarray>

template <class T1, class T2>
class Pair
{
	private:
		T1 a;
		T2 b;
	public:
		T1 & first();
		T2 & second();
		T1 first() const { return a; }
		T2 second() const { return b; }
		Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) {} 
		Pair() {}
};

template<class T1, class T2>
T1 & Pair<T1, T2>::first()
{
	return a;
}

template<class T1, class T2>
T2 & Pair<T1, T2>::second()
{
	return b;
}


typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine
{
	private:
		std::string name;
		PairArray data;
		int year;
	public:
		Wine();								                             	//konstruktor domyslny
		Wine(const char * l, int y, const int yr[], const int bot[]);		//l name, y lata, yr[] rocznik,bot[] bootles 
		Wine(const char * l, int y); 										//l name, y lata, tworzy tablice obiektow o dlugosci y
		~Wine();
		void GetBottles();
		std::string & label() { return name; } 
		int sum() { return (data.second()).sum(); }
		void show(); 
};

#endif 
