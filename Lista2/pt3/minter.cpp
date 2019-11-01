#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp (int a, int b) {
    return (a > b);
}

int main() {
    //Declaração e entrada
    int n, m, aux, cont = 0;
    bool e;
    vector<int> dd;
    vector<int> dm;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        dd.push_back(aux);
    }
    for (int i = 0; i < m; i++) {
        cin >> aux;
        dm.push_back(aux);
    }
    for (int i = 0; i < m; i++) {
        e = binary_search(dd.begin(), dd.end(), dm[i]);
        if (e) cont++;
    }
    cout << cont << endl;
return 0;
}