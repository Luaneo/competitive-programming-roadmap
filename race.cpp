// race.cpp

#include <iostream>

using namespace std;

int fastest_speed(int length, int max_speed)
{
	int dist_speeding = 0, dist_slowing = 0, time = 0, cur_speed = 0;
	while (dist_speeding + dist_slowing < length) {
		cur_speed++;
		dist_speeding += cur_speed;
		time++;
		if (dist_speeding + dist_slowing >= length) break;
		if (cur_speed >= max_speed) {
			dist_slowing += cur_speed;
			time++;
		}
	}
	return time;
}

int main()
{
	int length, n;
	cin >> length >> n;
	for (int i = 0; i < n; i++) {
		int max_speed;
		cin >> max_speed;
		cout << fastest_speed(length, max_speed) << '\n';
	}
	return 0;
}
