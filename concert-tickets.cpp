// concert-tickets.cpp

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
 ll n, m;
 cin >> n >> m;

 vector<ll> h(n);
 for (ll i = 0; i < n; i++) {
  cin >> h[i];
 }
 vector<pair<ll, ll>> t(m);
 for (ll i = 0; i < m; i++) {
  ll max;
  cin >> max;
  t[i] = pair<ll, ll>(max, i);
 }
 vector<ll> results(m, -1);

 sort(h.begin(), h.end());
 sort(t.rbegin(), t.rend());

 for (auto& p : t) {
  ll max = p.first, index = p.second;
  while (h.size() > 0) {
   if (h[h.size() - 1] > max) {
    h.pop_back();
   }
   else {
    results[index] = h[h.size() - 1];
    h.pop_back();
    break;
   }
  }
 }

 for (ll result : results) {
  cout << result << '\n';
 }

 return 0;
}
