#include <iostream>
#include <string>
#include "queue_header.h"
int main()
{
	using std::string;
	using std::cin;
	using std::cout;
	
	QueueTP<string> cs(5);
	string s_temp;
	
	while (!cs.IsFull())
	{
		cout << "Wpisz swoje imie i nazwisko. Zostanie obsluzony/a wedlug kolejnosci przybycia\n Imie i Nazwisko: ";
		getline(cin, s_temp);
		cs.EnQueue(s_temp);
	}
	cout << "Kolejka jest pelna. Rozpoczynamoy przetwarzanie!\n";
	
	while (!cs.IsEmpty())
	{
		cs.DeQueue(s_temp);
		cout << "Teraz obslugujemy " << s_temp << "..\n";
	}
	
	return 0;
}
