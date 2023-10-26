#include<stdio.h>
int main()
{
    int i,k,w;
    long int n,sum=0;
    scanf("%d%li%d",&k,&n,&w);

    for(i=1; i<=w; i++)
    {
        sum+=k*i;
    }
    if(sum>n)
        printf("%li\n",sum-n);
    else
        printf("0\n");
    return 0;
}
