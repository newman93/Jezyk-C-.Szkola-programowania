#include <iostream>

using namespace std;

void show_menu();
bool answer(char);

int main(void)
{
	show_menu();
	char ch;
	cin >> ch;
	
	while (!answer(ch))
		cin >> ch;
	
	
	return 0;
}

void show_menu()
{
	cout << "Menu: \n r) roślinożerca     p) pianista \n d) drzewo           g) gra" << endl;
}

bool answer(char znak)
{
	bool an = true;
	switch (znak)
	{
		case 'r' : cout << "Żyrafa to roślinożerca." << endl;
				   break;
		case 'p' : cout << "Muzyk to pianista." << endl;
				   break;
		case 'd' : cout << "Drzewo to roslina." << endl;
				   break;
		case 'g' : cout << "Gra to zabawa." << endl;
				   break;
		default : {
						cout << "Proszę podać odpowiedniąliterę: ";
						an = false;
				  }
    }
    
    return an;
}
