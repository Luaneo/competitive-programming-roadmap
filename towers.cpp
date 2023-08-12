// towers.cpp

#include <iostream>
#include <set>

using namespace std;

int main()
{
	int n;
	cin >> n;

	multiset<int, less_equal<int>> towers;

	int k;
	for (int i = 0; i < n; i++) {
		cin >> k;
		auto it = towers.lower_bound(k);
		if (it == towers.end()) {
			towers.insert(k);
		}
		else {
			towers.erase(it);
			towers.insert(k);
		}
	}

	cout << towers.size() << '\n';
	return 0;
}
