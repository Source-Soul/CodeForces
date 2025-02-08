#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int arr1[a],arr2[a];
        int sum1=0;

        for(int i=0;i<a;i++)
        {
            cin>>arr1[i];
            sum1+=arr1[i];
        }
        for(int i=0;i<a;i++)
        {
            cin>>arr2[i];
        }
        sort(arr1,arr1+a);
        sort(arr2,arr2+a);
        reverse(arr2,arr2+a);
        int k=0;
        for(int i=0;i<a;i++)
        {
            if(arr1[i]<arr2[i])
            {
               swap(arr1[i],arr2[i]);
               k++;
               if(k==b)break;
            }
        }
        int sum2=0;
        for(int i=0;i<a;i++)
        {
            //cin>>arr1[i];
            sum2+=arr1[i];
        }
        if(b==0) cout<<sum1<<endl;
        else cout<<sum2<<endl;
    }
}
