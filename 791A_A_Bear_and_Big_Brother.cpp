// Author: Rakin Sad Aftab (aftabrakinsad)
// Date: 16-02-2023
// Description: A Bear and Big Brother
// Status: Accepted
// Time: 15 ms
// Memory: 0 KB
// Link: https://codeforces.com/problemset/problem/791/A
// Platform: Codeforces

#include<iostream>
using namespace std;

int main()
{
    int a, b, count = 0;
    cin >> a >> b;

    while (a <= b)
    {
        a = a * 3;
        b = b * 2;
        count++;
    }
    
    cout << count << endl;
    return 0;
}