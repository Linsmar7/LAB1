#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main (){
    int n, i, num;
    priority_queue<int, vector<int>, greater<int>> pq; //greater or less, greater = os maiores ficarão encima, less = menores
    cin >> n;
    for (i = 0; i < n; i++){
        cin >> num;
        pq.push(num);
    }
    while(!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }
}