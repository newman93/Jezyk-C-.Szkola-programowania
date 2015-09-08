#include "zad4_header.h"
		
Time::Time()
{
	hours = minutes = 0;
}
		
Time::Time(int h, int m = 0)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes/60;
	minutes %= 60;
}
	 
void Time::AddHr(int h)
{
	hours += h;
}
		
void Time::Reset(int h = 0, int m = 0)
{
	hours = h;
	minutes = m;
}

Time operator+(const Time & t,const Time & i) 
{
	Time sum;
	sum.minutes = t.minutes + i.minutes;
	sum.hours = t.hours + i.hours + sum.minutes / 60;
	sum.minutes %= 60;
	
	return sum;
}

Time operator-(const Time & t,const Time & i) 
{
	Time diff;
	int tot1,tot2;
	tot1 = t.minutes + 60*t.hours;
	tot2 = i.minutes + 60*i.hours;
	diff.minutes = (tot1 - tot2) % 60;
	diff.hours = (tot2 - tot1) / 60;
	
	return diff;
}	

Time operator*(int m,const Time & i) 
{
	Time result;
	long totalminutes = i.hours * m * 60 + i.minutes * m;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}

ostream & operator<<(ostream & os, const Time & t)
{
	os << t.hours << " godzin, " << t.minutes << " minut";
	return os;
}
