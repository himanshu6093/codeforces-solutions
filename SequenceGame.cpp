#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> b(n);
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int var;
        cin >> b[i];
    }
    a.push_back(b[0]);

    for (int i = 1; i < n; i++)
    {
        if (b[i] < b[i - 1])
        {
            a.push_back(b[i]);
        }
        a.push_back(b[i]);
    }

    cout << a.size() << endl;
    for (int x : a)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}