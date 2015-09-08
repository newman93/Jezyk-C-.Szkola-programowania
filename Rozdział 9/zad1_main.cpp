#include <iostream>
#include "zad1_header.h"

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	golf bluza[4];
	cout << "Automatyczne z nazwa: " << endl;
	setgolf(bluza[0], "Adrian Kowalski",0);
	showgolf(bluza[0]);
	cout << "Automatyczne bez nazwy: " << endl;
	setgolf(bluza[1],"",1);
	showgolf(bluza[1]);
	cout << "Wpisywane recznie z nazwa: " << endl;
	setgolf(bluza[2]);
	showgolf(bluza[2]);
	cout << "Wpisywanie recznie bez nazwy: " << endl;
	setgolf(bluza[3]);
	showgolf(bluza[3]);
	cout << "Zmiana handicapa dla pierwszej opcji: " << endl;
	handicap(bluza[0],1);
	showgolf(bluza[0]);
	
	return 0;
}


