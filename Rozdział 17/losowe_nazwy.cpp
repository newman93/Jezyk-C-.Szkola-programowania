#include <cstdio>
#include <iostream>

int main()
{
	using namespace std;
	
	cout << "Ten system może wygenerować maksymalnie " << TMP_MAX << " nazw tymczasowych składająych się z maksymalnie " << L_tmpnam << " znaków.\n";
	
	char pszName[L_tmpnam] = { '\0' };
	
	cout << "Oto dziesięć nazw:\n";
	for (int i = 0; 10 > i; i++)
	{
		tmpnam( pszName );
		cout << pszName << endl;
	}
	
	return 0;
}
