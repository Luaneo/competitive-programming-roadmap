// room-allocation.cpp

#include <iostream>
#include <set>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;

bool sort_by_third(array<int, 4>& a, array<int, 4>& b)
{
	return a[2] < b[2];
}

int main()
{
	int n;
	cin >> n;

	vector<array<int, 4>> customers(n);
	for (int i = 0; i < n; i++) {
		cin >> customers[i][1] >> customers[i][0];
		customers[i][2] = i;
	}

	sort(customers.begin(), customers.end());

	int k = 0;
	multiset<array<int, 2>, greater<array<int, 2>>> rooms;
	for (auto& customer : customers) {
		auto it = rooms.upper_bound(array<int, 2>{customer[1], 0});
		if (it == rooms.end()) {
			k++;
			rooms.insert(array<int, 2>{customer[0], k});
			customer[3] = k;
		}
		else {
			rooms.insert(array<int, 2>{customer[0], (*it)[1]});
			customer[3] = (*it)[1];
			rooms.erase(it);
		}
	}

	cout << k << '\n';

	sort(customers.begin(), customers.end(), sort_by_third);
	
	for (auto& customer : customers) {
		cout << customer[3] << ' ';
	}

	return 0;
}
