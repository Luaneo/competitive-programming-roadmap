// even-more-odd-photos.cpp

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int even = 0, odd = 0;
	for (int i = 0; i < n; i++) {
		int id;
		cin >> id;
		if (id % 2 == 0) even++;
		else odd++;
	}

	if (even == 0) {
		odd -= 2;
		even++;
	}

	int res = 1;
	bool state = true;
	while (odd) {
		if (state) {
			odd--;
			res++;
			state = false;
		}
		else if (odd > 1) {
			odd -= 2;
			res++;
			state = true;
		}
		else {
			odd--;
			res--;
		}
	}

	cout << res << endl;
	return 0;
}