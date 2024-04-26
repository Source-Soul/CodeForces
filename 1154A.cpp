#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+4);
    int c=abs(arr[3]-arr[0]);
    int b=abs(arr[2]-c);
    int a=abs(arr[3]-(b+c));

    cout<<a<<" "<<b<<" "<<c;
}
