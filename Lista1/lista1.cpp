#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
	int n, acu = 0;
	int wrong, notacu = 0;
	cin >> n;
	vector<int> esta(n);
	for (int i = 0; i < n; i++) cin >> esta[i];
	sort(esta.begin(), esta.end());
	for (int i = 0; i < n-1; i++) {
		if (esta[i+1] == (esta[i] + 1)) acu++;
		else if (esta[i+1] != (esta[i]+1])) {
			wrong = (esta[i+1] - esta[i])-1;
            notacu = wrong+notacu;
		}
    }

	if (acu == n) cout << 0 << endl;
	else cout << notacu << endl;
return 0;
}