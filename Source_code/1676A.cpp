#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a,b,c,d,e,f;
        int sum=0,sum1=0;

        a=n%10;
        b=(n%100)/10;
        c=(n%1000)/100;
        d=(n%10000)/1000;
        e=(n%100000)/10000;
        f=(n%1000000)/100000;

        sum=a+b+c;
        sum1=d+e+f;

        if(sum==sum1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
