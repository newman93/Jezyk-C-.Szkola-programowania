#include <iostream>

using namespace std;

class Port
{
	private:
		char * brand;
		char style[20];		//np. lekko brązowe, z najlepszego rocznika
		int bootles;
	public:
		Port(const char * br = "Brak", const char * st = "Brak", int b = 0);
		Port(const Port & p);		//konstruktor kopiujacy
		virtual ~Port() { delete [] brand; };
		Port & operator=(const Port & p);
		Port & operator+=(int b); 	//dodaje b do booteles
		Port & operator-=(int b);	//odejmuje bo do bootles, jesli operacja ta jest mozliwa
		virtual void show() const;
		//friend ostream & operator<<(ostream & os,const Port & p);
		//aktualizacja, metody dostepowe
		char * get_brand() const { return brand; } 
		char * get_style() const { return style; }
		int get_bootles() const { return bootles; } 
};

class VintagePort : public Port
{
	private:
		char * nickname;	//np. "Szlachetny", "Aksamitny"
		int year;			//rok winobran
	public:
		VintagePort();
		VintagePort(const char * br, int b, const char * nn, int y);
		VintagePort(const VintagePort & vp);
		~VintagePort() { delete [] nickname; }
		VintagePort & operator=(const VintagePort & vp);
		void show() const;
		//friend ostream & operator<<(ostream & os, const VintagePort & vp);
};

