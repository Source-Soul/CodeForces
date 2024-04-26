#include<bits/stdc++.h>
using namespace std;

string print(int a,int b,int c)
{
    if(a<b&&b<c)
        return "STAIR";
    else if(a<b&&b>c)
        return "PEAK";
    else
        return "NONE";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        string p=print(a,b,c);
        cout<<p<<endl;

    }
}

