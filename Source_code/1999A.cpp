#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int d;
    while(t--)
    {
        cin>>d;
        int rem=d%10;
        int d1=d/10;
        cout<<(rem+d1)<<endl;
    }
}
