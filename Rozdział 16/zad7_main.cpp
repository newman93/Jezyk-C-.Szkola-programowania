#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> Lotto(int _l, int _n);

int main()
{
	vector<int> winners;
	
	winners = Lotto(70, 4);
	
	cout << "Szczesliwe liczby to: " << endl;
	copy(winners.begin(), winners.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	
	return 0;
}

vector<int> Lotto(int _l, int _n)
{
	vector<int> tmp;
	vector<int> out_tmp;
	
	int i{1};
	for (int j = 0; j < _l; ++j)
	{ 
		tmp.push_back(i);
		++i; 
	}
	
	random_shuffle (tmp.begin(), tmp.end());
	
	for (int j = 0; j < _n; ++j)
		out_tmp.push_back(tmp[j]);
	
	return out_tmp;
}
