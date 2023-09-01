// range-count-query.cpp

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
	int n, q, l, r, x;
	vector<pair<int, int>>::iterator itl, itr;

	cin >> n;
	vector<pair<int, int>> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i].first;
		a[i].second = i + 1;
	}

	sort(a.begin(), a.end());

	cin >> q;
	while (q--) {
		cin >> l >> r >> x;

		itl = lower_bound(a.begin(), a.end(), pair<int, int>(x, l));
		itr = upper_bound(itl, a.end(), pair<int, int>(x, r));

		if (itl == a.end()) {
			cout << 0 << '\n';
		}
		else {
			cout << itr - itl << '\n';
		}
	}

	return 0;
}
