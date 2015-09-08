#include "zad2_header.h"
#include <iostream>

using namespace std;

int main(void)
{
	String s1(" i ucze sie C++. ");
	String s2 = " Podaj swoje imie: ";
	String s3;
	
	cout << s2;					//przeciazony operator <<
	cin >> s3;					//przeciazony operator >>
	s2 = " Mam na imie " + s3;   //przeciazony operator = i +
	cout << s2 << ". \n";
	s2 = s2 + s1;
	s2.stringup();				//zmiana liter ciagu na wielkie
	cout << " Ciag \n" << s2 << " zawiera " << s2.has('A') << " 'A'. \n";
	s1 = "czerwona";			//String(const char*) a potem String & operator=(const String &)
	String rgb[3] = { String(s1), String("zielona"), String("niebieska") };
	cout << " Podaj nazwe barwy podstawowej: ";
	String ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.stringlow();
		for (int i = 0; i < 3; i++)		//zmiana liter w ciągu na małe
		{
			if (ans == rgb[i])			//przeciazony operator ==
			{
				cout << " Prawidlowo! \n";
				success = true;
				break;
			}
			if (success)
				break;
			else
				cout << " Sprobuj ponownie! \n";
		}
		cout << " Zegnam \n";
	
		return 0;
	}
	return 0;
}
