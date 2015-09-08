#include <iostream>
#include "zad2_header.h"

int main(void)
{
	using std::cout;
	using std::endl;
	Person one;
	Person two("Kowalski");
	Person three("Kowalski", "Adrian");
	
	cout << "#1" << endl;
	one.Show();
	one.FormalShow();
	
	cout << "#2" << endl;
	two.Show();
	two.FormalShow();
	
	cout << "#3" << endl;
	three.Show();
	three.FormalShow();
	
	return 0;
}
