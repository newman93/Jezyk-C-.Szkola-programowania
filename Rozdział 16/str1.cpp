#include <iostream>
#include <string>

//kostruktory klasy string

int main()
{
	using namespace std;
	
	string one("Zwyciezca loterii!"); //string(const char * s) inicjializuje obiekt za pomoca ciagu NBTS
	cout << one << endl;
	
	string two(20, '$');	//string(size_type n, char c) tworzy obiekt o dlugosci n elementow zainicjalizowany znakiem c
	cout << two << endl;
	
	string three(one);	//string(const string & str) inicjalizuje obiekt innynm obiektem kalsy string (konstruktor kopiujacy)
	cout << three << endl;
	one += " Ups!";	//przeciazony operator + i =
	cout << one << endl;
	
	two = "Przepraszam. To był ";
	three[10] = 'k';
	string four;	//string() tworzy domyslny obiekt string o dlugosci 0 (kontruktor domyslny)
	four = two + three;	//przeciazony operator + i =
	cout << four << endl;
	
	char alls[] = "Wszystko dobre, co sie dobrze koncy";
	string five(alls, 20); //inicjalizuje obiekt za pomoca n znakow, na ktore wskazuje pierwszy wyraz
	cout << five << endl;
	string six(alls + 9, alls + 14); 	//inicjalizuje obiekt string za pomoca wartosci w przedziale [begin, end), gdzie begi i end dzialaja jak wskazniki i okrelsja pozyjce
	cout << six << ", ";string seven(&five[9], &five[14]);	//to samo co wyzej
	cout << seven << "...\n";
	string eight(four, 20, 9);	//inicjalizuje obiekt string podciagiem innego obiektu string, ropoczynajacego sie do pozycji 20 i zawierajacego co najwyzej 9 kolejnych znakow
	cout << eight << " w akcji" << endl;
	return 0;
}
