#include <cstring>
#include "zad2_header.h"

using std::cout;
using std::cin;

int String::num_strings = 0;

int String::HowMany()
{
	return num_strings;
}

String::String(const char * s)
{
	len = std::strlen(s);
	str = new char [len + 1];
	std::strcpy(str, s);
	num_strings++;
}

String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

String::String(const String & st)
{
	num_strings++;
	len = st.len;
	str = new char [len + 1];
	std::strcpy(str, st.str);
}

String::~String()
{
	--num_strings;
	delete [] str;
}

String & String::operator=(const String & st)
{
	if (this == &st)
		return *this;
	delete [] str;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	return *this;
}

String & String::operator=(const char * s)
{
	delete [] str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}

char & String::operator[](int i)
{
	return str[i];
}

const char & String::operator[](int i) const
{
	return str[i];
}

bool operator<(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
	return st2 < st1;
}

bool operator==(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

ostream & operator<<(ostream & os, const String & st)
{
	os << st.str;
	return os;
}

istream & operator>>(istream & is,String & st)
{
	char temp[80];
	is.get(temp, 80);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}

//aktualizacja interfejsu
String operator+(const String & st1, const String & st2)
{
	String temp;
	
	temp.len = std::strlen(st1.str);
	temp.len = temp.len + std::strlen(st2.str);
	temp.str = new char[temp.len + 1];
	std::strcpy(temp.str, st1.str);
	std::strcat(temp.str, st2.str);
	String::num_strings++;
	
	return temp;
}

String operator+(char s[], const String & st2)
{
	String temp;
	
	temp.len = std::strlen(st2.str);
	temp.len = temp.len + std::strlen(s);
	temp.str = new char[temp.len + 1];
	std::strcpy(temp.str, st2.str);
	std::strcat(temp.str, s);
	String::num_strings++;
	
	return temp;
}
		
void String::stringlow()
{
	for (int i = 0; i < len; ++i)
		str[i] = tolower(str[i]);
}
		
void String::stringup()
{
	for (int i = 0; i < len; ++i)
		str[i] = toupper(str[i]);
}

int String::has(char s)
{
	int licznik{0};
	for (int i = 0; i < len; ++i)
		if (str[i] == s)
			++licznik;
	return licznik;
}
	
