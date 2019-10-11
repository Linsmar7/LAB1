#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

typedef map <string, string> map_t;

int main() {
string pala, trad, frase;
int n, q, x = 0;
map_t m;
map_t::iterator it;
    //Entrada
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> pala >> trad;
        m[pala] = trad;
    }
    cin >> q;
    string f[q];
    cin.ignore();
    getline(cin, frase);
    //Transformando a frase em 1 vetor de palavras
    for (int i = 0; i < frase.size(); i++) {
        if (frase[i] != ' ') f[x] += frase[i];
        else x++;
    }
    //Saida
    for (int i = 0; i < q; i++) {
        it = m.find(f[i]);
        if (!(it == m.end())) f[i] = m[f[i]];
        cout << f[i] << " ";
    }
    cout << endl;

return 0;
}