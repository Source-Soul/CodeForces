#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int f=0,a,temp=n;
        while(temp)
    {
        a=temp%10;
        if(a==4 || a==7)
            f=1;
        else
        {
            f=0;
            break;
        }
        temp/=10;

    }
    if(f==1)
            printf("YES\n");
        else
        {
            if(n%4==0 ||n%7==0||n%44==0|| n%47==0||
               n%74==0||n%77==0||n%444==0||n%477==0
               ||n%474==0||n%447==0)
                printf("YES\n");
            else
                printf("NO\n");
        }


    return 0;
}
