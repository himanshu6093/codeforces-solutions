#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n + 1);
    vector<int> pref(n + 1, 0);
    int total_sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        total_sum += arr[i];
        pref[i] = pref[i - 1] + arr[i];
    }

    while (q--)
    {
        int l, r;
        long long k;
        cin >> l >> r >> k;

        long long previous_sum = pref[r] - pref[l - 1];
        long long new_sum = (r - l + 1) * k;
        long long current_sum = total_sum - previous_sum + new_sum;
        if (current_sum % 2 != 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
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