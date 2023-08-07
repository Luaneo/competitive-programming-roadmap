// cheese.cpp

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
 long long n, w;
 cin >> n >> w;

 vector<pair<long long, long long>> ab(n);
 for (size_t i = 0; i < n; i++) {
  pair<long long, long long> p;
  cin >> p.first >> p.second;
  ab[i] = p;
 }

 sort(ab.rbegin(), ab.rend());

 long long res = 0;
 for (auto& p : ab) {
  if (p.second < w) {
   res += p.first * p.second;
   w -= p.second;
  }
  else {
   res += p.first * w;
   break;
  }
 }

 cout << res;
 return 0;
}