#include <iostream>
#include <cctype>

using namespace std;

int silnia(int);

int main(void)
{
	int n_liczba;
	cout << "Liczba: ";
	cin >> n_liczba;
	while (!(isalpha(n_liczba)))
	{
		cout << "Silnia: " << silnia(n_liczba) << endl;
		cout << "Liczba: ";
		cin >> n_liczba;
		cout << endl;
	}
	return 0;
}

int silnia(int liczba)
{
	if (liczba == 0 || liczba == 1)
		return 1;
	else
		return liczba*silnia(liczba-1);
}
