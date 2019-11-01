#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    //Declaração e entrada
    int n, m, aux, dist = 0;
    vector<int> v;
    vector<int>::iterator it;
    vector<int>::iterator itaux;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        v.push_back(aux);
    }
    it = v.begin();
    for (int i = 0; i < m; i++) {
        cin >> aux;
        itaux = lower_bound(v.begin(), v.end(), aux);
        dist += abs(it - itaux);
        it = itaux;
    }
    cout << dist << endl;
return 0;
}