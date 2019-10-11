#include <iostream>
#include <map>
#include <string>
using namespace std;

typedef string chave;

int main() {
string nome;
int v;
map <chave, int> M;
for (int i = 0; i < 10; i++) {
    cin >> nome >> v;
    M[nome] = v;
}
map<chave, int>::iterator it = M.begin();
for (it = M.begin(); it != M.end(); it++) {
    cout << it->first << endl;
    cout << it->second << endl;
}
it = M.find(nome);
if (it != M.end()) M.erase(it);
M.clear();


return 0;
}