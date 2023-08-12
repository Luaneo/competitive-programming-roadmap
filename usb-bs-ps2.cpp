// usb-bs-ps2.cpp

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
using ll = long long;

int main()
{
	int a, b, c, m;
	cin >> a >> b >> c >> m;

	vector<int> usb, ps2;
	for (int i = 0; i < m; i++) {
		int cost;
		string port;
		cin >> cost >> port;
		if (port == "USB") usb.push_back(cost);
		else ps2.push_back(cost);
	}

	sort(usb.begin(), usb.end());
	sort(ps2.begin(), ps2.end());

	int count = 0;
	ll cost = 0;

	auto it_usb = usb.begin();
	while (a > 0 && it_usb != usb.end()) {
		cost += *it_usb;
		count++;
		it_usb++;
		a--;
	}

	auto it_ps2 = ps2.begin();
	while (b > 0 && it_ps2 != ps2.end()) {
		cost += *it_ps2;
		count++;
		it_ps2++;
		b--;
	}

	while (c > 0 && (it_usb != usb.end() || it_ps2 != ps2.end())) {
		if (it_ps2 == ps2.end() || it_usb != usb.end() && *it_usb < *it_ps2) {
			cost += *it_usb;
			count++;
			it_usb++;
		}
		else {
			cost += *it_ps2;
			count++;
			it_ps2++;
		}
		c--;
	}

	cout << count << ' ' << cost << '\n';
	return 0;
}
