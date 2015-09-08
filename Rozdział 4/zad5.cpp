#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	struct Batonik
	{
			string marka;
			float waga;
			int kalorie;
	};
	
	Batonik snack = { "Snickers", 0.25, 240 };
	
	cout << snack.marka << "," << snack.waga << "," << snack.kalorie << endl;
	cin.get();
	
	return 0;
}
