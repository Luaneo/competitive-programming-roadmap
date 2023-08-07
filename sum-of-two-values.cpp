// sum-of-two-values.cpp

#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ll = long long;

int main()
{
 ll n, x;
 cin >> n >> x;

 vector<ll> a(n);
 for (ll i = 0; i < n; i++) {
  cin >> a[i];
 }

 map<ll, ll> exists;
 for (ll i = 0; i < n; i++) {
  if (exists.count(x - a[i])) {
   cout << i+1 << ' ' << exists[x - a[i]]+1 << endl;
   return 0;
  }
  else {
   exists[a[i]] = i;
  }
 }

 cout << "IMPOSSIBLE" << endl;
 return 0;
}