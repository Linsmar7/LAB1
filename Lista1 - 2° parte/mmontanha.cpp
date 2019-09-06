#include <iostream>
#include <queue>
#include <string>
using namespace std;

typedef struct pessoa_S {
    int id;
    int money;
}pessoa;

int main () {
    //Declaração
    int n, m, x; // n = pessoas iniciais, m = tempo passado desde a abertura, x = custo do ingresso
    int debug; // vai ser usado pra colocar o tamanho da fila em alguns casos
    queue <pessoa> fila;
    pessoa aux;

    //Entrada
    cin >> n >> m >> x;
    for (int i = 0; i < n; i++) {
        cin >> aux.id >> aux.money;
        fila.push(aux);
    }

   //Retirada dos sem dinheiro
    if (!fila.empty()) {
        debug = fila.size();
        for (int i = 0; i < debug; i++) {
            if (fila.front().money < x) fila.pop();
            else {
                aux = fila.front();
                fila.pop();
                fila.push(aux);
            }
        }
    }

    //
    for (int i = 0; i < m; i++) {
        if (!fila.empty()) {
            if (fila.front().money < x) fila.pop();
            else {
                fila.front().money -= x;
                if (fila.front().money >= x) {
                    aux = fila.front();
                    fila.pop();
                    fila.push(aux);
                }
                else fila.pop();
            }
        }
    }
    
    //Saida
    debug = fila.size();
    if (fila.empty()) cout << "SEM FILA" << endl;
    else {
        for (int i = 0; i < debug; i ++) {
            cout << fila.front().id << " " << fila.front().money << endl;
            fila.pop();
        }
    }
return 0;
}