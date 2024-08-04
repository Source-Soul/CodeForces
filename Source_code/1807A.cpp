#include<bits/stdc++.h>
using namespace std;

int func(vector<int>& arr)
{
    int s=(arr[0]+arr[1]);
    int s1=(arr[0]-arr[1]);
    if (s== arr[2])
    {
        cout<<"+"<<endl;
    }
    else
        cout<<"-"<<endl;
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


