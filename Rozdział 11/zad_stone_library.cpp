#include <iostream>
#include "zad_stone_header.h"

using std::cout;

Stonewt::Stonewt(double lbs)
{
	stone = int (lbs) / Lbs_per_stn;
	pds_left = int (lbs) % Lbs_per_stn + lbs - int (lbs);
	pounds = lbs;
	mode = POUNDS_M;
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	mode = POUNDS_M;
}

Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
	mode = POUNDS_M;
}

Stonewt::~Stonewt()
{
}

ostream & operator<<(ostream & os, const Stonewt & s)
{
	if (s.mode == Stonewt::STONE_M)
		os << "Tryb STONE: \n" << s.stone << " kamieni, " << s.pds_left << " funtów\n";
	else if (s.mode == Stonewt::POUNDS_M)
		os << "Tryb POUNDS: \n" << s.pounds << " funtów\n";
	else if (s.mode == Stonewt::PDS_M)
		os << "Tryb PDS: \n" << int (s.pounds) << " funtów\n";
}
	
Stonewt operator+(const Stonewt & s, const Stonewt & t)
{
	Stonewt temp;
	double pounds_total{0.0};
	
	pounds_total = s.pounds + t.pounds;
	
	temp.stone = int (pounds_total) / Stonewt::Lbs_per_stn; 
	temp.pounds = pounds_total;
	temp.pds_left = int (pounds_total) % Stonewt::Lbs_per_stn + pounds_total - int (pounds_total);
	
	return temp;
}

Stonewt operator-(const Stonewt & s, const Stonewt & t)
{
	Stonewt temp;
	double pounds_total{0.0};
	
	pounds_total = s.pounds - t.pounds;
	
	temp.pounds = pounds_total;
	temp.stone = int (pounds_total) / Stonewt::Lbs_per_stn; 
	temp.pds_left = int (pounds_total) % Stonewt::Lbs_per_stn + pounds_total - int (pounds_total);
	
	return temp;
}

Stonewt operator*(const Stonewt & s, const Stonewt & t)
{
	Stonewt temp;
	double pounds_total{0.0};
	
	pounds_total = s.pounds * t.pounds;
	
	temp.pounds = pounds_total;
	temp.stone = int (pounds_total) / Stonewt::Lbs_per_stn; 
	temp.pds_left = int (pounds_total) % Stonewt::Lbs_per_stn + pounds_total - int (pounds_total);
	
	return temp;
}

void Stonewt::change_mode(Mode form = STONE_M)
{
	mode = form;
}
