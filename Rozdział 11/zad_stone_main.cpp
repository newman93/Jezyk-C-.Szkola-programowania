#include "zad_stone_header.h"

int main(void)
{
	using namespace std;
	
	Stonewt stone_1(24.56);
	Stonewt stone_2(5, 10.24);
	Stonewt stone_3;

	stone_2.change_mode(Stonewt::STONE_M);
	cout << stone_2 << endl;
	stone_2.change_mode(Stonewt::POUNDS_M);
	cout << stone_2 << endl;
	stone_2.change_mode(Stonewt::PDS_M);
	cout << stone_2 << endl;
	stone_2.change_mode(Stonewt::POUNDS_M);
	stone_3 = stone_1 + stone_2;
	cout << stone_3 << endl;
	stone_3 = stone_2 - stone_1;
	cout << stone_3 << endl;
	stone_3 = stone_1 * stone_2;
	cout << stone_3 << endl;
	
	cin.get();
	
	return 0;
}
