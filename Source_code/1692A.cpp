#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<b && a<c && a<d)
            cout<<"3"<<endl;
        else if(a<b && a<c)
            cout<<"2"<<endl;
        else if(a<b && a<d)
            cout<<"2"<<endl;
        else if(a<c && a<d)
            cout<<"2"<<endl;
        else if(a<b)
            cout<<"1"<<endl;
        else if(a<c)
            cout<<"1"<<endl;
        else if(a<d)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
}
