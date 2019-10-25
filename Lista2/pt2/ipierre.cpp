#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <utility>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b) {
    return (a.second < b.second || (a.second == b.second && a.first < b.first));
}

typedef priority_queue<pair<string, int>, vector<pair<string, int> >, bool(*)(pair<string, int>, pair<string, int>) > pq_t;

int main() {
    //Declaração e entrada
    int d, a, n;
    pair<string, int> p;
    pq_t pq (cmp);
    cin >> d >> a;
    for (int j = 0; j < d; j++) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> p.first >> p.second;
            pq.push(p);
        }
        //Saida
        for (int i = 0; i < a; i++) {
            if (!pq.empty()) {
                cout << pq.top().first << endl;
                pq.pop();
            }
        }
    }
return 0;
}