#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
	int n, m, c;
	int cond = 0;
	//Entradas
	cin >> n;
	vector<int> esmeralda(n);
	for (int i = 0; i < n; i++) {
		cin >> m;
		esmeralda[i] = m;
	}
	cin >> c;

	//Busca
	for (int i = 0; i < n; i++) {
		if (esmeralda[i] == c) {
			cout << c << endl;
			cond = 1;
			break;
		}
	}
	if (cond == 0) cout << "-1" << endl;
		
return 0;
}
