#include <iostream>
#include <stack>
using namespace std;
int main () {
    //Declaração e entrada
    int n, x, y;
    int as, ga, res, tamanho;
    stack<int> ash;
    stack<int> gary;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        ash.push(x);
        gary.push(y);
    }

    //Batalha
    while (!ash.empty() && !gary.empty()){
        as = ash.top();
        ga = gary.top();
        if (as == ga) {
            ash.pop();
            gary.pop();
        }
        else if(as < ga) {
            res = ga - as;
            ash.pop();
            gary.pop();
            gary.push(res);
        }
        else {
            res = as - ga;
            ash.pop();
            gary.pop();
            ash.push(res);
        }
    }

    //Resultado
    if (!ash.empty()) {
        tamanho = ash.size();
        cout << n - tamanho << endl;
    }
    else cout << n << endl;
return 0;
}