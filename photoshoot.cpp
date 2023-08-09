// photoshoot.cpp

#include <iostream>
#include <string>

using namespace std;
using st = size_t;

void flip(string& s, st i)
{
	for (; i >= 0 && i < s.size(); i--) {
		if (s[i] == 'A') {
			s[i] = 'B';
		}
		else if (s[i] == 'B') {
			s[i] = 'A';
		}
	}
}

int main()
{
	st n;
	cin >> n;
	if (n < 2) throw;

	string s;
	cin >> s;
	if (s.size() != n) throw;

	string ps;
	for (st i = 0; i < s.size() - 1; i += 2) {
		if (s[i] == s[i + 1]) {
			ps += '.';
		}
		else if (s[i] == 'H') {
			ps += 'A';
		}
		else if (s[i] == 'G') {
			ps += 'B';
		}
	}

	st res = 0;
	for (st i = ps.size() - 1; i >= 0 && i < ps.size(); i--) {
		if (ps[i] == 'B') {
			flip(ps, i);
			res++;
		}
	}

	cout << res << endl;
	return 0;
}
