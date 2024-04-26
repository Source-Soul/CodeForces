#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a<b)
        cout<<a<<" ";
    else
        cout<<b<<" ";
    int sub=abs(a-b);
    int ans=sub/2;
    cout<<ans;
}
