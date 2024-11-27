#include<bits/stdc++.h>
using namespace std;

void solve()
{
    vector<pair<int,int>> t1;
    vector<pair<int,int>> t2;
    vector<pair<int,int>> t3;

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];

    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        t1.push_back({i+1,1});
        else if(v[i]==2)
            t2.push_back({i+1,2});
        else
            t3.push_back({i+1,3});
    }
    int res= min(min(t1.size(),t2.size()),t3.size());
    cout<<res<<endl;
    for(int i=0;i<res;i++)
    {
        cout<<t1[i].first<<" "<<t2[i].first<<" "<<t3[i].first<<endl;

    }


}

int main()
{
    solve();
    /*int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int t1=0,t2=0,t3=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
            t1++;
        else if(arr[i]==2)
            t2++;
        else
            t3++;
    }
    int res = min(t1,min(t2,t3));

    cout<<res<<endl;*/


}
