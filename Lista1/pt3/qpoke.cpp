#include <iostream>
#include <set>
using namespace std;

int main () {
    //Declaração
    int n, m, x;
    set<int> s;

    //Entrada e codigo
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> x;
        if (!s.count(x)) {
            s.insert(x);
            cout << "Temos que pegar!" << endl;
        }
        else {
            cout << "Repetido" << endl;
        }
    }
return 0;
}