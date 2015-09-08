#include <iostream>
#include <string>
#include <cctype>
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
	string s_tmp1;
	string s_tmp2;
	s_tmp1 = _str;
	transform(s_tmp1.begin(), s_tmp1.end(), s_tmp1.begin(), ::tolower);
	for (int i = 0; i < s_tmp1.size(); ++i)
		if (isspace(s_tmp1[i]))
			s_tmp1.erase(i, 1);
	s_tmp2 = s_tmp1;
	reverse(s_tmp2.begin(), s_tmp2.end());
	if (s_tmp2 == s_tmp1 )
		b_flag = true;
	
	return b_flag;
}

