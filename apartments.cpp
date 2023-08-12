// apartments.cpp

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
	int n, m;
	ll k;
	cin >> n >> m >> k;

	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	multiset<ll> b;
	for (int i = 0; i < m; i++) {
		ll bi;
		cin >> bi;
		b.insert(bi);
	}

	sort(a.begin(), a.end());

	int res = 0;
	for (ll desired : a) {
		auto it = b.lower_bound(desired - k);
		if (*it < desired - k || *it > desired + k) continue;
		else {
			res++;
			b.erase(it);
		}
	}

	cout << res << '\n';
	return 0;
}
