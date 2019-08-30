#include <iostream>
#include <queue>
using namespace std;

int main () {
	//Declaração
	int n, l, x, aux, duelo;
	int mortos = 0;
	queue <int> amigos;
	queue <int> inimigos;

	//Entrada
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		amigos.push(x);
	}
	cin >> l;
	for (int i = 0; i < l; i++) {
		cin >> x;
		inimigos.push(x);
	}

	//Programa
	for (int i = 0; i < l; i++) {
		if (!amigos.empty() && !inimigos.empty()) {
			duelo = amigos.front() - inimigos.front();
			aux = amigos.front();
			if (duelo >= 0) {
				amigos.pop();
				inimigos.pop();
				amigos.push(aux);
			}
			else {
				mortos++;
				amigos.pop();
				inimigos.pop();
			}
		}
	}

	//Saida
	cout << mortos << endl;
	
	
return 0;
}
