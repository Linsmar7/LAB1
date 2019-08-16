#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
	int vetor[50], n, num;
	vector<int> vet;
	while (cin >> num) {
		if (num == 0) break;
		vet.push_back(num);
	}
	sort(vet.begin(), vet.end());
	for (int i = 0; i < vet.size(); i++) cout << vet[i] << endl;
return 0;
}



/* 
	 sort(nomedovetor.begin(), nomedovetor.end()) = Sort no vetor, da 1° posição até a última.
	 reverse(nomedovetor.begin(), nomedovetor.end()) = Reverter.
*/
