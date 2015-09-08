#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

using std::ostream;

class Stonewt
{
	public:
		enum Mode { STONE_M, PDS_M, POUNDS_M };
	private:
		enum { Lbs_per_stn = 14 };
		Mode mode;
		int stone;
		double pds_left;
		double pounds;
	public:
		Stonewt(double lbs);
		Stonewt(int stn, double lbs);
		Stonewt();
		~Stonewt();
		void change_mode(Mode form = STONE_M);
		friend ostream & operator<<(ostream & os, const Stonewt & s);
		friend Stonewt operator+(const Stonewt & s, const Stonewt & t);
		friend Stonewt operator-(const Stonewt & s, const Stonewt & t);
		friend Stonewt operator*(const Stonewt & s, const Stonewt & t);
};
#endif
