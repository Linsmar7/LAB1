#include <iostream>
#include <stack>
using namespace std;
int main () {
    //Declaração e entrada
    int n, x, cont = 0, tamanho;
    stack <int> pilha;
    cin >> n;
    //Destruição de elementos enquanto tem a entrada
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (!pilha.empty()) {
            if (x == -1) pilha.pop();
            else pilha.push(x);
        }
        else {
            if (x != -1) pilha.push(x);
            else {
                pilha.push(x);
                pilha.pop();
            }
        }
    }
    tamanho = pilha.size();
    //Contagem
    if (!pilha.empty()) {
        for (int i = 0; i < tamanho; i++) {
            cont += pilha.top();
            pilha.pop();
        }
        cout << cont << endl;
    }
    else cout << 0 << endl;
return 0;
}