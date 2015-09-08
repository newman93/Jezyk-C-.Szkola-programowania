#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	const float godziny_w_dniu = {24};
	const float minuty_w_godzinie = {60};
	const float sekundy_w_minucie = {60};
	
	cout << "Podaj liczbe sekund " << endl;
	long l_sekundy;
	cin >> l_sekundy;
	
	cout << l_sekundy << " sekund, to " << ((l_sekundy/sekundy_w_minucie)/minuty_w_godzinie)/godziny_w_dniu << " dni " << (l_sekundy/sekundy_w_minucie)/minuty_w_godzinie << " godzin " << l_sekundy/sekundy_w_minucie << " minut " << endl;
	cin.get();
	
	return 0;
}
