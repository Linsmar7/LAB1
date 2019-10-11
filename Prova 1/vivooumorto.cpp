#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	int n, m;
	string x;
	set<string> vivos;
	set<string> mortos;
	set<string>::iterator it;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		getline(cin, x);
		vivos.insert(x);
	}
	cin >> m;
	cin.ignore();
	for (int i = 0; i < m; i ++) {
		getline(cin, x);
		if (vivos.count(x)) {
			it = vivos.find(x);
			vivos.erase(*it);
			mortos.insert(x);
		}
	}

	it = vivos.begin();
	while (it != vivos.end()) {
		cout << *it << endl;
		it++;
	}
	it = mortos.begin();
	while (it != mortos.end()) {
		cout << *it << endl;
		it++;
	}
return 0;
}