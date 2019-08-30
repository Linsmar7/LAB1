#include <iostream>
#include <queue>
#include <string>
using namespace std;

typedef struct pessoaS {
	string nome;
	char gen;
}pessoa;

int main () {
	//Declaração
	int n, tamanhom, tamanhoh;
	queue <pessoa> filam;
	queue <pessoa> filah;
	pessoa aux;

	//Entrada
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> aux.nome >> aux.gen;
		filam.push(aux);
	}
	for (int i = 0; i < n; i++) {
		cin >> aux.nome >> aux.gen;
		filah.push(aux);
	}

	//Tirando homi da fila de muie
	if (!filam.empty()) {
		for (int i = 0; i < n; i++) {
			if (filam.front().gen == 'H') {
				aux = filam.front();
				filam.pop();
				filah.push(aux);
			}
		}
	}

	//Tirando muie da fila de homi
	if (!filah.empty()) {
		for (int i = 0; i < n; i++) {
			if (filah.front().gen == 'M') {
				aux = filah.front();
				filah.pop();
				filam.push(aux);
			}
		}
	}

	//Saida
	cout << "Fila Feminina:" << endl;
	if (filam.empty()) cout << "Vazia" << endl;
	else {
	tamanhom = filam.size();
		for (int i = 0; i < tamanhom; i++) {
			cout << filam.front().nome << endl;
			filam.pop();
		}
	}
	
	cout << "Fila Masculina:" << endl;
	if (filah.empty()) cout << "Vazia" << endl;
	else {
	tamanhoh = filah.size();
		for (int i = 0; i < tamanhoh; i++) {
			cout << filah.front().nome << endl;
			filah.pop();
		}
	}
 	
return 0;
}
