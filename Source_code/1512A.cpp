#include<bits/stdc++.h>
using namespace std;

int UniqueIndex(vector<int>& arr)
{
    if (arr[0] != arr[1] && arr[0] != arr[2])
    {
        return 1;
    }
    if (arr[1] != arr[0] && arr[1] != arr[2])
    {
        return 2;
    }
    for (int i = 2; i < arr.size(); ++i)
    {
        if (arr[i] != arr[0])
        {
            return i + 1;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        cout << UniqueIndex(a) << endl;
    }
    return 0;
}

