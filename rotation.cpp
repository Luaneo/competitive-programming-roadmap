// rotation.cpp

#include <iostream>
#include <string>

using namespace std;

int main()
{
 int n, q;
 string s;
 cin >> n >> q >> s;
 for (; q > 0; q--) {
  int t;
  cin >> t;
  if (t == 1) {
   int x;
   cin >> x;
   for (; x > 0; x--) {
    s = s[s.size() - 1] + s.substr(0, s.size() - 1);
   }
  }
  else {
   int x;
   cin >> x;
   cout << s[x-1] << '\n';
  }
 }
 return 0;
}