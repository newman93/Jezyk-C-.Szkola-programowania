#include <iostream>
#include "zad3_header.h"

int main(void)
{
	using std::cout;
	using std::endl;
	using std::cin;
	
	Golf one("Adrian",1);
	Golf two;
	Golf three;
	two.setgolf(three);
	
	one.showgolf();
	two.showgolf();
	
	cin.get();
	return 0;
}
