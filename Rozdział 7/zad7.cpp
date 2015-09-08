#include <iostream>
const int Max = 5;


//Bledny program
// prototypy funkcji
int *fill_array(double *,double *, int limit);
void show_array(const double *,double *, int n);  // nie zmienia danych
void revalue(double r, double *, double *,int n);

int main()
{
    using namespace std;
    double properties[Max];

    int size = fill_array(&properties[0],&protepories[Max], Max);
    show_array(&properties[0],&protepories[Max], size);
    if (size > 0)
    {
        cout << "Podaj czynnik zmiany wartości: ";
        double factor;
        while (!(cin >> factor)) // nieliczbowa wartość na wejściu
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Niepoprawna wartość; podaj liczbę: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Gotowe.\n";
    cin.get();
    cin.get();
    return 0;
}

int *fill_array(double *begin,double *end, int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Podaj wartość nr " << (i + 1) << ": ";
        cin >> temp;
        if (!cin)    // błędne dane
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Błędne dane, wprowadzanie danych przerwane.\n";
           break;
        }
        else if (temp < 0)     // nakaz zakończenia
            break;
        *(begin+i) = temp;
    }
    return i;
}

// poniższa funkcja może użyć tablicy, której adres przekazano
// w ar, ale nie może jej modyfikować
void show_array(const double *begin, const double *end int n)
{
   using namespace std;
   for (int i = 0; i < n; i++)
    {
        cout << "Nieruchomość nr " << (i + 1) << ": ";
        cout << *(begin+i) << endl;
    }
}

// mnoży każdy element ar[] przez r
void revalue(double r, double *begin,double *end int n)
{
    for (int i = 0; i < n; i++)
        *(begin+i) *= r;
}

