#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int l=0,s=100,l1,s1,arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
        if(arr[i]>l)
        {
            l=arr[i];
            l1=i;
        }

        if(arr[i]<=s)
        {
            s=arr[i];
            s1=i;
        }

    }
    if(l1>s1)
        s1++;
    cout<<l1+(a-1)-s1;



}
