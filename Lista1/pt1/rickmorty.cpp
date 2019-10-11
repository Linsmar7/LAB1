#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

typedef struct pacoteS {
	string nome;
	int energia;
}pacote;

bool cmp (pacoteS a, pacoteS b) {
	return (a.nome < b.nome || (a.nome == b.nome && a.energia > b.energia));
}

int main () {
	//Declaração
	int n;
	vector <pacote> box;
	pacote aux;

	//Entrada
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> aux.nome >> aux.energia;
		box.push_back(aux);
	}

	//Sort
	sort(box.begin(), box.end(), cmp);

	//Saida
	for (int i = 0; i < n; i++) cout << box[i].nome << " " << box[i].energia << endl;

return 0;
}
