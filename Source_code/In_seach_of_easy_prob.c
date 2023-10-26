#include<stdio.h>
int main()
{
    int n,r[n],i,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&r[i]);
        if(r[i]==1)
        {
           count++;
        }
    }
    if(count==0)
        printf("EASY");
    else
        printf("HARD");
    return 0;
}
