#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    //Declaração e entrada
    int n, m, aux, c, cont = 0;
    cin >> n >> m;
    vector<int> v;
    vector<int>::iterator it;
    for (int i = 0; i < m*n; i++) {
        cin >> aux;
        v.push_back(aux);
    }
    sort(v.begin(), v.end());
    cin >> c;
    for (int i = 0; i < c; i++) {
        cin >> aux;
        it = upper_bound(v.begin(), v.end(), aux);
        cont = it - v.begin();
        cout << cont << endl;
    }
return 0;
}