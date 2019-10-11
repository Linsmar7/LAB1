#include <iostream>
#include <map>
#include <string>
using namespace std;

typedef map <string, int> map_t;

int main() {
string gem;
int qnt, n;
map_t m;
map_t::iterator it;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> gem >> qnt;
        m[gem] += qnt;
    }
    for (it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
return 0;
}