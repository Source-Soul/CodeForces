#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int i1=0,i2=0;

        for(int i=0; i<n; i++)
        {
            int candy;
            cin>>candy;
            if(candy==1)
                i1++;
            else
                i2++;
        }
        int total_weight = i1 + 2 * i2;

        if (total_weight % 2 == 0)
        {
            int half_weight = total_weight / 2;

            if ((half_weight % 2 == 0) || (i1 > 0))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

