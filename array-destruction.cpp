// array-destruction.cpp

#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <utility>
#include <tuple>

using namespace std;
using ll = long long;

int max(vector<int> v)
{
	int res = INT_MIN;
	for (int e : v) {
		if (res < e) {
			res = e;
		}
	}
	return res;
}

tuple<bool, string> solve(vector<int>& a)
{
	int maxa = max(a);
	string res;
	res << maxa;
}

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;

		vector<int> a(2 * n);
		for (int i = 0; i < 2 * n; i++) {
			cin >> a[i];
		}

		auto solution = solve(a);
		if (get<0>(solution)) {
			cout << "YES" << '\n' << get<1>(solution) << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}

	return 0;
}
