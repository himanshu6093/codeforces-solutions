#include <iostream>
#include <string>
using namespace std;

void solve()
{
    string n;
    cin >> n;

    int d = n.length();
    int first_digit = n[0] - '0';
    // Why subtracting '0' worksBecause the digits 0 through 9 are arranged sequentially in the ASCII table, subtracting the ASCII value of '0' (which is 48) shifts the character's value down to its actual integer equivalent:$$\text{ASCII value of '4'} - \text{ASCII value of '0'} = 52 - 48 = 4$$In code, writing s[0] - '0' automatically handles this math behind the scenes. It is the standard, fastest way in C++ to safely convert a numeric character into its true integer digit!
    //
    if (d == 1)
    {
        cout << n << endl;
    }
    if (d > 1)
    {
        cout << (d - 1) * 9 + first_digit << endl;
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
}