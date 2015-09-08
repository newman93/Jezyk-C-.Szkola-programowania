#include <iostream>
#include "zad1_header.h"

using std::cout;
using std::endl;
using std::cin;

bool Tv::VolUp()
{
	if (n_volume < MaxVal)
	{
		n_volume++;
		return true;
	}
	else
		return false;
}

bool Tv::VolDown()
{
	if (n_volume > MinVal)
	{
		n_volume--;
		return true;
	}
	else
		return false;
}

void Tv::ChanUp()
{
	if (n_channel < n_maxchannel)
		n_channel++;
	else
		n_channel = 1;
}
	
void Tv::ChanDown()
{
	if (n_channel > 1)
		n_channel--;
	else
		n_channel = n_maxchannel;
}

void Tv::Settings() const
{
	cout << "Telewizor jest " << (n_state == Off ? "Wlaczony" : "Wylaczony") << endl;
	if (n_state == On)
	{
		cout << "Glosnosc = " << n_volume << endl;
		cout << "Program = " << n_channel << endl;
		cout << "Tryb = " << (n_mode == Antena ? "antena" : "kabel") << endl;
		cout << "Wjescie = " << (n_input == TV ? "TV" : "DVD") << endl;
	}
}

void Remote::Show_Tryb()
{
	cout << "Tryb pracy pilota: ";
	if (n_tryb == Zwykly)
		cout << "zwykly";
	else
		cout << "interaktywny";
		
	cout << endl;
}
		 
	
