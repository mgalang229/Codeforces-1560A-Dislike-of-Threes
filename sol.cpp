#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// store the numbers which are not divisible 3 and does not end with 3
	vector<int> v;
	for (int i = 1; i <= 1666; i++) {
		if ((i % 3 != 0) && (i % 10 != 3)) {
			v.emplace_back(i);
		}
	}
	int tt;
	cin >> tt;
	while (tt--) {
		// input
		int k;
		cin >> k;
		// output the number at the k-th position
		cout << v[k - 1] << '\n';
	}
	return 0;
}
