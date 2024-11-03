#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while(t--)
    {
        cin>>s1>>s2;
        for(int i=0;i<3;i++)
        swap(s1[0],s2[0]);
        cout<<s1<<" "<<s2<<endl;
    }
}
