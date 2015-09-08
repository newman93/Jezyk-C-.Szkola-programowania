#include <iostream>
#include "tv_header.h"

int main()
{
	using namespace std;
	
	Tv s42;
	
	cout << "Poczatkowe ustawienia telewizora 42\n";
	s42.Settings();
	s42.OnOff();
	s42.ChanUp();
	cout << "\n Nowe ustawienia tlewizora 42\n";
	s42.Settings();
	
	Remote grey;

	grey.Set_Chan(s42, 10);
	grey.VolUp(s42);
	grey.VolUp(s42);
	cout << "\n Ustawienia telewizora 42 po uzyciu pilota\n";
	s42.Settings();
	
	Tv s58(Tv::On);
	s58.Set_Mode();
	grey.Set_Chan(s58, 28);
	cout << "\n Ustawienia telwizora 58\n";
	s58.Settings();
	
	return 0;
}
