// out-of-place.cpp

#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

void swap(vector<int>& v, int i, int j)
{
	int temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

int main()
{
	int n;
	cin >> n;

	vector<int> h(n);
	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}

	int prev_swap_left = -1, prev_swap_right = -1;
	int res = 0;
	
	for (int i = 1; i < n; i++) {  // left to right
		if (h[i] < h[i - 1]) {
			if (prev_swap_left != h[i]) res++;
			swap(h, i - 1, i);
			prev_swap_left = h[i - 1];
			prev_swap_right = h[i];
		}
	}
	for (int i = n - 2; i >= 0; i--) {  // right to left
		if (h[i] > h[i + 1]) {
			if (prev_swap_right != h[i]) res++;
			swap(h, i, i + 1);
			prev_swap_left = h[i];
			prev_swap_right = h[i + 1];
		}
	}

	cout << res << endl;
	return 0;
}
