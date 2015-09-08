#include <iostream>
#include <string>
#include <memory>

class Report
{
	private:
		std::string str;
	public:
		Report(const std::string s) : str(s) { std::cout << "Obiekt utworzony!\n"; }
		~Report() { std::cout << "Obiekt usuniety!\n"; }
		void comment() const { std::cout << str << "\n"; }
};

int main()
{
	{
		std::auto_ptr<Report> ps(new Report("ze wskaznikiem auto_ptr"));
		ps->comment();	//-> sluzy do wywowalani metody obiektu przez wskaznik
	}
	{
		std::shared_ptr<Report> ps(new Report("ze wskaznikiem shared_ptr"));
		ps->comment();
	}
	{
		std::unique_ptr<Report> ps(new Report("ze wskaznikiem unique_ptr"));
		ps->comment();
	}
	return 0;
}
