#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = s.length();
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}