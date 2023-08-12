// ferris-wheel.cpp

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
	int n;
	ll x;
	cin >> n >> x;

	vector<ll> p(n);
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	sort(p.begin(), p.end());

	int res = 0;
	int i = 0;
	int j = n - 1;
	while (i < j) {
		res++;
		if (!(p[i] + p[j] > x)) {
			i++;
			j--;
		}
		else {
			j--;
		}
	}
	if (i == j) res++;

	cout << res << '\n';
	return 0;
}
