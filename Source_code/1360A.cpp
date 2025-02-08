#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;

        if(a<b)
            a=a*2;
        else
            b=b*2;
        int m= max(a,b);
        int area = m*m;
        cout<<area<<endl;
    }
}
