// Author: Rakin Sad Aftab (aftabrakinsad)
// Date: 16-02-2023
// Description: Domino piling
// Status: Accepted
// Time: 30 ms
// Memory: 0 KB
// Link: https://codeforces.com/problemset/problem/50/A
// Platform: Codeforces

#include<iostream>
using namespace std;

int main()
{
    int M, N, S = 2;

    cin>>M>>N;

    if((M*N) % S == 0)
    {
        cout<<(M*N) / S;
    }
    else
    {
        cout<<(M*N) / S;
    }
}
