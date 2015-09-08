#include <iostream>

using namespace std;

//iterfejs
class Useless
{
	private:
		int n;	//liczba elementów
		char * pc;	//wskaźnik do danych
		static int ct;	//liczba obiektów
		void ShowObject() const;
	public:
		Useless();
		explicit Useless(int k);
		Useless(int k, char ch);
		Useless(const Useless & f);		//zwyczajny konstruktor kopiujący
		Useless(Useless && f);		//konstruktor przenoszący
		~Useless();
		Useless operator+(const Useless & f) const;
		//operator=() potrzebny w wersjach kopiującej i przenoszącej 
		void ShowData() const;
};

//implementacja
int Useless::ct = 0;

Useless::Useless()
{
	++ct;
	n = 0;
	pc = nullptr;
	cout << "konstruktor domyślny; liczba obiektów: " << ct << endl;
	ShowObject();
}

Useless::Useless(int k) :  n(k)
{
	++ct;
	cout << "konstruktor (int); liczba obiektów: " << ct << endl;
	pc = new char[n];
	ShowObject();
}

Useless::Useless(int k, char ch) : n(k) 
{
	++ct;
	cout << "konstruktor (int, char); liczba obiektów: " << ct << endl;
	pc = new char[n];
	for (int i = 0; i < n; i++)
		pc[i] = ch;
	ShowObject();
}

Useless::Useless(const Useless & f) : n(f.n)
{
	++ct;
	cout << "kontrusktor kopiujący; liczba obiektów: " << ct << endl;
	pc = new char[n];
	for (int i = 0; i < n; i++)
		pc[i] = f.pc[i];
	ShowObject();
}

Useless::Useless(Useless && f) : n(f.n)
{
	++ct;
	cout << "konstruktor przenoszący; liczba obiektów: " << ct << endl;
	pc = f.pc;		//przechwycenie adresu
	f.pc = nullptr;	//stary obiekt otrzymuje "nic" w zamian
	f.n = 0;
	ShowObject();
}

Useless::~Useless()
{
	cout << "destruktor; liczba obiektów: " << --ct << endl;
	cout << "usuwany obiekt:\n";
	ShowObject();
	delete [] pc;
}

Useless Useless::operator+(const Useless & f) const
{
	cout << "wjeście operator+()\n";
	Useless temp = Useless(n + f.n);
	for (int i = 0; i < n; i++)
		temp.pc[i] = pc[i];
	for (int i = n; i < temp.n; i++)
		temp.pc[i] = f.pc[i-n];
	cout << "obiekt tymczasowy:\n";
	cout << "wyjście z operator+()\n";
	
	return temp;
}

void Useless::ShowObject() const
{
	cout << "Liczba elementów: " << n;
	cout << ", adres danych: " << (void *) pc << endl;
}

void Useless::ShowData() const
{
	if (n == 0)
		cout << "(obiekt pusty)";
	else
		for (int i =0; i < n; i++)
			cout << pc[i];
	cout << endl;
}

//aplikacja
int main()
{
	{
		Useless one(10, 'x');
		Useless two = one;
		Useless three(20, '0');
		Useless four(one + three);
		cout << "obiekt 1.: ";
		one.ShowData();
		cout << "obiekt 2.: ";
		two.ShowData();
		cout << "obiekt 3.: ";
		three.ShowData();
		cout << "obiekt 4.: ";
		four.ShowData();
	}
}
	
