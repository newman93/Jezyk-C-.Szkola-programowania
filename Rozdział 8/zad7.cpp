// tempover.cpp -- przeciążanie szablonów
#include <iostream>

template <typename T>            // szablon A
int ShowArray(T arr[], int n);

template <typename T>            // szablon B
int ShowArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3]; 

// ustawienie wskaźników na pola amount struktur z tablicy Mr_E
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;
    
    cout << "Wyliczanie rzeczy pana E.:\n";
// things to tablica int
	cout << ShowArray(things, 6);  // używamy szablonu A
	cout << endl;
    cout << "Wyliczanie długów pana E:\n";
// pd to tablica wskaźników na double
    cout << ShowArray(pd, 3);      // używa szablonu B (bardziej wyspecjalizowanego)
    return 0;
}

template <typename T>
int ShowArray(T arr[], int n)
{
    using namespace std;
    cout << "szablon A\n";
    int i{0};
    T sum{0};
    
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
        sum = sum + arr[i];
    } 
    cout << endl;
    cout << "Suma: " << sum << endl;
    cout << endl;
    
    return i;
}

template <typename T>
int ShowArray(T * arr[], int n)
{
    using namespace std;
    cout << "szablon B\n";
    int i{0};
    T sum{0};
    
    for (i = 0; i < n; i++)
    {
        cout << *arr[i] << ' ';
        sum = sum + *arr[i];
    }
    cout << endl;
    cout << "Suma: " << sum << endl;
    
    return i; 
}
