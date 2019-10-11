#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct ini{
	int qnt;
	char tipo;
};

int main(){
	int n, m;
	queue<string> nomes;
	stack<ini> inimigos, inimigos_aux;

//LENDO QUEM ESTÁ NA FILA PARA ATIRAR
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++){
		string aux;
		getline(cin, aux);
		nomes.push(aux);
	}

//LENDO A ORDEM DE INIMIGOS
	cin >> m;
	for(int i = 0; i < m; i++){
		ini aux;
		cin >> aux.tipo >> aux.qnt;
//MULTIPLICA PELA QUANTIDADE DE FLECHAS NECESSÁRIAS PARA FACILITAR
		if(aux.tipo == 'G') aux.qnt = aux.qnt*10;
		else if(aux.tipo == 'D') aux.qnt = aux.qnt*50;
		else if(aux.tipo == 'R') aux.qnt = aux.qnt*100;

		inimigos_aux.push(aux);
	}
//DO JEITO QUE ESTÁ, IRIA VERIFICAR AO CONTRÁRIO, ASSIM INVERTE A PILHA
//COLOCANDO NA ORDEM CERTA
	while(!inimigos_aux.empty()){
		ini aux = inimigos_aux.top();
		inimigos_aux.pop();
		inimigos.push(aux);
	}

	string hero;
	bool flag = true;
	while(flag == true){
		hero = nomes.front();
		nomes.pop();

		for(int i = 0; i < 10 && !inimigos.empty(); i++){
			ini aux = inimigos.top();
			inimigos.pop();
			aux.qnt--;

			if(aux.tipo == 'R' && aux.qnt == 0){
				flag = false;
				break;
			}

			if(aux.qnt > 0) inimigos.push(aux);
		}
		if(flag == false) break;
		nomes.push(hero);
	}

	cout << hero << endl;

	return 0;
}