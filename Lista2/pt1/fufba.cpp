#include <iostream>
#include <map>
using namespace std;

typedef map <int, int> map_t;

int main() {
    //Declaração e entrada
    int a, d, nome, presentes;
    cin >> a >> d;
    int falta = (25*d)/100;
    map_t mapa;
    map_t::iterator it;
    for (int i = 0; i < a; i++) {
        cin >> nome;
        mapa[nome] = 0;
    }
    for (int j = 0; j < d; j++) {
        cin >> presentes;
        for (int i = 0; i < presentes; i++){
            cin >> nome;
            mapa[nome]++;
        }
    }
    //Saida
    for (it = mapa.begin(); it != mapa.end(); it++) {
        cout << it->first << ": ";
        if ((d-(it->second)) > falta) cout << "RF" << endl;
        else cout << d-(it->second) << endl;
    }
return 0;
}