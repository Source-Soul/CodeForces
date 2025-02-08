#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> prices(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> prices[i];
    }

    // Sort the prices in descending order
    sort(prices.begin(), prices.end());

    int max_profit = 0;
    for (int i = 0; i < m; ++i)
    {
        if(prices[i]<0)
            max_profit += prices[i];
    }
    int M = max_profit- (2*max_profit);

    //if(max_profit<0)
        cout << M << endl;
    /*else
        cout<< max_profit << endl;*/

    return 0;
}
