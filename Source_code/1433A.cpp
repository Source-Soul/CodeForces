#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a;
    while(t--)
    {
        cin>>a;

        int digit=a%10;
        int count=0;

        while(a>0)
        {
            a/=10;
            count++;
        }

        if(count==1)
            cout<<((digit*10)-10)+1<<endl;
        else if(count==2)
            cout<<((digit*10)-10)+3<<endl;
        else if(count==3)
            cout<<((digit*10)-10)+6<<endl;
        else if(count==4)
            cout<<((digit*10)-10)+10<<endl;
    }
}
