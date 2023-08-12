// tasks-and-deadlines.cpp

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
	int n;
	cin >> n;

	vector<pair<int, int>> tasks(n);
	for (int i = 0; i < n; i++) {
		cin >> tasks[i].first >> tasks[i].second;
	}

	sort(tasks.begin(), tasks.end());

	ll time = 0, res = 0;
	for (auto task : tasks) {
		time += task.first;
		res += task.second - time;
	}

	cout << res << '\n';
	return 0;
}
