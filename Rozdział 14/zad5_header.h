#ifndef HEADER_05_
#define HEADER_05_

#include <iostream>
#include <string>

using std::string;
using std::ostream;

class Abstr_emp
{
	private:
		string s_fname;		//imie
		string s_lname;		//nazwisko
		string s_job;		//zawod
	public:
		Abstr_emp();
		Abstr_emp(const string & _fn, const string & _ln, const string & _j) : s_fname(_fn), s_lname(_ln), s_job(_j) {}
		virtual void ShowAll() const;	//opisuje i wyswietla dane
		virtual void SetAll();	//prosi uzytkownika o podanie wartosci
		friend ostream & operator<<(ostream & _os, const Abstr_emp & _e);	//wyswietla tylko imie i nazwisko
		virtual ~Abstr_emp() = 0;	//wirtualana klasa bazowa
};

class Employee : public Abstr_emp
{
	public:
		Employee() : Abstr_emp("brak", "brak", "brak") {}
		Employee(const string & _fn, const string & _ln, const string & _j) : Abstr_emp(_fn, _ln, _j) {}
		virtual void ShowAll() const { Abstr_emp::ShowAll(); }
		virtual void SetAll() { Abstr_emp::SetAll(); }
};

class Manager : virtual public Abstr_emp
{
	private:
		int n_inchargeof;	//liczba obiektow Abstr_emp, ktorymi zarzadza
	protected:
		int InChargeOf() const { return n_inchargeof; }		//wyjscie
		int & InChargeOf() { return n_inchargeof; }		//wejscie
	public:
		Manager() : Abstr_emp("brak", "brak", "brak"), n_inchargeof(0) {}
		Manager(const string & _fn, const string & _ln, const string & _j, int _ico = 0) : Abstr_emp(_fn, _ln, _j), n_inchargeof(_ico) {}
		Manager(const Abstr_emp & _e, int _ico) : Abstr_emp(_e), n_inchargeof(_ico) {}
		Manager(const Manager & _m) : Abstr_emp(_m), n_inchargeof(_m.n_inchargeof) {} 
		virtual void ShowAll() const;
		virtual void SetAll();
};

class Fink : virtual public Abstr_emp
{
	private:
		string s_reportsto;		//do kogo Fink (donosiciel) przesyla raport
	protected:
		const string ReportsTo() const { return s_reportsto; }
		string & ReportsTo() { return s_reportsto; }
	public:
		Fink();
		Fink(const string & _fn, const string & _ln, const string & _j, const string & _rpo) : Abstr_emp(_fn, _ln, _j), s_reportsto(_rpo) {}
		Fink(const Abstr_emp & _e, const string & _rpo) : Abstr_emp(_e), s_reportsto(_rpo) {}
		Fink(const Fink & _f) : Abstr_emp(_f), s_reportsto(_f.s_reportsto) {}
		virtual void ShowAll() const;
		virtual void SetAll();
};

class HighFink : public Manager, public Fink	//glowny donosiciel
{
	public:
		HighFink();
		HighFink(const string & _fn, const string & _ln, const string & _j, const string & _rpo, int _ico) : Abstr_emp(_fn, _ln, _j), Manager(_fn, _ln, _j, _ico), Fink(_fn, _ln, _j, _rpo) {}
		HighFink(const Abstr_emp & _e, const string & _rpo, int _ico) : Abstr_emp(_e), Manager(_e, _ico), Fink(_e, _rpo) {}
		HighFink(const Fink & _f, int _ico) : Abstr_emp(_f), Fink(_f), Manager(_f, _ico) {} 		//moze nie dzialac poprawnie
		HighFink(const Manager & _m, const string & _rpo) : Abstr_emp(_m), Manager(_m), Fink(_m, _rpo) {} //moze nie dzialc porpawnie
		HighFink(const HighFink & _h) : Abstr_emp(_h), Manager(_h), Fink(_h) {} 
		virtual void ShowAll() const;
		virtual void SetAll();
};

#endif
