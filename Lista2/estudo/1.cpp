#include <iostream>
#include <queue>

using namespace std;

typedef struct {
	char tipo;
	int vidaTotal;
} vilao;

int main (){
	int n, q, d;
	char c;
	string nome;
	string matador = "";
	cin >> n;
	cin.ignore();
	queue<string> herois;
	queue<vilao> viloes;
	vilao vilaoaux;
	for (int i = 0; i < n; i++){
		getline(cin, nome);
		herois.push(nome);
	}
	cin >> q;
	for (int i = 0; i < q; i++){
		cin >> c >> d;
		vilaoaux.tipo = c;
		switch(vilaoaux.tipo){
			case 'C': {vilaoaux.vidaTotal = d; break; }
			case 'G': {vilaoaux.vidaTotal = d*10; break; }
			case 'D': {vilaoaux.vidaTotal = d*50; break; }
			case 'R': {vilaoaux.vidaTotal = d*100; break; }
		}
		viloes.push(vilaoaux);
	}
	while (!viloes.empty()){
		if (matador != "" || viloes.empty()) break;
		for (int i = 0; i < 10; i++) {
			if(viloes.empty()) break;
			viloes.front().vidaTotal--;
			if(viloes.front().vidaTotal == 0) {
				if(viloes.front().tipo == 'R'){
					matador = herois.front();
					break;
				} else {
					viloes.pop();
				}
			}	
		}
		herois.push(herois.front());
		herois.pop();
	}
	cout << matador << endl;
}
