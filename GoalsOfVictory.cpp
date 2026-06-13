
#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        int val;
        cin >> val;
        sum = sum + val;
    }
    cout << -sum << endl;
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