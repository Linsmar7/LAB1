#include <iostream>
#include <stack>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

typedef pair<int, int> pairt;
bool comparar(pairt x, pairt y) {
	return (x.second > y.second);
}

int main() {
	int f, tamanho, menor;
	pairt feno;
	stack<pairt> s;
	vector<pairt> vetor;
	vector<pairt> vetor2;
	int n, aux, cont;
	char op;
	cin >> f;
	for (int i = 0; i < f; i++) {
		cin >> feno.first >> feno.second;
		vetor.push_back(feno);
	}
	sort(vetor.begin(), vetor.end(), comparar);
	tamanho = vetor.size();
	for (int i = 0; i < tamanho; i++) {
		s.push(vetor[i]);
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> op;
		if (op == 'C') {
			cin >> aux;
			cont = 0;
			while (aux != 0) {
				if (!s.empty()) {
					if (s.top().first < aux) {
						cont += s.top().first;
						aux -= s.top().first;
						s.pop();
					}
					else if (s.top().first > aux) {
						cont += aux;
						s.top().first -= aux;
						aux = 0;
					}
					else {
						cont = aux;
						aux = 0;
						s.pop();
					}
				}
				else break;
			}
		}
		else {
			cin >> feno.first >> feno.second;
			s.push(feno);
			vetor2.clear();
		tamanho = s.size();
		for (int i = 0; i < tamanho; i++) {
			vetor2.push_back(s.top());
			s.pop();
		}
		sort(vetor2.begin(), vetor2.end(), comparar);
		for (int i = 0; i < tamanho; i++) {
			s.push(vetor2[i]);
		}
		}
	}
	//if (!s.empty()) {
		
	//}
	//SAida
	if (!s.empty()){
		tamanho = s.size();
		for (int i = 0; i < tamanho; i++) {
			cout << s.top().first << " " << s.top().second << endl;
			s.pop();
		}
	}
	else cout << "Sem estoque" << endl;


return 0;
}