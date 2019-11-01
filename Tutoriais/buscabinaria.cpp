#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp (pair<int, int> a, pair<int, int> b) {
    return (a.first < b.first || (a.first == b.first && a.second < b.second));
}

int main () {
    vector <pair<int, int>> vet;
    pair <int, int> aux;
    for (int i = 0; i < 10; i++) {
        cin >> aux.first >> aux.second;
        vet.push_back(aux);
    }
    stable_sort(vet.begin(), vet.end(), cmp);
    cin >> aux.first >> aux.second;
    bool r = binary_search(vet.begin(), vet.end(), aux, cmp);
    if (r) cout << "Achei" << endl;
    vector <pair<int, int>>::iterator it;
    it = lower_bound(vet.begin(), vet.end(), aux, cmp);  //lower = entre os maiores e os iguais, retorna o 1°, upper = entre os maiores
    int dist = it - vet.begin();
}