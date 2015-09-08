#include <iostream>
#include <cstring>

using namespace std;

const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student *, int);
void display1(student);
void display2(const student *);
void display3(const student *,int);
 
int main(void)
{
	cout << "Podaj wielkość grupy: ";
	int n_wielkosc;
	cin >> n_wielkosc;
	
	student *studenci = new student [n_wielkosc];
	int n_entered = getinfo(studenci,n_wielkosc);
	for (int i=0; i<n_entered; ++i)
	{
		display1(studenci[i]);
		display2(&studenci[i]);
    }
    display3(studenci,n_entered);
    delete [] studenci;
    cout << "Gotowe\n";
    
	return 0;
}

int getinfo(student studenci[], int n_wielkosc)
{
	int n_ilosc{0};
	char bufor[SLEN];
	
	for (int i = 0; i < n_wielkosc; ++i)
	{
		cout << "Imie: ";
		cin >> bufor;
		if (bufor[0] == ' ') //poprawic walidacje, gdy nie wporwadzone zostanie imie
			break;
		else
		{
			strcpy(studenci[i].fullname,bufor);
			cout << "Hobby: ";
			cin >> studenci[i].hobby;
			cout << endl;
			cout << "OOplevel: ";
			cin >> studenci[i].ooplevel;
			cout << endl;
			++n_ilosc;
		} 
	}
	
	return n_ilosc;
}

void display1(student studenci)
{
	cout << "Imie: " << studenci.fullname << endl;
	cout << "Hobby: " << studenci.hobby << endl;
	cout << "OOplevel: " << studenci.ooplevel << endl;
}
void display2(const student *studenci)
{
	cout << "Imie: " << studenci->fullname << endl;
	cout << "Hobby: " << studenci->hobby << endl;
	cout << "OOplevel: " << studenci->ooplevel << endl;
}

void display3(const student *studenci,int n_entered)
{
	for (int i=0; i < n_entered;++i)
	{
		cout << "Imie: " << studenci[i].fullname << endl;
		cout << "Hobby: " << studenci[i].hobby << endl;
		cout << "OOplevel: " << studenci[i].ooplevel << endl; 
	}
}
