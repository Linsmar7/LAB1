#include <iostream>
#include <set>
#include <utility>
#include <string>
#include <vector>
using namespace std;

int main () {
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //Declaração
    int n, cont = 0;;
    pair<int, int> p;
    set<pair<int, int> > s;
    set<pair<int, int> >::iterator it;
    char op;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> op;
        if (op == 'E') {
            cin >> p.first >> p.second;
            s.insert(p);
            cont++;
            for (it = s.begin(); it != s.end(); it++) {
                if (p.first - 1 == it->second) {
                    cont--;
                }
                if (p.second + 1 == it->first) {
                    cont--;
                }
            }
            cout << cont << endl;
        }
        else {
            cin >> p.first >> p.second;
            s.erase(p);
            cont--;
            for (it = s.begin(); it != s.end(); it++) {
                if (p.first - 1 == it->second) {
                    cont++;
                }
                if (p.second +1 == it->first) {
                    cont++;
                }
            }
            cout << cont << endl;
        }
    }
return 0;
}