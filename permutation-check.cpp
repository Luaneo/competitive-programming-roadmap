#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<bool> b(n, false);
    for (int e : a) {
        if (e > n || e < 1) {
            cout << "No";
            return 0;
        }
        b[e - 1] = true;
    }

    for (bool e : b) {
        if (!e) {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
    return 0;
}
