#include <iostream>

using namespace std;

int main(void)
{
	char ch;
	cout << "Wprowadz dane: " << endl;
	cin.get(ch);
	int spoglowski{0};
	int samogloski{0};
	
					     
	while ( ch != '.')
	{
		if (ch == ' ')
			cin.get(ch);
			if (ch == 'q' )
			{
				cin.get(ch);
					if (ch == ' ')
					{
						ch = '.';
						break;
					}
					else
						++spoglowski;
			};		
		if (isalpha(ch))
		switch (ch)
		{
			case 'b' : ++spoglowski;
					   break;
			case 'c' : ++spoglowski;
					   break;
			case 'd' : ++spoglowski;
					   break;
		    case 'f' : ++spoglowski;
					   break;
			case 'g' : ++spoglowski;
					   break;
		    case 'h' : ++spoglowski;
					   break;
			case 'k' : ++spoglowski;
					   break;
			case 'l' : ++spoglowski;
					   break;
			case 'm' : ++spoglowski;
					   break;
			case 'n' : ++spoglowski;
					   break;
			case 'p' : ++spoglowski;
					   break;
			case 'r' : ++spoglowski;
					   break;
			case 's' : ++spoglowski;
					   break;
		    case 't' : ++spoglowski;
					   break;
		    case 'q' : ++spoglowski;
					   break;
			case 'w' : ++spoglowski;
					   break;
			case 'z' : ++spoglowski;
					   break;
			case 'a' : ++samogloski;
					   break;
			case 'e' : ++samogloski;
					   break;
			case 'j' : ++samogloski;
					   break;
		    case 'o' : ++samogloski;
					   break;
		    case 'x' : ++samogloski;
					   break;
			case 'y' : ++samogloski;
					   break;
		}
		cin.get(ch);
	}
	
	cout << "Spółgłoski: " << spoglowski << endl;
	cout << "Samogłoski: " << samogloski << endl;
	return 0;
}
