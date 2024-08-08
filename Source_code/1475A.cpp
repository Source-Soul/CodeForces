#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
	cin>>n;

	while(n%2 == 0)
		n/=2;

	if(n == 1)
		cout<<"No"<<endl;
	else
		cout<<"Yes"<<endl;

}

int main()
{
    int t;
	cin>>t;
	while(t--)
		solve();
}
