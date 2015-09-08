#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void upper(string &);

int main(void)
{
	string s_slowo;
	cout << "Wprowadz slowo: ";
	cin >> s_slowo;
	cout << endl;
	while (s_slowo != "q")
	{
		upper(s_slowo);
		cout << s_slowo;
		cout << endl;
		cout << "Wprowadz slowo: ";
		cin >> s_slowo;
		cout << endl;
	}
	cout << "Do widzenia.";
		
	return 0;
}

void upper(string & a)
{
	for(int i=0; i < a.length();++i)
		a[i] = toupper(a[i]);
}
