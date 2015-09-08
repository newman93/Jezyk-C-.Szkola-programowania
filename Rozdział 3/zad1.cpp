#include <iostream>

using namespace std;

int main(void)
{
	const float stopa = {30.48};
	const float cal = {2.54};
	 
	cout << "Podaj wzrost w cm: " << endl;
	int wzrost;
	cin >> wzrost;
	
	cout << "Wzrost: " << wzrost << '_' << wzrost*stopa << '_' << wzrost*cal << endl;
	cin.get();
	
	return 0;
}
