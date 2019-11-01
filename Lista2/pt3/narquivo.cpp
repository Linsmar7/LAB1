#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp (pair<int, char> a, pair<int, char> b) {
    return (a.first < b.first);
}

int main() {
    //Declaração e entrada
    int n, pedidos, aux;
    bool e;
    vector<pair<int, char> > l;
    vector<pair<int, char> >::iterator it;
    pair<int, char> p;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p.first >> p.second;
        l.push_back(p);
    }
    cin >> pedidos;
    for (int i = 0; i < pedidos; i++) {
        cin >> aux;
        p.first = aux;
        it = lower_bound(l.begin(), l.end(), p, cmp);
        if (it->first == aux) {
            cout << it->second << endl;
        }
        else cout << "Ausente" << endl;
    }
return 0;
}