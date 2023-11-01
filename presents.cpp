#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(j=1;j<=n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]==j)
                cout<<i+1<<" ";
        }
    }
    return 0;
}
