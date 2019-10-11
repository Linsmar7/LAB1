#include <iostream>
#include <set>
using namespace std;

int main () {
    //Declaração
    int n, m, x;
    set<int> s;
    set<int> sobra;
    set<int>::iterator it;

    //Entrada
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> x;
        if (!s.count(x)) {
            sobra.insert(x);
        }
        else {
            s.erase(x);
        }
    }

    //Saida
    if (!s.empty() && !sobra.empty()) {
        cout << "Sobrou:" << endl;
        for(it = sobra.begin(); it != sobra.end(); it++) cout << *it << " ";
        cout << endl;
        cout << "Faltou:" << endl;
        for(it = s.begin(); it != s.end(); it++) cout << *it << " ";
        cout << endl;
    }
    else cout << "Acertou tudo" << endl;
return 0;
}