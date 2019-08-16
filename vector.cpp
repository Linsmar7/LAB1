#include <iostream>
#include <vector>
using namespace std;
int main () {
	int vetor[50], n, num;
	vector<int> vet;
	while (cin >> num) {
		if (num == 0) break;
		vet.push_back(num);
	}
	for (int i = 0; i < vet.size(); i++) {
		cout << vet[i] << endl;
	}

	vector<int>::iterator it;
	for (it = vet.begin(); it != vet.end(); it++) {
		cout << *it << endl;
	}
return 0;
}



/* 
	 nomedovetor.push_back(nomedavariavel) = Coloca a variavel na última posição do vetor, se já existir algo lá, é criado +1 espaço e assim vai...
	 nomedovetor.size() = Tamanho do vetor
	 nomedovetor.begin() = Valor da 1° posição
	 nomedovetor.end() = Valor da última posição
	 vector<int>::iterator nomequevcquiser = Criação de um vetor de ponteiro de inteiro
	 nomedovetor.erase(primeira posição, última posiçã) = Vai apagar dessa primeira posição até a última, exemplo:
			vet.erase(vet.begin()+2, vet.end()); = Vai apagar da 3° posição até a última.
*/
