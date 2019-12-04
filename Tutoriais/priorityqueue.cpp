#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main (){
    int n, i, num;
    priority_queue<int, vector<int>, greater<int>> pq; //greater or less, greater = os menores ficarão encima, less = maiores
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