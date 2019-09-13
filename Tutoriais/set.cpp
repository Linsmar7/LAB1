#include <iostream>
#include <set>
using namespace std;

bool operator<(pair<int,int>a, pair<int,int> b) {
    return a.first < b.first || a.first == b.first && a.second < b.second;
}

int main () {
    int i, n;
    set<int> s;
    for (i = 0; i < 10; i++) {
        cin >> n;
        s.insert(n);
    }
    set<int>::iterator it;
    for(it = s.begin(); it != s.end(); it++) cout << *it;
    it = s.find(3); //função pra search
    if (it != s.end()) s.erase(it); //apagar um por um
    if (s.count(3)) s.erase(3); //apagar especifico
    s.clear(); //apagar tudo


return 0;
}


/* 
    Entrada: 2 3 1 5 2 3 9 8 2 3
    Saida: 1 2 3 5 8 9
*/