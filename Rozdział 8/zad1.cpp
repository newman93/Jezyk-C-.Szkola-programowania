#include <iostream>

using namespace std;

void durna_funkcja(const char *,int n = 0);

int main(void)
{
	durna_funkcja("Wywołanie bez parametru");
	durna_funkcja("Wywołanie z parametrem o wartości 3",3);
	cin.get();
	
	return 0;
}

void durna_funkcja(const char *str,int n)
{
	if (n == 0)
		cout << str << endl;
	else
	for(int i=0; i < n;++i)
		cout << str << endl;
}
