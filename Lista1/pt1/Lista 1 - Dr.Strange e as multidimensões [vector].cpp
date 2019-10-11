#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
	int n, a, b, d, cont = 0;
	//Entradas
	cin >> n;
	vector<int> pontoa(n);
	vector<int> pontob(n);
	vector<int> pontod(n);
	for (int i = 0; i < n; i++) {
		cin >> a;
		pontoa[i] = a;
	}
	for (int i = 0; i < n; i++) {
		cin >> b;
		pontob[i] = b;
	}
	for (int i = 0; i < n; i++) {
		cin >> d;
		pontod[i] = d;
	}

	//Comp
	for (int i = 0; i < n; i++) {
		if (pontoa[i] + pontob[i] == pontod[i]) cont++;
		else {
			cout << "NOPE :(" << endl;
			break;
		}
	}
	if (cont == n) cout << "OK" << endl;
return 0;
}
