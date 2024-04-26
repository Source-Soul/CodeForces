#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a=(k*l)/nl;
    int e=c*d;
    int f=p/np;
    int pri= min(min(a,e),f);
    cout<<pri/n;
}
