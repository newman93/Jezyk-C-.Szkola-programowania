#include "zad2_header.h"

using namespace std;

int main(void)
{
	String s1(" i uczę się C++.");
	String s2 = "Podaj swoje imię: ";
	String s3;
	
	cout << s2;					//przeciazony operator <<
	cin >> s3;					//przeciazony operator <<
	s2 = "Mam na imię " + s3;   //przeciazony operator = i +
	cout << s2 << ".\n";
	s2 = s2 + s1;
	st2.stringup();				//zmiana liter ciagu na wielkie
	cout << "Ciąg\n" << s2 << "\zawiera" << s2.has('A') << " 'A'.\n";
	s1 = "czerwona";			//String(const char*) a potem String & operator==(const String &)
	String rgb[3] = { String(s1), String("zielona"), String("niebieska") };
	cout << "Podaj nazwę barwy podstawowej: ";
	String ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.stringlow();
		for (int i = 0; i < 3; i++)		//zmiana liter w ciągu na małe
		{
			if (ans == rgb[i])			//przeciazony operator ==
			{
				cout << "Prawidłowo!\n";
				success = true;
				break;
			}
			if (success)
				break;
			else
				cout << "Spróbuj ponownie!\n";
		}
		cout << "Żegnam\n";
		return 0;
	}
	return 0;
}
