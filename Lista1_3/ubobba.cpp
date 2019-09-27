#include <iostream>
#include <set>
#include <utility>
#include <string>
#include <vector>
using namespace std;

// typedef pair<int, string> par;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //Declaração
    int n, m, cont = 0, aux, cens = 0;
    string pa;
    set<string> dic;
    set<string> palavrasNaoRepetidas;
    set<string> palavrasCensuradas;
    vector<string> frase;

    //Entrada
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> pa;
        dic.insert(pa);
    }
    for (int i = 0; i < m; i++) {
        cin >> aux;
        for (int j = 0; j < aux; j++) {
            cin >> pa;
            palavrasNaoRepetidas.insert(pa);
            if (dic.count(pa)) {
                pa = "bobba";
            }
            frase.push_back(pa);
        }
        vector<string>::iterator it;
	    for (it = frase.begin(); it != frase.end(); it++) cout << *it << " ";
        cout << endl;
        frase.erase(frase.begin(), frase.end());
    }
    cout << palavrasNaoRepetidas.size() << " " << cens << endl;
return 0;
}