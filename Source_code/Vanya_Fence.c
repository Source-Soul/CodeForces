#include<stdio.h>
int main()
{
    int n,h,w=0,i,temp;
    scanf("%d%d",&n,&h);
    w=n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        if(h<temp)
            w++;
    }
    printf("%d",w);
    return 0;
}
