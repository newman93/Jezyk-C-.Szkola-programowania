#include <iostream>

using namespace std;

int main(void)
{
	cout << "Ile wierszy: ";
	int n_wiersze;
	cin >> n_wiersze;
	
	for (int i=0; i<n_wiersze; ++i)
	{
		for (int j=0; j<=i; ++j)
			cout << "*";
	
		cout << endl;
	}		
	return 0;
}
