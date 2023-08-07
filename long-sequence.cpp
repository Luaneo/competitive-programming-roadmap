#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin >> a[i];

	int x;
	cin >> x;

	int k = 0, sum = 0;
	while (sum < x)
		sum += a[k++ % n];

	cout << k;
	return 0;
}
