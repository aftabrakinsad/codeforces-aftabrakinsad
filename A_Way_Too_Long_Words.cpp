// Author: Rakin Sad Aftab (aftabrakinsad)
// Date: 16-02-2023
// Description: Way Too Long Words
// Status: Accepted
// Time: 31 ms
// Memory: 0 KB
// Link: https://codeforces.com/problemset/problem/71/A
// Platform: Codeforces

#include <iostream>
using namespace std;

int main()
{
    int x, h;
    cin >> x;
    string w;
    for (h = 1; h <= x; h++)
    {
        cin >> w;
        if (w.length() > 10)
        {
            cout << w[0] << w.length() - 2 << w[w.length() - 1] << endl;
        }
        else
        {
            cout << w << endl;
        }
    }

    return 0;
}