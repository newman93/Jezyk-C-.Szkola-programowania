#include <string>

class Person
{
	private:
		static const int LIMIT = 256;
		std::string lname;		//nazwisko
		char fname[LIMIT];		//imię
	public:
		Person() { lname = ""; fname[0] = '\0'; }				//konstruktor domyślny
		Person(const std::string & ln, const char * fn = "HejTy");   //konstruktor
		~Person();		//destruktor
		void Show() const;			//nazwisko, imię
		void FormalShow() const;	//nazwisko, imię
};
