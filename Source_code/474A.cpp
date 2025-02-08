#include<bits/stdc++.h>
using namespace std;

int main()
{
    char dir;
    string typedMsg;
    cin >> dir >> typedMsg;

    string keyboard[] = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};
    unordered_map<char, char> shiftL, shiftR;

    for (string &row : keyboard)
    {
        for (int i = 1; i < row.size(); i++)
        {
            shiftR[row[i - 1]] = row[i];
            shiftL[row[i]] = row[i - 1];
        }
    }

    for (char &c : typedMsg)
    {
        if (dir == 'R')
        {
            cout << shiftL[c];
        }
        else
        {
            cout << shiftR[c];
        }
    }
    cout << endl;

    return 0;
}

