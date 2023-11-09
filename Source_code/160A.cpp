#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int V[n];
    int sum=0,sum2=0,count=0;
    for(int i=0; i<n; i++)
    {
        cin>>V[i];
        sum+=V[i];
    }
    sum/=2;
    sort(V,V+n);
    for(int j=n-1; j>=0; j--)
    {
        sum2+=V[j];
        count++;
        if(sum<sum2)
            break;
    }
    cout<<count;
}
