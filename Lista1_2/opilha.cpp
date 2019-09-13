#include <iostream>
#include <stack>
#include <string>
using namespace std;

//Função pra inverter a string
string inverter (string normal){
    string inver = "000";
    for (int i = 0; i < normal.length(); i++) {
        if (normal[i] == '1') inver[i] = '0';
        else inver[i] = '1';
    }
    return inver;
}

int main () {
    //Declaração e entrada e função tudo junto
    int n, a;
    int cont = 0, go = 0;
    string x;
    stack<string> pilha;

    cin >> n >> a;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (pilha.empty()) pilha.push(x);
        else {
            if (pilha.top() == inverter(x)) { //Verificando com o inverso
                pilha.push(x);
                pilha.pop();
                if (pilha.size() > a) {
                    go = 1;
                    break;
                }
                cont += 10;
            }
            else {
                pilha.push(x);
                if (pilha.size() == a) {
                    go = 1; //Variavel pra saber se da game over
                    break;
                }
            }
        }
    }

    if (go == 1) cout << "game over" << endl;
    else cout << cont << endl;



return 0;
}