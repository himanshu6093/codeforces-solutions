#include <iostream>
#include <string>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 1; i <= n - k; i++)
    {
        if (s[i] == 1)
        {
            s[i] = 0;
            if (s[i + k] == 0)
            {
                s[i + k] = 1;
            }
            else
            {
                s[i + k] = 0;
            }
        }
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