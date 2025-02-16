#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<string, int> score;
    string team, winner;
    int maxGoals = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> team;
        score[team]++;


        if (score[team] > maxGoals)
        {
            maxGoals = score[team];
            winner = team;
        }
    }

    cout << winner << endl;
    return 0;
}

