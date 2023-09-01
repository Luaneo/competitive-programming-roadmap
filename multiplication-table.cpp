#include <iostream>
#include <cstdlib>

using namespace std;
using ll = long long;

template<class T, class U>
decltype(T{} + U{}) min(T a, U b) {
	return a < b ? a : b;
}

ll f(ll n, ll x)
{
	ll res = 0;
	for (ll i = 1; i <= n; i++) {
		res += min(n, x / i);
	}
	return res;
}

int main()
{
	ll n;
	cin >> n;
	
	ll left = 1;
	ll right = n * n;

	ll mid;
	while (left < right) {
		mid = (left + right) / 2;
		if (f(n, mid) >= (ll(n) * n + 1) / 2) {
			right = mid;
		}
		else {
			left = mid + 1;
		}
	}

	cout << right << '\n';
	return 0;
}
