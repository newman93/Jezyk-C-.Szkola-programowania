#ifndef HEADER_BRASS_
#define HEADER_BRASS_

class Brass
{
	private:
		char * c_imie;
		char * c_nazwisko;
		long l_numer_rachunku;
		double d_saldo;
	public:
		Brass(const char * _i = "Brak", const char * _n = "Brak", long _r = -1, double _s = 0.0);
		virtual ~Brass();
		void Wplac(double _p) { d_saldo += _p; }
		void ZmienSaldo(double _p) { d_saldo = _p; } 
		double Saldo() { return d_saldo; }
		virtual void Wyplac(double _p);
		virtual void Show();
};

class BrassPlus : public Brass
{
	private:
		double d_limit_debetu;
		double d_stopa_oprocentowania;
		double d_zadluzenie;
	public:
		BrassPlus(const char * _i, const char * _n, long _r, double _s, double _l = 2000, double _o = 0.11125, double _z = 0.0) : Brass(_i,_n,_r,_s), d_limit_debetu(_l), d_stopa_oprocentowania(_o), d_zadluzenie(_z) {}
		BrassPlus(const Brass & b, double _l = 2000, double _o = 0.11125, double _z = 0.0) : Brass(b), d_limit_debetu(_l), d_stopa_oprocentowania(_o), d_zadluzenie(_z) {}
		virtual ~BrassPlus();
		void ZmienLimitDebetu(double _p) { d_limit_debetu = _p; }
		void ZmienOprocentowanie(double _p) { d_stopa_oprocentowania = _p; }
		void AnulujDlug() { d_zadluzenie = 0.0; }
		virtual void Wyplac(double _p); //moze powstac debet, na rachunku BrassPlus
		virtual void Show();
};

#endif
