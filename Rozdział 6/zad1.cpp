#include <iostream>
#include <cctype>

using namespace std;

int main(void)
{
	char ch;
	
	cin.get(ch);
	while (ch != '@')
	{
		if (isdigit(ch))
			continue;
		else
		{
			if (islower(ch))
				ch = toupper(ch);
			else
				ch = tolower(ch);
			cout << ch;
			cin.get(ch);
		}
	}
	return 0;
}
