#include <iostream>
#include <stack>
using namespace std;
int main () {
	int n;
	stack <int> pilha;
	while (cin >> n) pilha.push(n); //Jogando dentro da pilha
	while (!pilha.empty()) { //Mesma coisa da fila
		cout << pilha.top() << endl; //Mostrando a "útlima" posição da pilha
		pilha.pop(); //Retirando a "última"
	}
return 0;
}
