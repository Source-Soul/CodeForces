#include <iostream>
#include <algorithm>
using namespace std;

bool isCorrect(string s)
{
    string target = "Timur";
    if (s.length() != target.length()) return false;

    sort(s.begin(), s.end());
    sort(target.begin(), target.end());

    return s == target;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (isCorrect(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
