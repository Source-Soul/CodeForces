#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for(int i=0; i<n; i+=2)
    {
       if((arr[i]+arr[i+1])<=4)
       {
           count++;

       }
       if((arr[i]+arr[i+1])>4)
        count+=2;

    }
    cout<<count-1;
}
