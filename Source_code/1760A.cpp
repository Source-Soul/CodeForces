#include<bits/stdc++.h>
using namespace std;

int func(vector<int>& arr)
{
    sort(arr.begin(),arr.end());
    cout<<arr[1]<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a(3);
        for (int i = 0; i < 3; ++i)
        {
            cin >> a[i];
        }
        func(a);
    }
    return 0;
}
