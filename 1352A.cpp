#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        vector<int>round;
        int n,count=0;
        cin>>n;
        if(n%10!=0)
        {
            round.push_back(n%10);
        }
        int ans=n%10;
        n-=ans;
        if(n%100!=0)
        {
            round.push_back(n%100);
        }
        ans=n%100;
        n-=ans;
        if(n%1000!=0)
        {
            round.push_back(n%1000);
        }
        ans=n%1000;
        n-=ans;
        if(n%10000!=0)
        {
            round.push_back(n%10000);
        }
        ans=n%10000;
        n-=ans;
        if(n>=10000 && n%10000==0)
        {
            round.push_back(n);
        }
        cout<<round.size()<<endl;
        for(int i=0;i<round.size();i++)
        {
            cout<<round[i]<<" ";
        }
    }
}
