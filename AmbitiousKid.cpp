#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int min_val = 2e9;
    for (int i = 0; i < n; i++)
    {
        int var;
        cin >> var;
        min_val = min(min_val, abs(var));
    }
    cout << min_val;
    return 0;
}
