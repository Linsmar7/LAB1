#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    //Declaração e entrada
    int n;
    cin >> n;
    vector<int> num(n);
        for (int i = 0; i < n; i++) cin >> num[i];
    //Sort
        sort(num.begin(), num.end());
    //Saida
    cout << num[(n/2)] << endl;

return 0;
}