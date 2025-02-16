#include<bits/stdc++.h>
using namespace std;

string Generate_String_B(string &A, int N, int K)
{
    if (K > N) return "WRONGANSWER";

    string LCS = A.substr(0, K);
    string B = LCS;

    vector<bool> used(26, false);
    for (char c : B)
    {
        used[c - 'a'] = true;
    }

    while (B.length() < N)
    {
        char randomChar = 'a' + (rand() % 26);
        if (!used[randomChar - 'a'])
        {
            B += randomChar;
            used[randomChar - 'a'] = true;
        }
    }

    return B;
}

int main()
{
    int N, K;
    string A;
    cin >> N >> K >> A;

    string B = Generate_String_B(A, N, K);
    cout << B << endl;

    return 0;
}
