// chat-ban.cpp

#include <iostream>

using namespace std;
using ll = long long;

ll get(ll k, ll cur)
{
	if (cur <= k) {
		return ((1 + cur) * cur) >> 1;
	}
	else {
		return (((k + 1) * k) >> 1) + (((k + 2 * k - 1 - cur) * (cur - k)) >> 1);
	}
}

void solve()
{
	ll k, x;
	cin >> k >> x;

	if (get(k, 2 * k - 1) <= x) {
		cout << 2 * k - 1 << '\n';
		return;
	}

	ll loc = 0;
	for (ll b = k; b >= 1; b >>= 1) {
		ll temp = loc + b;
		if (get(k, temp) < x) {
			loc += b;
		}
	}
	
	cout << loc + 1 << '\n';
}

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		solve();
	}

	return 0;
}
