#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
	int n;
	string texto;
	//Entradas
	cin >> n;
	cin.ignore();
	vector<string> teams(n);

	for (int i = 0; i < n; i++) {
		getline(cin, texto);
		teams[i] = texto;
	}
	//Saida
	for (int i = 0; i < (n/2); i++) {
		cout << teams[0] << " X " << *(teams.end()-1) << endl;
		teams.erase(teams.begin());
		teams.erase(teams.end()-1);
	}
return 0;
}
