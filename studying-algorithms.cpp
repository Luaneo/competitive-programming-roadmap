// studying-algorithms.cpp

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	int res = 0;
	for (int e : a) {
		if (x >= e) {
			res++;
			x -= e;
		}
	}

	cout << res;
	return 0;
}
