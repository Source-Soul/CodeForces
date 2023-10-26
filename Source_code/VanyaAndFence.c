#include<stdio.h>
int main()
{
    int n,h,w,i,sum=0;
    scanf("%d%d",&n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%d",&w);
        if(h>w || h==w)
            sum+=1;
        else
            sum+=2;
    }
    printf("%d",sum);
    return 0;
}
