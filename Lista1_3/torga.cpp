#include <iostream>
#include <set>
#include <utility>
#include <string>
using namespace std;

typedef pair<string, int> par;

int main () {
    //Declaração
    int n;
    set<par> s;
    par p;

    //Entrada
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p.first >> p.second;
        s.insert(p);
    }

    //Saida
    set<par>::iterator it;
    for (it = s.begin(); it != s.end(); it++) cout << it->first << " " << it->second << endl;
return 0;
}