// mad-sctientist.cpp

#include <iostream>
#include <string>

using namespace std;
using st = size_t;

int main()
{
	st n;
	string a, b;
	cin >> n >> a >> b;

	bool flipped = false;
	st res = 0;
	for (st i = 0; i < n; i++) {
		if (a[i] != b[i] && !flipped) {
			flipped = true;
			res++;
		}
		else if (flipped) {
			flipped = false;
		}
	}
	
	cout << res << endl;
	return 0;
}
