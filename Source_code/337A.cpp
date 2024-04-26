#include<bits/stdc++.h>
using namespace std;
int main()
{
    int st, prob,sub=0,ans;
    cin>>st>>prob;
    int arr[prob];

    for(int i=0;i<prob;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+prob);
    sub=arr[prob-1]-arr[0];

    for(int i=st;i<=prob;i++)
    {
        ans=arr[i-1]-arr[i-st];
        ans=abs(ans);
        sub=min(sub,ans);
    }
    cout<<sub;
}
