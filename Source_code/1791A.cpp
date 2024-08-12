#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    char ch;

    while(t--)
    {
        cin>>ch;

        if(ch=='c'||ch=='o'||ch=='d'||ch=='e'||ch=='f'
           ||ch=='r'||ch=='s')
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

