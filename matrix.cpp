#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int matrix;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> matrix;
            if (matrix == 1)
            {
                int moves = abs(j - 3) + abs(i - 3);
                cout << moves << endl;
                return 0;
            }
        }
    }

    return 0;
}
