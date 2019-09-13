#include <iostream>
#include <queue>
using namespace std;

int main () {
	//Declaração
	int n, t, x;
	queue <int> fila;
	int aux;
	int tamanho;
	
	//Entrada
	cin >> n >> t;
	for (int i = 0; i < n; i++) {
		cin >> x;
		fila.push(x);
	}
	
	//Programa
	for (int i = 0; i < t; i++) {
		if (!fila.empty()) {
			aux = fila.front()-1;
			fila.pop();
			if (aux != 0) fila.push(aux);
		}
	}
	
	//Saida
	if (fila.empty()) cout << "pronto" << endl;
	else {
		tamanho = fila.size();
		cout << tamanho << endl;
		for (int i = 0; i < tamanho; i++) {
			cout << fila.front() << " ";
			fila.pop();
		}
		cout << endl;
	}
return 0;
}
