#include <iostream>

using namespace std;

const int strsize = 50;
struct zpdw {
		char imie[strsize];
		char stanowisko[strsize];
		char pseudozpdw[strsize];
		int preferencje;
	};
	
void show_menu();
bool answer(char,zpdw*);

int main(void)
{
	zpdw czlonkowie[3] = {
							{"Adrian Kowalski", "programista", "adi", 2},
							{"Adam Nowak", "księgowy", "bodzio", 1},
							{"Tomasz Maj", "pisarz", "tomko", 3}
						};
	show_menu();
	char ch;
	cin >> ch;
	while (answer(ch,&czlonkowie[0]))
	{
		show_menu();
		cin.clear();
		cin >> ch;
	}
	
	return 0;
}

void show_menu()
{
	cout << " a. lista wg imion         b.lista wg stanowisk \n c. lista wg pseudonimów   d. lista wg preferencji \n q.koniec" << endl;
}

bool answer(char znak, zpdw *czlonkowie)
{
	bool an = true;
	
	switch (znak)
	{
		case 'a' : 	for (int i=0; i < 3; ++i)
						cout << czlonkowie[i].imie << endl;
						break;
		case 'b' : for (int i=0; i < 3; ++i)
						cout << czlonkowie[i].stanowisko << endl;
						break;
		case 'c' : for (int i=0; i < 3; ++i)
						cout << czlonkowie[i].pseudozpdw << endl;
						break;
		case 'd' : for (int i=0; i < 3; ++i)
						switch (czlonkowie[i].preferencje)
						{
							case 1 : cout << czlonkowie[i].imie << endl;
									 break;
							case 2 : cout << czlonkowie[i].stanowisko << endl;
									 break;
							case 3 : cout << czlonkowie[i].pseudozpdw << endl;
									 break;
						};
					break;
		case 'q' : an = false;
				   break;
	};
	return an;
}
