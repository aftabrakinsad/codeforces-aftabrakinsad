// Author: Rakin Sad Aftab (aftabrakinsad)
// Date: 16-02-2023
// Description: A. Next Round
// Status: Accepted
// Time: 62 ms
// Memory: 0 KB
// Link: https://codeforces.com/problemset/problem/158/A
// Platform: Codeforces

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int w, s, z;
    cin >> w >> s;
    int x[w];

    for (z = 0; z < w; z++)
    {
        cin >> x[z];
    }
    sort(x, x + w, greater<int>());

    for (z = 0; x[z] > 0 && z < w && x[z] >= (*(x + s - 1)); z++)
        ;
    {
        cout << z;
    }
    return 0;
}