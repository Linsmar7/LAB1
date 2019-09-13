#include <iostream>
#include <set>
#include <utility> //Biblioteca do pair
using namespace std;

int main () {
    // pair<int, int> p;
    // p.first = 10;         Declaração de pair
    // p.second = 20;

    /* Pair com set */
    set<pair<int,int>> s;
    pair <int, int> p;
    for (int i = 0; i < 10; i++) {
        cin >> p.first >> p.second;
        s.insert(p);
    }
return 0;
}


/*
    Entrada: 3 10
             5 3
             2 2
             3 9
             3 10
    Saida:   2 2
             3 9
             3 10
             5 3
*/