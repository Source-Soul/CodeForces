#include<stdio.h>
int main()
{
    int n,k,i,sum=0;
    scanf("%d %d", &n, &k);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(x[i]>x[k-1])
            sum++;
    }
    printf("%d", sum);
    return 0;
}
