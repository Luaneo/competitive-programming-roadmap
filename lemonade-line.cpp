// lemonade-line.cpp

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> w(n);
	for (int i = 0; i < n; i++) {
		cin >> w[i];
	}

	sort(w.rbegin(), w.rend());

	int i = 0;
	for (; i < n; i++) {
		if (w[i] < i) break;
	}

	cout << i << '\n';
	return 0;
}
