#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (val % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    if (odd_count % 2 == 0)
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
