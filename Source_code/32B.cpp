#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    string n;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='.')
        {
            n+='0';
        }
        else if(s[i]=='-' && s[i+1]=='.')
        {
            n+='1';
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='-')
        {
            n+='2';
            i++;
        }
    }
    cout<<n<<endl;
}
