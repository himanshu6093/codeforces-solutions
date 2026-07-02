#include <iostream>

using namespace std;

void solve()
{
    int max_len = 0;
    int current_streak = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        if (e == 0)
        {
            current_streak++;
            max_len = max(max_len, current_streak);
        }
        else
        {
            current_streak = 0;
        }
    }
    cout << max_len << endl;
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