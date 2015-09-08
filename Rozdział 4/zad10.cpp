#include <iostream>
#include <array>

using namespace std;

int main(void)
{
	array<float,3> czasy;
	cout << "Czas 1: ";
	cin >> czasy[0];
	cout << endl;
	
	cout << "Czas 2: ";
	cin >> czasy[1];
	cout << endl;
	
	cout << "Czas 3: ";
	cin >> czasy[2];
	cout << endl;
	
	cout << czasy[0] << " , " << czasy[1] << " , " << czasy[2] << " Srednia: " << (czasy[0]+czasy[1]+czasy[2])/3 << endl;
	
	cin.get();
	return 0;
}
