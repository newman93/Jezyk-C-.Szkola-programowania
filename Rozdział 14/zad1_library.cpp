#include "zad1_header.h"
	
Wine::Wine()
{
	name = "brak";
}
									                             	
Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : name(l), year(y), data(ArrayInt(yr, y), ArrayInt(bot, y)) {}

Wine::Wine(const char * l, int y) : name(l), year(y), data(ArrayInt(y), ArrayInt(y)) {}

Wine::~Wine()
{
}

void Wine::GetBottles()
{
	for(int i = 0; i < year; i++)
	{
		std::cout << "Podaj rocznik: ";
		std::cin >> data.first()[i];
		std::cout << "Podaj liczbe butelek: ";
		std::cin >> data.second()[i];
	}
	system("clear");
}
		
void Wine::show() 
{
	std::cout << "Nazwa: " << name << std::endl;
	
	for(int i = 0; i < year; i++)
		std::cout << "#" << i+1 << " Ilosc: " << (data.second())[i] << " Rocznik: " << (data.first())[i] << std::endl;
}
