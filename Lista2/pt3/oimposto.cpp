#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp (pair<string, int> a, pair<string, int> b) {
    return (a.first < b.first);
}

int main() {
    //Declaração e entrada
    int n, hv, cont = 0;
    vector<pair<string, int> > v;
    vector<pair<string, int> >::iterator it;
    pair<string, int> p;
    string aux;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p.first >> p.second;
        v.push_back(p);
    }
    cin >> hv;
    for (int i = 0; i < hv; i++) {
        cin >> aux;
        p.first = aux;
        it = lower_bound(v.begin(), v.end(), p, cmp);
        cont += it->second;
    }
    cout << cont << endl;
return 0;
}