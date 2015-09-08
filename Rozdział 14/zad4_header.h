#ifndef HEADER_04_
#define HEADER_04_

#include <string>

using std::string;

class Person
{
	private:
		string s_imie;
		string s_nazwisko;
	public:
		Person(const string & _i = "brak", const string & _n = "brak") : s_imie(_i), s_nazwisko(_n) {}
		virtual void Show();  //wyswietla imie i nazwisko
};

class Gunslinger : virtual public Person
{
	private:
		double d_czas;
		int n_nacisniecia;
	public:
		Gunslinger(const string & _i = "brak", const string & _n = "brak", double _c = 0.0, int _a = 0) : Person(_i,_n), d_czas(_c), n_nacisniecia(_a) {}
		double Draw() { return d_czas; }	//zwraca czas wyciagniecia rewolwera
		virtual void Show();	//wyswietla czas i nacisniecia
};
	
class PokerPlayer : virtual public Person
{
	private:
		int n_liczba; //losowa liczba numeru karty
	public:
		PokerPlayer(const string & _i = "brak", const string & _n = "brak",int _l = 0) : Person(_i, _n), n_liczba(_l) {}
		int Draw() { return n_liczba; }  //zwraca liczeb z przedzialu 1 - 52
		virtual void Show(); //zwraca karte
};

class BadDude : public Gunslinger, public PokerPlayer
{
	private:
	public:
	    BadDude(const string & _i = "brak", const string & _n = "brak", double _c = 0.0, int _a = 0, int _l = 0) : Person(_i, _n), Gunslinger(_i, _n,_c, _a), PokerPlayer(_i, _n, _l) {}
		double Gdraw() { return Gunslinger::Draw(); }
		int Cdraw() { return PokerPlayer::Draw(); }
		virtual void Show();
	
};


#endif
