#include <iostream>
#include <set>
using namespace std;

int main () {
    //Declaração
    int n, m, aux;
    set<int> filhos;
    pair<int, int> p;

    //Entrada
    cin >> n >> m;
    for (int i = 0; i < n; i ++) {
        cin >> aux;
        filhos.insert(aux);
    }
    for (int i = 0; i < m; i++) {
        cin >> p.first >> p.second;
        if (filhos.count(p.first)) filhos.insert(p.second);
    }

    //Saida
    cout << filhos.size() << endl;
return 0;
}