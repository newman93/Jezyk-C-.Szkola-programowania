#include <iostream>
#include <cctype>
#include "zad5_header.h"

//Program koniecznie do poprawy!
//Nie wiem jak obsłużyć strukturę wewnątrz klasy


int main(void)
{
	using namespace std;
	Stack st;
	char ch;
	
	cout << "Naciśnij A, aby dodać klienta,\n U, aby usunuąć,\n S, aby pokazać zawartość bazy,\n K, aby zakończyć program" << endl;
	while (cin >> ch && toupper(ch) != 'K')
	{
		switch(ch)
		{
			case 'A':
			case 'a': 	cout << "Imię: ";
						cin >> st.custom.fullname;
						cout << endl;
						cout << "Rachunek: ";
						cin >> st.custom.payment;
						cout << endl;
						
						if(st.isfull())
							cout << "Stos pełny";
						else
							st.push(st.custom);
						break;
			case 'S':
			case 's':	if (st.isempty())
							cout << "Stos pusty";
						else
							st.show();
						break;
			case 'U':
			case 'u':	if (st.isempty())
							cout << "Stos pusty";
						else
						{
							st.pop(st.custom);
							cout << "Klient o imieniu: " << st.custom.fullname << " usunięty" <<endl;
						}
						break;
		}
		cout << "Naciśnij A, aby dodać klienta,\n U, aby usunuąć,\n S, aby pokazać zawartość bazy,\n K, aby zakończyć program" << endl;
	}
	cout << "Koniec pracy programu!";
	
	return 0;
}
