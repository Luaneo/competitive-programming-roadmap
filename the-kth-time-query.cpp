// the-kth-time-query.cpp

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
using ll = long long;

int main()
{
 int n, q;
 cin >> n >> q;
 
 vector<ll> a(n);
 for (int i = 0; i < n; i++) {
  cin >> a[i];
 }

 unordered_map<ll, vector<int>> indices;
 for (int i = 0; i < n; i++) {
  indices[a[i]].push_back(i);
 }

 for (; q > 0; q--) {
  ll x;
  int k;
  cin >> x >> k;
  if (indices[x].size() < k) {
   cout << -1 << '\n';
  }
  else {
   cout << indices[x][k - 1] + 1 << '\n';
  }
 }

 return 0;
}