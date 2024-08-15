#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int a;
        cin>>a;
        if(a%2==0)
        {
            if(a%4==0)
            {
                cout<<"YES"<<endl;
                vector<int>v;
                v.push_back(2);
                int s1=0,s2=0;
                for(int i=1; i<=a; i++)
                {
                    if(i%2==0)
                    {
                        v.push_back(i);
                        s1+=i;
                    }
                }
                for(int i=1; i<=a; i++)
                {
                    if(i%2!=0)
                    {
                        v.push_back(i);
                        s2+=i;
                    }
                }
                int sub=s1-s2;
                int x=v.back();
                v.back()=sub+x;
                for(int i=1; i<=a; i++)
                {
                    cout<<v[i]<<" ";
                }
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
