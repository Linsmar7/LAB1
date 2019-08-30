#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

typedef struct personagem {
    string name;
    int power;
}personagem_t;

bool cmp (personagem a, personagem b) {
    return(a.power > b.power);
}

int main() {
	//Declaração variáveis
	int j, k;
	vector <personagem_t> persos;
	personagem_t aux;

	//Entradas
	cin >> j >> k;
  for (int i = 0; i < j; i++){
  	cin >> aux.name >> aux.power;
		persos.push_back(aux);
  }

	//Sort
	sort(persos.begin(), persos.end(), cmp);

	//Saida
  for (int i = 0; i < k; i++){
  	cout << persos[i].name << " " << persos[i].power << endl;
  }

return 0;
}
