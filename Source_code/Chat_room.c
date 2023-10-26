#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i,x=0,y=0;
    char a[5]="hello";
    for(i=0; i<5; i++)
    {

        while(s[x]!='\0')
        {
            if(s[i]==a[x])
            {
                x++;
                y++;
                break;
            }
            else
                x++;
        }

    }
    if(y==5)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
