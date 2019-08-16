#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
	int n, acu = 0;
	int wrong;
	cin >> n;
	vector<int> esta(n);
	for (int i = 0; i < n; i++) cin >> esta[i];
	sort(esta.begin(), esta.end());
	for (int i = 0; i < n-1; i++) {
		if (esta[i+1] == (esta[i] + 1)) acu++;
		else {
			wrong = (esta[i+1] - esta[i])-1;
		//
		}

	if (acu == n) cout << 0 << endl;
	else cout << wrong << endl;
return 0;
}
}
