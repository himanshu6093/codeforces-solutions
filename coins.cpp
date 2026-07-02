#include <iostream>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else if ((n - k) >= 0 && k % 2 != 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}