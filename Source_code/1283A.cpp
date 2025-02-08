#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m;
        cin>>h>>m;

        int a,b;

        a=(24-h)*60;
        b=0-m;

        int ans = a+b;

        cout<<ans<<endl;

    }
}
