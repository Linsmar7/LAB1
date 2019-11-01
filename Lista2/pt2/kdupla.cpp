#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
    //Declaração e entrada
    int n, g, s, m;
    int aux;
    priority_queue<int, vector<int>, less<int> > vg;
    priority_queue<int, vector<int>, greater<int> > vs;
    vector<pair<int, int> > dupla;
    pair<int, int> par;
    cin >> n;
    for (int d = 0; d < n; d++) {
        cin >> g >> s;
        for (int ga = 0; ga < g; ga++) {
            cin >> aux;
            vg.push(aux);
        }
        for (int sa = 0; sa < s; sa++) {
            cin >> aux;
            vs.push(aux);
        }
        cin >> m;
        for (int i = 0; i < m; i++) {
            if (!vg.empty() && !vs.empty()) {
                par.first = vg.top();
                par.second = vs.top();
                dupla.push_back(par);
                vg.pop();
                vs.pop();
            }
        }
    }
    if (!dupla.empty()) {
        for (int i = 0; i < dupla.size(); i++) {
            cout << dupla[i].first << " " << dupla[i].second << endl;
        }
    }
return 0;
}