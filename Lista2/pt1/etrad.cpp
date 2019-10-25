#include <iostream>
#include <map>
#include <string>
using namespace std;

typedef map <string, string> map_t;

int main() {
//Declaração
    int n, m, l, x = 0;
    string a, b, frase;
    char o, d;
    map_t map;
    map_t mapd;
    map_t::iterator it;
//Entrada com saida
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        map[a] = b;
        mapd[b] = a;
    }
    for (int i = 0; i < m; i++) {
        cin >> o >> d >> l;
        cin.ignore();
        getline (cin, frase);
        string f[l];
        //Transformando a frase em 1 vetor de palavras
        for (int i = 0; i < frase.size(); i++) {
            if (frase[i] != ' ') f[x] += frase[i];
            else x++;
        }
        x = 0;
        if (o == 'A' && d == 'B') {
            for (int i = 0; i < l; i++) {
                it = map.find(f[i]);
                if (!(it == map.end())) f[i] = it->second;
                cout << f[i] << " ";
            }
            cout << endl;
        }
        else if (o == 'B' && d == 'A') {
            for (int i = 0; i < l; i++) {
                it = mapd.find(f[i]);
                if (!(it == mapd.end())) f[i] = it->second;
                cout << f[i] << " ";
            }
            cout << endl;
        }
        else {
            for (int i = 0; i < l; i++) {
                cout << f[i] << " ";
            }
            cout << endl;
        }
    }

return 0;
}