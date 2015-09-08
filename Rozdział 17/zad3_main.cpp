#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

int main(int argc, char *argv[])
{
	using namespace std;
	
	char c_znak;
	char *c_nazwa;
	
	ifstream fin(argv[1]);
	ofstream fout(argv[2]);
	
	while (!(fin.get(c_znak).eof()))
	{
		fout << c_znak;
	}
	
	fin.close();
	fout.close();
	
	cout << "Program zakończył prace!" << endl;
	
	c_nazwa = new char (strlen(argv[2]) + 4);
	
	strcpy(c_nazwa, "cat ");
	strcat(c_nazwa, argv[2]);
	
	system(c_nazwa);
	return 0;
}
