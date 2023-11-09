#include <stdio.h>

int main()
{
    long long int n,d;

    scanf("%lld", &n);
    if(n%2==0)
        printf("%lld",n/2);
    else
    {
        d=-(n/2 + 1);
        printf("%lld",d);
    }


    return 0;
}

