// Author: Rakin Sad Aftab (aftabrakinsad)
// Date: 16-02-2023
// Description: A Boy or Girl
// Status: Accepted
// Time: 30 ms
// Memory: 0 KB
// Link: https://codeforces.com/problemset/problem/236/A
// Platform: Codeforces

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // variable declaration
    int i, count = 0;
    string input;
    // input string
    cin>>input;

    // sorting the string
    sort(input.begin(), input.end());
    // length of string
    int l = input.length();
    // counting the number of distinct characters
    for(i = 1; i < l; i++)
    {
        if(input[i] != input[i-1])
        {
            count++;
        }
    }

    // printing the output
    if(count & 1)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}