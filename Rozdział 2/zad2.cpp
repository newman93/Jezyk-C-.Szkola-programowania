#include <iostream>

using namespace std;

int main(void)
{
	cout << "Podaj odległość w milach morskich" << endl;
	
	double odleglosc;
	cin >> odleglosc;
	
	cout << "Podana odleglosc w metrach to: " << odleglosc*1852 << endl;
	
	cin.get();
	cin.get();
	
	return 0;
}
