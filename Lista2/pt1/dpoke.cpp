#include <iostream>
#include <map>
#include <string>
#include <iomanip>
using namespace std;

typedef map <string, double> map_t;

int main() {
string poke;
double aux, ttl = 0;
map_t m;
map_t::iterator it;
//debug
cout << fixed << setprecision(2);
//
    //Entrada
    for (;;) {
        cin >> poke;
        if (poke == "FIM") break;
        else m[poke] += 1;
        ttl++;
    }
    //
    for (it = m.begin(); it != m.end(); it++) {
        it->second = (it->second*100)/ttl;
    }
    for (it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

return 0;
}