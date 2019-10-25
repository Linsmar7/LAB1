#include <iostream>
#include <queue>
using namespace std;

typedef priority_queue<int> pq_t;

int main() {
    //Declaração e entrada
    int n, g, e;
    pq_t pq;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> g;
        for (int j = 0; j < g; j++){
            cin >> e;
            pq.push(e);
        }
        if (!pq.empty()) {
            cout << pq.top() << endl;
            pq.pop();
        }
    }
return 0;
}