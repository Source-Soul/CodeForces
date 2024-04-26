#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e=0,o=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            e++;
        }
        if(arr[i]%2!=0)
        {
            o++;
        }
    }
    if(e>o)
    {

        for(int i=0; i<n; i++)
        {
            if(arr[i]%2!=0)
            {
                cout<<i+1;
                break;
            }

        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2==0)
            {
                cout<<i+1;
                break;
            }

        }
    }

}
