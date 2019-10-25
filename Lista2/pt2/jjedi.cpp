#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <utility>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b) {
    return (a.second > b.second || (a.second == b.second && a.first > b.first));
}

typedef priority_queue<pair<string, int>, vector<pair<string, int> >, bool(*)(pair<string, int>, pair<string, int>) > pq_t;

int main() {
    //Declaração e entrada
    int n, m, xp;
    string nome;
    pair<string, int> p;
    vector<int> v;
    pq_t pq (cmp);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p.first >> p.second;
        pq.push(p);
    }
    cin >> m;
    for (int i = 0 ; i < m; i++) {
        cin >> xp;
        v.push_back(xp);
    }
    //Programa
    for (int i = 0 ; i < m; i++) {
        if (!pq.empty()) {
            p.first = pq.top().first;
            p.second = pq.top().second + v[i];
            pq.pop();
            pq.push(p);
        }
    }
    while(!pq.empty()){
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }
return 0;
}