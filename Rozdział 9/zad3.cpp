#include <iostream>
#include <cstring>
#include <new>

const int BUF = 512;
const int N = 2;
char buffer[BUF];
using namespace std;

struct chaff{
	char dross[20];
	int slag;
};

int main(void)
{
	chaff *w1 = new (buffer) chaff[2];
	chaff *w2 = new chaff[2];
	
	strcpy(w1[0].dross, "w1_buffor1");
	w1[0].slag = 11;
	strcpy(w1[1].dross, "w1_buffor2");
	w1[1].slag = 12;
	cout << "W1: " << endl;
	cout << w1[0].dross << " " << w1[0].slag << endl;
	cout << w1[1].dross << " " << w1[1].slag << endl;
	
	strcpy(w2[0].dross, "w2_buffor1");
	w2[0].slag = 21;
	strcpy(w2[1].dross, "w2_buffor2");
	w2[1].slag = 22;
	cout << "W2: " << endl;
	cout << w2[0].dross << " " << w2[0].slag << endl;
	cout << w2[1].dross << " " << w2[1].slag << endl;
	
	return 0;
}
