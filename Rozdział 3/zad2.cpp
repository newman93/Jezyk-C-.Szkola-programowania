#include <iostream>

using namespace std;

int main(void)
{	
	const int stopy_na_cale = {12};
	const float cale_na_metry = {0.0254};
	const float funty_na_kilogramy = {2.2};
	 
	cout << "Podaj wzrost w stopach" << endl;
	float f_wzrost_stopy;
	cin >> f_wzrost_stopy;
	
	cout << "Podaj wzrost w calach" << endl;
	float f_wzrost_cale;
	cin >> f_wzrost_cale;
	
	cout << "Podaj wage w funtach" << endl;
	float f_waga_funty;
	cin >> f_waga_funty;
	
	cout << "Wskaźnik BMI wynosi: " << (f_waga_funty/funty_na_kilogramy)/(((f_wzrost_stopy*stopy_na_cale)*cale_na_metry)*((f_wzrost_stopy*stopy_na_cale)*cale_na_metry)) << endl;
	cin.get();
	
	return 0;
}
