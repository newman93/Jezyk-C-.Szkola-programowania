// static.cpp -- stosowanie lokalnej zmiennej statycznej
#include <iostream>
#include <string>

using namespace std;

void strcount(const string str);

int main()
{
    string input;

    cout << "Wprowadź wiersz:\n";
    getline(cin, input);
    while ( input != "")
    {
        strcount(input);
        cout << "Wprowadź następny wiersz (wiersz pusty kończy wprowadzanie):\n";
        getline(cin, input);
    }
    cout << "Koniec\n";
    return 0;
}

void strcount(const string str)
{
    static int total = 0;         

    cout << "\"" << str << "\" zawiera ";
    cout << str.size() << " znaków\n";
    total += str.size();
    cout << "Łącznie "<< total << " znaków\n";
}

