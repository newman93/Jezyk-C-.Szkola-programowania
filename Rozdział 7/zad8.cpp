#include <iostream>

using namespace std;
const char pory_roku[4][20] = { "Wiosna", "Lato", "Jesień", "Zima" };

void fill(double *);
void show(const double *);

int main(void)
{
	double wydatki[4]{0,0,0,0};
	fill(wydatki);
	show(wydatki);
	
	return 0;
}

void fill(double wydatki[])
{
	for (int i = 0; i < 4;++i)
	{
		cout << "Wydatki za okres: " << pory_roku[i] << endl;
		cin >> wydatki[i];
	} 
}

void show(const double wydatki[])
{
	double total{0.0};
	
	for (int i = 0; i < 4;++i)
	{
		cout << pory_roku[i] << " : " << wydatki[i] << " zl." << endl;
		total = total + wydatki[i];
	}
	cout << "Wydatki lacznie: " << total << " zl." << endl;
}
