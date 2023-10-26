#include<stdio.h>
int main()
{
    int a,b,y=0;
    scanf("%d%d",&a,&b);

    while(1)
    {
        y++;
        a*=3;
        b*=2;

        if(a>b)
        {
            printf("%d\n",y);
            break;
        }
    }
}
