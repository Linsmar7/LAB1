#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef priority_queue<int, vector<int>, greater<int> > pq_t;

int main() {
    //Declaração e entrada
    int m, p, s, l;
    pq_t pq;
    cin >> m >> p;
    for (int i = 0; i < m; i++) {
        cin >> s;
        for (int i = 0; i < s; i++) {
            cin >> l;
            pq.push(l);
        }
        //Saida
        for (int i = 0; i < p; i++) {
            if (!pq.empty()) {
                cout << pq.top() << " ";
                pq.pop();
            }
        }
    }
    //Quebra de linha
    cout << endl;
return 0;
}