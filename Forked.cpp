#include <iostream>
using namespace std;

// void solve()
// {
//     int a, b;
//     cin >> a >> b;
//     int x, y;
//     cin >> x >> y;
//     int p, q;
//     cin >> p >> q;
//     int x1 = x + a;
//     int y1 = y + b;
//     int count = 0;
//     if ((x1 + a == p && y1 + b == q) || (x1 + b == p && y1 + a == q))
//     {
//         count++;
//     }
//     int x2 = x + b;
//     int y2 = y + a;
//     if ((x2 + a == p && y2 + b == q) || (x2 + b == p && y2 + a == q))
//     {
//         count++;
//     }
//     cout << count << endl;
//     cout << "\n";
// }
/**
 * Above code was my first thought, but doing this way is not optimal , because i have to write all the 8 condition on my own.
 *
 * So Gemini suggested
 * 🛠️ The Clean Way: Direction Arrays & Sets
 * int dx[] = {a, a, -a, -a, b, b, -b, -b};
 * int dy[] = {b, -b, b, -b, a, -a, a, -a};
 * Using Direction Arrays paired with std::set is the standard, clean way to navigate grids and handle unique positions.
 * std::set is used to handle duplicates.
 * 1. What is a Direction Array?
 * Instead of manually calculating updated coordinates like x + 1, x - 1, y + 1, y - 1 across multiple lines of
 * code, a Direction Array stores coordinate changes (offsets) in arrays.
 * 3. Why do we need std::set?
 * When working with positions in C++, we often want to store coordinates as pairs: pair<int, int>.std::set<pair<int, int>> serves two important functions:
 * Automatic Duplicate Removal: If a = 2 and b = 2, or a = b, several of the 8 direction offsets will produce the exact same point. A standard C++ std::set ignores duplicate insertions automatically, saving only unique coordinates.
 * Fast Lookup (.count()): You can check if a coordinate pair exists in a set in $O(\log N)$ time using st.count({x, y}). It returns 1 if found, and 0 if not.
 *
 */
void solve()
{
    int a, b;
    cin >> a >> b;
    int x, y;
    cin >> x >> y;
    int p, q;
    cin >> p >> q;
    int dx[] = {a, a, -a, -a, b, b, -b, -b};
    int dy[] = {b, -b, b, -b, a, -a, a, -a};

    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        if (a == b && i >= 4)
        {
            break;
        }

        int knight_x = x + dx[i];
        int knight_y = y + dy[i];

        int diff_x = abs(knight_x - p);
        int diff_y = abs(knight_y - q);

        if ((diff_x == a && diff_y == b) || (diff_x == b && diff_y == a))
        {
            count++;
        }
    }
    cout << count << endl;
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
