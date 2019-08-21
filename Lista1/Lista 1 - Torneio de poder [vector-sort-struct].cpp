#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct personagem {
    string name;
    int power;
};

bool cmp (personagem a, personagem b) {
    return(a.power < b.power);
}

int main() {
    //Declaração variáveis
    int j, k;
    vector <personagem> persos(j);
    personagem aux;
    //Entradas
        cin >> j >> k;
        for (int i = 0; i < j; i++){
            cin >> persos[i].name >> persos[i].power;
        }
    //Sort
        sort(persos.begin(), persos.end(), cmp);
    //Saida
        for (int i = 0; i < k; i++){
            cout << persos[i].name << persos[i].power << endl;
        }

return 0;
}