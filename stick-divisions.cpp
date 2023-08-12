// stick-divisions.cpp

#include <iostream>
#include <set>

using namespace std;
using ll = long long;

int main()
{
	int x, n;
	cin >> x >> n;

	multiset<int> d;
	int di;
	for (int i = 0; i < n; i++) {
		cin >> di;
		d.insert(di);
	}

	ll res = 0;
	for (int i = 1; i < n; i++) {
		auto low1 = d.begin();
		d.erase(low1);
		auto low2 = d.begin();
		d.erase(low2);
		int combined = *low1 + *low2;
		res += combined;
		d.insert(combined);
	}

	cout << res << '\n';
	return 0;
}
