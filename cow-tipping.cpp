// cow-tipping.cpp

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<vector<bool>> grid(n, vector<bool>(n));
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < n; j++) {
			grid[i][j] = s[j] == '1' ? true : false;
		}
	}

	int res = 0;
	for (int k = 2 * (n - 1); k >= 0; k--) {
		int i0, i, j;
		if (k >= n - 1) {
			i0 = i = n - 1;
			j = k - i;
		}
		else {
			i0 = i = k;
			j = 0;
		}
		while (j <= i0) {
			if (grid[i][j]) {
				for (int row = 0; row <= i; row++) {
					for (int col = 0; col <= j; col++) {
						grid[row][col] = !grid[row][col];
					}
				}
				res++;
			}
			i--;
			j++;
		}
	}

	cout << res << endl;
	return 0;
}
