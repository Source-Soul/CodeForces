#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    unordered_map<string, int> freq;
    string max_twogram;
    int max_count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        string twogram = s.substr(i, 2);
        freq[twogram]++;

        if (freq[twogram] > max_count)
        {
            max_count = freq[twogram];
            max_twogram = twogram;
        }
    }

    cout << max_twogram << endl;
    return 0;
}

