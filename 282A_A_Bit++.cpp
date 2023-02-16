// Author: Rakin Sad Aftab (aftabrakinsad)
// Date: 16-02-2023
// Description: A Bit++
// Status: Accepted
// Time: 15 ms
// Memory: 0 KB
// Link: https://codeforces.com/problemset/problem/282/A
// Platform: Codeforces

#include<iostream>
using namespace std;

int main()
{
    int n, add = 0;
    string s;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> s;
        if(s[1] == '+')
        {
            add++;
        }
        else
        {
            add--;
        }
    }

    cout<<add<<endl;
    return 0;
}