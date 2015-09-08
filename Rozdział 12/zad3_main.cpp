#include <iostream>
#include "zad3_header.h"

const int STKS = 4;

int main(void)
{
	using namespace std;
	/*
	Stock stocks[STKS] = {
							Stock("NanoSmart", 12, 20.0),
							Stock("BurakPol", 200, 2.0),
							Stock("GruzPol", 130, 3.25),
							Stock("FutroPol", 60, 6.5)
						};
						
	cout << "Portfel inwestycyjny: \n";
	int st{0};
	
	for (st = 0; st < STKS; st++)
		stocks[st].show();
		
	const Stock * top = &stocks[0];
	
	for (st = 0; st < STKS; st++)
		top = &top->topval(stocks[st]);
		
	cout << "\n Najbardziej wartosciowy pakiet: \n";
	
	top->show();
	*/
	//aktualizacja
	
	int qs(4);
	
	Queue line(qs);
	Item temp;
	std::string s_temp;
	double d_stemp;
	double d_svtemp;
	
	for (int i = 0; i < 4; ++i)
	{
		cout << "Nazwa: ";
		getline(cin, s_temp);
		temp.set_company(s_temp);
		cout << endl;
		cout << "Shares: ";
		cin >> d_stemp;
		temp.set_shares(d_stemp);
		cout << endl;
		cout << "Share val: ";
		cin >> d_svtemp;
		temp.set_share_val(d_svtemp);
		cout << endl;
		cin.get();
		temp.set_tot();
		line.enqueue(temp);
	}
	
	cout << "Baza danych: " << endl; 
	for (int i = 0; i < 4; ++i)
	{
		cout << temp;
		line.dequeue(temp);
	}
	
	return 0;
}
	
