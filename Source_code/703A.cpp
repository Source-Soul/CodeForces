#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
   int a,b,ans=0;
   while(N--)
   {
       cin>>a>>b;
       if(a>b)
        ans++;
       if(a<b)
        ans--;
   }
   if(ans>0)
    cout<<"Mishka"<<endl;
   else if(ans<0)
    cout<<"Chris"<<endl;
   else
    cout<<"Friendship is magic!^^"<<endl;

}
