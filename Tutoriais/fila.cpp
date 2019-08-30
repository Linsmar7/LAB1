#include <iostream>
#include <queue>
using namespace std;
int main () {
	int n;
	queue <int> fila;
	while (cin >> n) {
		if (n == 0) break;
		else fila.push(n); //Jogando n dentro da fila
	while (!fila.empty()) { //Se a fila NÃO estiver vazia
		cout << fila.front() << endl; //1° valor da fila
		fila.pop(); //Retira o 1° valor
	}
return 0;
}
