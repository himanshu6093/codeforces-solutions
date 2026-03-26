// a <= b
// a > b when??(after how many years)
// a gets thrice every year while b gets twice
// input 4 7 output 2

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = 1; i < 30; i++)
    {
        a = 3 * a;
        b = 2 * b;
        if (a > b)
        {
            cout << i;
            break;
        }
    }
    return 0;
}
