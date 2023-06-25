#include <bits/stdc++.h>
using namespace std;

void solve() {
	int x;
	cin >> x;
	int l = x / 10, r = l + 1;
	if (x - 10 * l < 10 * r - x)
		cout << 100 - 10 * l;
	else
		cout << 100 - 10 * r;
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;
	while (T--)
		solve();
}
