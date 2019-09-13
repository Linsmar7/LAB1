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
	int contador = 0;
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

	//Contando quantas muie tem na fila de homi inicialmente
	tamanhoh = filah.size();
	for (int i = 0; i < tamanhoh; i++) {
		if (!filah.empty()) {
			if (filah.front().gen == 'M') {
				aux = filah.front();
				filah.pop();
				filah.push(aux);
				contador++; //Essa variável é usada pra contar as muie na fila dos homi
			}
			else {
				aux = filah.front();
				filah.pop();
				filah.push(aux);
			}
		}
	}
	//Jogando tudo da fila de muie na fila de homi
	if (!filam.empty()) {
		for (int i = 0; i < n; i++) {
				aux = filam.front();
				filam.pop();
				filah.push(aux);
		}
	}
	//Passando todas as muie da fila de homi pra fila de muie e passando os homi pra fila de homi novamente
	tamanhoh = filah.size();
	if (!filah.empty()) {
		for (int i = 0; i < tamanhoh; i++) {
			if (filah.front().gen == 'M') {
				aux = filah.front();
				filah.pop();
				filam.push(aux);
			}
			else {
				aux = filah.front();
				filah.pop();
				filah.push(aux);
			}
		}
	}
	//Usando a variavel contador pra poder organizar a ordem da fila de muie
	if (!filam.empty()) {
		for (int i = 0; i < contador; i++) {
				aux = filam.front();
				filam.pop();
				filam.push(aux);
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