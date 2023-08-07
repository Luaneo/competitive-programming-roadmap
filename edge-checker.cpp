#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a-b == 1 || a-b == -1)
        cout << "Yes";
    else
        cout << "No";
}
