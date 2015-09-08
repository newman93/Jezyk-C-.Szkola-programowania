//arrobj.cpp -- funkcje z obiektami typu array (C++11)
#include <iostream>
#include <array>
#include <string>

// dane stałe
const int Seasons = 4;
const std::array<std::string, Seasons> Snames =
{"Wiosna", "Lato", "Jesień", "Zima"};

// funkcja modyfikująca tablicę typu array
void fill(std::array<double, Seasons> & pa);

// funkcja przetwarzająca tablicę typu array bez ingerencji w jej zawartość
void show(const std::array<double, Seasons> & da);

int main()
{
    std::array<double, Seasons> expenses;
    fill(expenses);
    show(expenses);
    return 0;
}

void fill(std::array<double, Seasons> & pa)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
        cin >> pa[i];
    }
}
void show(const std::array<double, Seasons> & da)
{
    using namespace std;
    double total = 0.0;
    cout << "\nWYDATKI\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": " << da[i] << " zł" << endl;
        total += da[i];
    }
    cout << "Łącznie wydatki roczne: " << total << " zł " << endl;
}

