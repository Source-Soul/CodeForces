#include<bits/stdc++.h>
using namespace std;

int bacteria(int a)
{
    int i=1;
    while(i<=a)
    {
        i=i*2;
    }
    return(a-(i/2));
}
int main()
{
    int a,count=0;
    cin>>a;
    while(a!=0)
    {
      a=bacteria(a);
      count++;
    }
    cout<<count<<endl;
}
