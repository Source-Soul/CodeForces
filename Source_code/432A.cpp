#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<5)
        {
            if(5-arr[i]>=k)
                count++;
        }
    }
    if(count>=3)
        cout<<count/3;
    else
        cout<<"0";
}
