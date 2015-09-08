#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

int main(int argc, char *argv[])
{
	using namespace std;
	
	char c_znak_1;
	char c_znak_2;
	char *c_nazwa;
	int n_licznik_1{0};
	int n_licznik_2{0};
	
	ifstream fiz(argv[1]);
	ifstream fizz(argv[2]);
	ofstream fout(argv[3]);
	
	//sprawdzić, ĸtóry plik ma więcej lini i na te podstawie ustawić pętle odczytu na ten właśnie plki
	while (!(fiz.get(c_znak_1).eof()))
	{
		++n_licznik_1;
	}
	
	while (!(fizz.get(c_znak_2).eof()))
	{
		++n_licznik_2;
	}
	
	fiz.close();
	fizz.close();
	
	
	ifstream fin(argv[1]);
	ifstream finn(argv[2]);
	
	if (n_licznik_1 >= n_licznik_2)
	{
		while (!(fin.get(c_znak_1).eof()))
		{
			if (c_znak_1 == '\n')
			{
				while (!(finn.get(c_znak_2).eof()))
				{
					if (c_znak_2 != '\n')
					{
						fout << c_znak_2;
					}
					else
						break;
				}
			}		
		fout << c_znak_1;
		}
	}
	else 
	{
		while (!(finn.get(c_znak_2).eof()))
		{
			if (c_znak_2 == '\n')
			{
				while (!(fin.get(c_znak_1).eof()))
				{
					if (c_znak_1 != '\n')
					{
						fout << c_znak_1;
					}
					else
						break;
				}
			}		
		fout << c_znak_2;
		}
	}
	
	
	fin.close();
	fout.close();
	
	//ten fragment wyrzuca gdzieś (core dumped)
	/*
	cout << "Program zakończył prace!" << endl;
	
	c_nazwa = new char (strlen(argv[3]) + 5);
	
	strcpy(c_nazwa, "cat ");
	strcat(c_nazwa, argv[3]);
	
	system(c_nazwa);
	*/
	return 0;
}
