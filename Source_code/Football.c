#include<stdio.h>
#include<string.h>
int main()
{
    int s[100];
    scanf("%s",s);
    int f=0;
    int len= strlen(s);

    for(int i=0; s[i]!='\0'; i++)
    {
        for(int j=i+1;j<i+7;j++)
        {
            if(s[i]==s[j])
            {
                f=1;
            }
            else
            {
                f=0;
                break;
            }
        }
            if(f==1)
                break;
    }
    if(f==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
