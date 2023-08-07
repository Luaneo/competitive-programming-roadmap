#include <iostream>
#include <vector>

using namespace std;

int square(int n) {
	return n * n;
}

int main()
{
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int res = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			res += square((a[i] - a[j]));
		}
	}

	cout << res;
}
