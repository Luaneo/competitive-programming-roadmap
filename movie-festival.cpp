// movie-festival.cpp

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
using ll = long long;

bool compare_by_second(pair<ll, ll> p1, pair<ll, ll> p2)
{
	return p1.second < p2.second;
}

int main()
{
	int n;
	cin >> n;

	vector<pair<ll, ll>> movies(n);
	for (int i = 0; i < n; i++) {
		ll a, b;
		cin >> a >> b;
		movies[i] = pair<ll, ll>(a, b);
	}

	sort(movies.begin(), movies.end(), compare_by_second);

	int res = 0;
	ll last_end = 0;
	for (auto e : movies) {
		if (last_end <= e.first) {
			res++;
			last_end = e.second;
		}
	}

	cout << res;
	return 0;
}
