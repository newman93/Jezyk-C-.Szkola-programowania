#include <iostream>
#include "pytanie_sprawdzajace_zad1_header.h"

Stonewt::Stonewt(double lbs)
{ 
	stone = int (lbs)/Lbs_per_stn;
	pds_left = int (lbs) % Lbs_per_stn + lbs - int (lbs);
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stone * (Lbs_per_stn) + lbs;
}
 
Stonewt::Stonewt()
{
	stone = 0;
	pds_left = pounds = 0.0;
}
		
Stonewt::~Stonewt()
{
}

Stonewt operator*(double masa, const Stonewt & s)
{
	Stonewt temp;
	double d_temp;
	
	d_temp = s.pounds * masa;
	temp.stone = int (d_temp) / Stonewt::Lbs_per_stn;
	temp.pds_left = int (d_temp) % Stonewt::Lbs_per_stn + s.pounds - int (s.pounds);
	temp.pounds = d_temp;
	
	return temp;
}

Stonewt Stonewt::operator*(double masa) const
{
	Stonewt temp;
	double d_temp;
	
	d_temp = this->pounds * masa;
	temp.stone = int (d_temp) / Lbs_per_stn;
	temp.pds_left = int (d_temp) % Lbs_per_stn + this->pounds - int (this->pounds);
	temp.pounds = d_temp;
	
	return temp;
}

void Stonewt::show_lbs() const
{
	using std::cout;
	using std::endl;
	
	cout << "Masa w funtach: " << pounds << endl;
}
		
void Stonewt::show_stn() const
{
	using std::cout;
	using std::endl;
	
	cout << "Masa w kamieniach: " << stone << " kamieni " << pds_left << " funtów" << endl;
} 
