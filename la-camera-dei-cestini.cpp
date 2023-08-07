// La camera dei cestini

#include <iostream>
#include <vector>
#include <string>

using namespace std;
using ll = long long;

int main()
{
 ll n, m, q;
 cin >> n >> m >> q;

 vector<vector<int>> stacks(m);
 for (ll i = 0; i < n; i++) {
  stacks[0].push_back(i);
 }
 
 for (; q > 0; q--) {
  string c;
  cin >> c;
  
  if (c == "s") {
   ll a, b;
   cin >> a >> b;
   ll obj = stacks[a][stacks[a].size() - 1];
   stacks[a].pop_back();
   stacks[b].push_back(obj);
  }
  else if (c == "c") {
   ll a, i;
   cin >> a >> i;
   cout << (i < 0 || i >= stacks[a].size() ? 1 : stacks[a][i]) << '\n';
  }
 }

 return 0;
}