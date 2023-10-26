#include<string.h>
#include<stdio.h>

int main()
{
    int n,a=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(int i=1; i<=n; i++)
    {
        if(s[i-1]==s[i])
            a++;
    }
    printf("%d\n",a);

    return 0;
}
