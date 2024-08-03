#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int left =0;
    int right=n-1;
    int taken=n;
    int turn=0;
    int s=0,s1=0;

    while(taken!=0)
    {
        if(turn%2==0)
        {
            if(arr[left]>arr[right])
            {
                s+=arr[left];
                left++;
            }
            else
            {
                s+=arr[right];
                right--;
            }

        }
        else
        {
          if(arr[left]>arr[right])
          {
              s1+=arr[left];
              left++;
          }
          else
          {
              s1+=arr[right];
              right--;
          }
        }
        taken--;
        turn++;
    }
    cout<<s<<" "<<s1;
}
