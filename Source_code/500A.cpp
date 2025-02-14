#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;

    vector<int>v(n);
    for(int i=0;i<n-1;i++)
        cin>>v[i];
    int pos=1,nxt;

    while(pos<t)
    {
        nxt = pos+v[pos-1];
        pos=nxt;
    }
    if(pos==t)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
