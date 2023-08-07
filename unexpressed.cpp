#include <iostream>
#include <unordered_set>

using namespace std;
using ll = long long;

int main()
{
	ll n;
	cin >> n;
	
	unordered_set<ll> powers;
	for (ll a = 2; a <= n / 2; a++) {
		ll cur = a * a;
		while (cur <= n) {
			powers.insert(cur);
			cur *= a;
		}
	}

	cout << n - powers.size();
	return 0;
}
