#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin >> s;

        // Use an unordered_set to store unique characters
        unordered_set<char> unique_chars(s.begin(), s.end());

        int baloonsForUnique = unique_chars.size()*2 ;
        int common = n-unique_chars.size();


        cout <<(baloonsForUnique+common) << endl;
    }

}
