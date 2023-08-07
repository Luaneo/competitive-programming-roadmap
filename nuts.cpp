#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (;n>0;n--)
        cin >> a[n];
    int res = 0;
    for (int t : a)
        res += t>10 ? t-10 : 0;
    cout << res;
}