#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string slowo;
	cout << "Slowo: ";
	getline (cin, slowo);
	while ( slowo != "gotowe") 
	{
		cout << "Slowo: ";
		getline (cin, slowo);
	}
	
	return 0;
}
