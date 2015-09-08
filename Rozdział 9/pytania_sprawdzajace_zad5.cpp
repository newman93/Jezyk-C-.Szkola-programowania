#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
		double x;
		
		cout << "Podaj wartość: ";
		while (! (cin >> x))
		{
			cout << "Należy wprowadzić liczbę: ";
			cin.clear();
			while (cin.get() != '\n')
				continue;
		}
		cout << "Podano " << x << endl;
		
		return 0;
}
