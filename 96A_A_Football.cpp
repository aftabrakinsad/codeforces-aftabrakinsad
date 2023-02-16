// Author: Rakin Sad Aftab (aftabrakinsad)
// Date: 16-02-2023
// Description: A Football
// Status: Accepted
// Time: 30 ms
// Memory: 0 KB
// Link: https://codeforces.com/problemset/problem/96/A
// Platform: Codeforces

#include<iostream>
using namespace std;

int main()
{
    string s;
    int count = 0, add = 0;
    cin >> s;

    if(s.find("0000000") != string::npos)
    {
        cout << "YES" << endl;
    }
    else if(s.find("1111111") != string::npos)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;

}