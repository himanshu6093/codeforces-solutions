#include <iostream>
using namespace std;

void solve()
{
    int value = 0;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            char var;
            cin >> var;
            if (var == 'X')
            {
                int col_score = min(i, 11 - i);
                int row_score = min(j, 11 - j);
                value += min(col_score, row_score);
            }
        }
    }
    cout << value << endl;
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