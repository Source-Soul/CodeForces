#include<bits/stdc++.h>
using namespace std;

int Balance(long long int a)
{
    if(a>0)
        cout<<a;
    else if(a<0)
    {
        long long int b = a-(2*a);
        int LastD = b%10;
        int DbeforeLast = (b/10)%10;

        if(b%10==0 && (LastD>DbeforeLast))
            cout<<"-"<<(b/10);
        else
        {
            if(b/100==0 && LastD==0)
                cout<<"0";
            else if(b%10!=0 && (LastD>DbeforeLast))
                cout<<"-"<<(b/10);
            else if(b%10!=0 && (LastD<DbeforeLast))
            {
                if(b/100==0)
                    cout<<"-"<<LastD;
                else
                    cout<<"-"<<b/100<<LastD;
            }
            else if(b%10!=0 && (LastD==DbeforeLast))
            {
                if(b/100==0)
                    cout<<"-"<<LastD;
                else
                    cout<<"-"<<b/100<<LastD;

            }
            else
                cout<<"-"<<(b/100)<<LastD;

        }


    }
}


int main()
{
    long long int a;
    cin>>a;
    Balance(a);
    //cout<<(a/10)%10;
}
