#include <iostream>
#include <map>
#include <string>
using namespace std;

typedef map <string, int> map_t;

int main() {
string item;
int poder, n;
map_t m;
map_t::iterator it;
    //Entrada
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cin >> poder;
        cin.ignore();
        getline (cin, item);
        if (m[item] < poder) m[item] = poder;
    }
    //Saida
    for (it = m.begin(); it != m.end(); it++) cout << it->first << " " << it->second << endl;

return 0;
}