#include<stdio.h>
int main()
{
    long long int n,sub=0;
    scanf("%lld",&n);
    int k,i,rem=0;
    scanf("%d",&k);

    for(i=1;i<=k;i++)
    {
        rem=n%10;
        if(rem!=0)
            {
                sub=n-1;
                n=sub;
            }
        else if(rem==0)
        {
            sub=n/10;
            n=sub;
        }

    }
    printf("%lld\n",sub);
}
