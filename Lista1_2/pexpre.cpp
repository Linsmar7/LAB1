#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main () {
    //Declaração e entrada
    string s;
    int qntd, no = 0;
    cin >> s;
    stack <char> pilha;
    qntd = s.size();

    for (int i = 0; i < qntd; i++) {
        pilha.push(s[i]);
    }

    //Verificando o conteudo da pilha
    if (qntd%2 != 0) no = 1;
    for (int i = 0; i < qntd/2; i++) {
        if (pilha.top() == '{' || pilha.top() == '(' || pilha.top() == '[') {
            no = 1;
        }
        pilha.pop();
    }
    for (int i = 0; i < qntd/2; i++) {
        if (pilha.top() == '}' || pilha.top() == ')' || pilha.top() == ']') {
            no = 1;
        }
        pilha.pop();
    }

    //Saida
    if (no == 1) cout << "NAO" << endl;
    else cout << "SIM" << endl;
return 0;
}