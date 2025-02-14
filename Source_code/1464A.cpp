#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long W;
        cin >> n >> W;

        vector<pair<int, int>> items;
        for (int i = 0; i < n; i++)
        {
            int w;
            cin >> w;
            items.push_back({w, i + 1});
        }

        sort(items.rbegin(), items.rend());

        long long halfW = (W + 1) / 2;
        long long sum = 0;
        vector<int> selected;

        for (auto& item : items)
        {
            if (item.first > W) continue;
            sum += item.first;
            selected.push_back(item.second);
            if (sum >= halfW && sum <= W) break;
        }

        if (sum >= halfW && sum <= W)
        {
            sort(selected.begin(), selected.end());
            cout << selected.size() << "\n";
            for (int index : selected)
            {
                cout << index << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
}

int main()
{
    solve();
}
