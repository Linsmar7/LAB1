#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct carro {
	int id, t;
};
bool cmp (carro a, carro b) {
	return(a.t < b.t || a.t == b.t && a.id < b.id); //*Obs
}
int main () {
	vector<carro> carros;
	carro aux;
	while (cin >> aux.t >> aux.id) carros.push_back(aux);
	sort(carros.begin(), carros.end(), cmp);
return 0;
}

/* Versão grande:
 
	if (a.t < b.t) return true;
	else if (a.t == b.t) {
		if (a.i < b.i) return true;
		else return false;
	}
	else return false;

*/
