// Author: Rakin Sad Aftab (aftabrakinsad)
// Date: 16-02-2023
// Description: Team
// Status: Accepted
// Time: 62 ms
// Memory: 0 KB
// Link: https://codeforces.com/problemset/problem/231/A
// Platform: Codeforces

#include <iostream>
using namespace std;

int main()
{
    int x, y, z, w, s, result = 0;
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        cin >> y >> z >> w;
        s = y + z + w;

        if (s > 1)
        {
            result = result + 1;
        }
    }
    cout << result;

    return 0;
}