// Author: Rakin Sad Aftab (aftabrakinsad)
// Date: 16-02-2023
// Description: A. Word Capitalization
// Status: Accepted
// Time: 30 ms
// Memory: 0 KB
// Link: https://codeforces.com/problemset/problem/281/A
// Platform: Codeforces

#include <iostream>
using namespace std;

int main()
{
    // input string
    string s;
    cin >> s;

    // length of string
    int l = s.length();

    // converting first character to uppercase
    for (int i = 0; i < l; i++)
    {
        if (islower(s[i]))
            /*  Converting lowercase characters to uppercase  */
            s[i] = s[i] - 32;
        break;
    }
    // printing the string
    cout << s;

    return 0;
}