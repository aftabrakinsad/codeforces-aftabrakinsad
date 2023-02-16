// Author: Rakin Sad Aftab (aftabrakinsad)
// Date: 16-02-2023
// Description: A Calculating Function
// Status: Accepted
// Time: 15 ms
// Memory: 0 KB
// Link: https://codeforces.com/problemset/problem/486/A
// Platform: Codeforces

#include<iostream>
using namespace std;

int main()
{
    long long n, m;
    cin>>n;

    if(n % 2 == 0)
    {
        m = n / 2;
        cout << m << endl;
    }
    else if (n % 2 != 0)
    {
        m = -((n/2)+1);
        cout << m << endl;
    }
    else
    {
        
    }
    return 0;
}