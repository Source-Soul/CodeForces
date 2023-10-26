#include<stdio.h>
int main()
{
    long long int n,m,a,x,y;
    scanf("%lli%lli%lli",&n,&m,&a);
    if(m%a==0)
    {
        x=m/a;
    }
    else
        x=m/a+1;
    if(n%a==0)
        y=n/a;
    else
        y=n/a+1;
    printf("%lld\n",(x*y));
    return 0;
}
