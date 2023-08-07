// Tieni aggiornato il catalogo

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;
using ll = long long;

int main()
{
 ll q;
 cin >> q;

 unordered_map<ll, ll> library;
 for (; q > 0; q--) {
  string c;
  cin >> c;
  
  if (c == "a") {
   ll x;
   cin >> x;
   library[x]++;
  }
  else if (c == "t") {
   ll x;
   cin >> x;
   library[x]--;
  }
  else if (c == "c") {
   ll x;
   cin >> x;
   cout << library[x] << '\n';
  }
 }
}