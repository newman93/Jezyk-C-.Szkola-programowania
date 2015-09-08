#ifndef HEADER_02_
#define HEADER_02_

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class Frabjous
{
	private:
		char fab[20];
	public:
		Frabjous(const char * s = "C++") { std::strcpy(fab, s); }
		virtual void tell() { cout << fab << endl; } 
};

class Gloam
{
	private:
		int glip;
		Frabjous fb;
	public:
		Gloam(int g = 0, const char * s = "C++") : glip(g), fb(s) {} 
		Gloam(int g, const Frabjous & f) : glip(g), fb(f) {}
		void tell() { fb.tell(); cout << glip << endl; } 
};

#endif
