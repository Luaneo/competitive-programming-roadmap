// high-card-low-card.cpp

#include <iostream>
#include <set>
#include <map>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
	int n;
	cin >> n;

	map<int, bool> elsie_has;
	pair<set<int>, set<int, greater<int>>> elsie, bessie;

	for (int i = 0; i < n; i++) {
		int card;
		cin >> card;

		if (i < n / 2) {
			elsie.first.insert(card);
		}
		else {
			elsie.second.insert(card);
		}

		elsie_has[card] = true;
	}

	for (int i = 1, cnt = 0; i <= 2 * n; i++) {
		if (elsie_has.find(i) == elsie_has.end()) {
			if (cnt >= n / 2) {
				bessie.first.insert(i);
			}
			else {
				bessie.second.insert(i);
			}
			cnt++;
		}
	}

	int res = 0;

	for (int i = 0; i < n / 2; i++) {
		auto it_elsie = elsie.first.begin();
		int card = *it_elsie;
		elsie.first.erase(it_elsie);

		auto it_bessie = bessie.first.upper_bound(card);
		if (it_bessie == bessie.first.end()) {
			bessie.first.erase(bessie.first.begin());
		}
		else {
			res++;
			bessie.first.erase(it_bessie);
		}
	}

	for (int i = 0; i < n / 2; i++) {
		auto it_elsie = elsie.second.begin();
		int card = *it_elsie;
		elsie.second.erase(it_elsie);

		auto it_bessie = bessie.second.upper_bound(card);
		if (it_bessie == bessie.second.end()) {
			bessie.second.erase(bessie.second.begin());
		}
		else {
			res++;
			bessie.second.erase(it_bessie);
		}
	}

	cout << res << '\n';
	return 0;
}
