#include<stdio.h>
int main()
{
    int x,q;
    scanf("%d",&x);
    q=x/5;

    if(x%5==0)
        printf("%d\n",q);
    else
        printf("%d\n",q+1);
    return 0;
}
