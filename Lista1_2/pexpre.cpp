#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main () {
    //Declaração
    string s;
    int qntd, no = 0;
    cin >> s;
    stack <char> abrir;
    stack <char> fechar;
    stack <char> aux;
    qntd = s.size();

    //Se a string tiver uma quantidade impar de caracters, é NAO automaticamente
    if (qntd%2 != 0) no = 1;

    //Entrada
    for (int i = 0; i < qntd/2; i++) {
        abrir.push(s[i]);
    }
    for (int i = qntd/2; i < qntd; i++) {
        fechar.push(s[i]);
    }

    //Passando o fechar pra uma pilha auxiliar
    if (!fechar.empty() && !aux.empty()) {
        for (int i = 0; i < qntd/2; i++) {
            aux.push(fechar.top());
            fechar.pop();
        }
    }
    
    //Verificando o conteudo da pilha
    if (!abrir.empty() && !aux.empty()) {
        for (int i = 0; i < qntd/2; i++) {
            if ((abrir.top() == '{' && aux.top() == '}') || 
                (abrir.top() == '[' && aux.top() == ']') ||
                (abrir.top() == '(' && aux.top() == ')')) {
                    abrir.pop();
                    aux.pop();
                }
            else no = 1;
        }
    }


    //Saida
    if (no == 1) cout << "NAO" << endl;
    else cout << "SIM" << endl;
return 0;
}