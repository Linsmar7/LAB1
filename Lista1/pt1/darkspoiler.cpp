#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

typedef struct datas {
	int d, m, a;
}data;

bool cmp (datas a, datas b) {
	return (a.a < b.a || (a.a == b.a && a.m < b.m) || (a.a == b.a && a.m == b.m && a.d < b.d));
}

int main () {
//Declaração
vector <data> calendario;
data aux;

//Entrada
while (cin >> aux.d >> aux.m >> aux.a) calendario.push_back(aux);

//Ordenação
sort(calendario.begin(), calendario.end(), cmp);

//Saida
for (int i = 0; i < calendario.size(); i++) cout << calendario[i].d << " " << calendario[i].m << " " << calendario[i].a << endl;


return 0;
}
