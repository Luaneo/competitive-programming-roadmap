#include <iostream>
#include <string>

using namespace std;

string decimal(int);

int main()
{
	int n;
	cin >> n;

	int res = 0;
	for (int x = 1; x <= n; x++) {
		string dec = decimal(x);
		int len = dec.length();
		if (len % 2 == 0) {
			if (dec.substr(0, len / 2) == dec.substr(len / 2, len)) {
				res++;
			}
		}
	}

	cout << res;
	return 0;
}

string decimal(int x)
{
	string rev(""), res("");
	while (x) {
		rev.push_back('0' + x % 10);
		x /= 10;
	}
	
	int len = rev.length();
	for (int i = len - 1; i >= 0; i--) {
		res += rev[i];
	}

	return res;
}
