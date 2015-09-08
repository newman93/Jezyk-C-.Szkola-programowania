#include "zad2_header.h"
	
Wine::Wine()
{
	name = "brak";
}
									                             	
Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : name(l), year(y), PairArray(ArrayInt(yr, y), ArrayInt(bot, y)) {}

Wine::Wine(const char * l, int y) : name(l), year(y), PairArray(ArrayInt(y), ArrayInt(y)) {}

Wine::~Wine()
{
}

void Wine::GetBottles()
{
	for(int i = 0; i < year; i++)
	{
		std::cout << "Podaj rocznik: ";
		std::cin >> first()[i];
		std::cout << "Podaj liczbe butelek: ";
		std::cin >> second()[i];
	}
}
		
void Wine::show() 
{
	std::cout << "Nazwa: " << name << std::endl;
	
	for(int i = 0; i < year; i++)
		std::cout << "#" << i+1 << " Ilosc: " << (second())[i] << " Rocznik: " << (first())[i] << std::endl;
}

