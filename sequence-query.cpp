// sequence-query.cpp

#include <iostream>
#include <set>

using namespace std;
using ull = unsigned long long;

int main()
{
	cin.tie(nullptr);

	int q;
	cin >> q;

	multiset<ull> a;

	for (; q > 0; q--) {
		mark:
		int n;
		ull x;
		cin >> n >> x;
		if (n == 1) {
			a.insert(x);
		}
		else if (n == 2) {
			ull k;
			cin >> k;
			auto it = a.upper_bound(x);
			for (int i = 0; i < k; i++) {
				if (it == a.begin()) {
					cout << -1 << '\n';
					goto mark;
				}
				it--;
			}
			cout << *it << '\n';
		}
		else {
			ull k;
			cin >> k;
			auto it = a.lower_bound(x);
			if (it == a.end()) {
				cout << -1 << '\n';
				goto mark;
			}
			for (int i = 1; i < k; i++) {
				if (++it == a.end()) {
					cout << -1 << '\n';
					goto mark;
				}
			}
			cout << *it << '\n';
		}
	}

	return 0;
}
