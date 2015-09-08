#include <iostream>
#include <cstring>
#include "zad1_header.h"

Cow::Cow()
{
	std::strcpy(name, "Domyslny");
	hobby = new char [1];
	hobby[0] = '\n';
	weight = 0.0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
	if (strlen(nm) < 20)
		std::strcpy(name,nm);
	else
		std::cout << "Podane imię jest zbyt długie!" << std::endl;
	
	int temp = std::strlen(ho);

	hobby = new char[temp+1];
	std::strcpy(hobby,ho);
	weight = wt;
	
}

Cow::Cow(const Cow & c)
{
	weight = c.weight;
	std::strcpy(name, c.name);
	int temp = std::strlen(c.hobby);
	hobby = new char [temp + 1];
	std::strcpy(hobby, c.hobby);
}

Cow::~Cow()
{
	delete [] hobby;
}
		
Cow & Cow::operator=(const Cow & c)
{
	if (this == &c)
		return *this;
	
	delete [] hobby;
	std::strcpy(name, c.name);
	int temp = std::strlen(c.hobby);
	hobby = new char [temp+1];
	std::strcpy(hobby, c.hobby);
	weight = c.weight;
	
	return *this;
}
	
void Cow::ShowCow() const
{
	std::cout << "Imie: " << name << std::endl;
	std::cout << "Hobby: " << hobby << std::endl;
	std::cout << "Waga: " << weight << std::endl;
}
