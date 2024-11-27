#include<bits/stdc++.h>
using namespace std;

bool isSquare(string &s)
{
    int len = s.length();
    if (len % 2 != 0)
        return false;

    // Check if the first half is equal to the second half
    string fHalf = s.substr(0, len / 2);
    string sHalf = s.substr(len / 2);

    return fHalf == sHalf;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        if (isSquare(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

