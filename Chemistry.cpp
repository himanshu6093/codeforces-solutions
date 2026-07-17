#include <iostream>
#include <string>
// #include <unordered_map>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    // unordered_map<char, int> freq;

    // for (char c : s)
    // {
    //     freq[c]++;
    // }
    // int odd_count = 0;

    /**
     * When C++ evaluates freq[c], it performs these steps behind the scenes:

Check: Is the key c (e.g., 'a') already present inside the map?

If NO (First time seeing 'a'): * It automatically inserts 'a' as a new key into the map.

It value-initializes the associated int value to its default, which for int is 0.

If YES (Already seen 'a'): * It directly retrieves a reference to the existing count.

After step 2 or 3, the ++ operator increments that value by 1!
     */

    // I understood unordered_set part but i didnt get how to do it after wards

    int odd_count = 0;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == ch)
            {
                count++;
            }
        }

        if (count % 2 != 0)
        {
            odd_count++;
        }
    }
    if (k >= odd_count - 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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

// count unique alphabets
// if only 1 unique alphabets remaining , then its a palindrome
// if 2 unique alphabets remainig, one of the alphabets must be in even number, then its a plaindrom
// if 3 unique alphabets remaining, then 2 of the alphabets must be in even number
// similarly ...........
