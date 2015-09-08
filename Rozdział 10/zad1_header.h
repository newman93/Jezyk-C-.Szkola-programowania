#include <string>

class Rachunek{
	private:
			std::string imie;
			std::string numer;
			double saldo;
	public:
			Rachunek(const std::string & name, const std::string & number, double sal);
			~Rachunek();
			void show(void) const;
			void depozyt(double kwota);
			void pobranie(double kwota);
};

