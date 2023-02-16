// Author: Rakin Sad Aftab (aftabrakinsad)
// Date: 16-02-2023
// Description: Elephant
// Status: Accepted
// Time: 15 ms
// Memory: 0 KB
// Link: https://codeforces.com/problemset/problem/617/A
// Platform: Codeforces

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x;

    cin >> x;

    for (int i = 5; i >= 1; i--)
    {
        if ((x % i) == 0)
        {
            cout << x / i << endl;
            i = 0;
        }
        else if ((x % i) <= 5)
        {
            cout << (x / i) + 1 << endl;
            i = 0;
        }
    }

    return 0;
}