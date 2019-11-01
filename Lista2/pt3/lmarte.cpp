#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp (int a, int b) {
    return (a > b);
}

int main() {
    //Declaração e entrada
    int n, q, aux, c;
    bool e;
    vector<int> v;
    vector<int> se;
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        v.push_back(aux);
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < q; i++) {
        se.push_back(v[i]);
    }
    cin >> c;
    for (int i = 0; i < c; i++) {
        cin >> aux;
        e = binary_search(se.begin(), se.end(), aux, cmp);
        if (e) cout << "Sim" << endl;
        else cout << "Nao" << endl;
    }
return 0;
}