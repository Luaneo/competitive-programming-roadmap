// stick-lengths.cpp

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
	int n;
	cin >> n;

	vector<int> p(n);
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	sort(p.begin(), p.end());

	int median;
	if (n % 2 == 0) {
		median = (p[n / 2 - 1] + p[n / 2]) / 2;
	}
	else {
		median = p[n / 2];
	}

	ll res = 0;
	for (auto e : p) {
		res += abs(e - median);
	}

	cout << res << endl;
	return 0;
}
