#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
bool Palindrom(string & _str);

int main()
{
	string s_slowo;
	cout << "Wprowadz ciag znakow: ";
	getline(cin, s_slowo);
	cout << endl;
	if (Palindrom(s_slowo))
		cout << "Brawo! Jest to palindrom!" << endl;
	else
		cout << "Niestety, to nie jest palindrom :(" << endl;
	
	return 0;
}

bool Palindrom(string & _str)
{
	bool b_flag = false;
	string s_tmp;
	s_tmp = _str;
	reverse(s_tmp.begin(), s_tmp.end());
	if (_str == s_tmp )
		b_flag = true;
	
	return b_flag;
}
