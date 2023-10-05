#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

const ll MAX_SUM = 2e5 * 1e9;

bool is_possible(const vector<ll>& v, int k, ll max_sum) {
    int subarr_count = 0;
    ll cur_sum = 0;
    for (auto item : v) {
        if (item > max_sum) {
            return false;
        } else if (cur_sum + item > max_sum) {
            subarr_count++;
            cur_sum = item;
        } else {
            cur_sum += item;
        }
    }
    if (cur_sum > 0) subarr_count++;
    return subarr_count <= k;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for (auto& item : v) {
        cin >> item;
    }

    ll cur = 0;
    for (ll step = MAX_SUM / 2; step >= 1; step /= 2) {
        while (!is_possible(v, k, cur + step)) {
            cur += step;
        }
    }
    cout << cur + 1 << '\n';

    return 0;
}