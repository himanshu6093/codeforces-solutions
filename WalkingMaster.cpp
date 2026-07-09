#include <iostream>
using namespace std;

void solve()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int steps = 0;
    if (y2 >= y1)
    {
        steps = steps + (y2 - y1);
        x1 = x1 + steps;
        if (x2 <= x1)
        {
            steps += (x1 - x2);
            cout << steps << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        cout << -1 << endl;
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