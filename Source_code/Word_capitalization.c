#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[1000];
    scanf("%s",s);
    int len = strlen(s);
    if(len>0)
    {
        s[0]=toupper(s[0]);
    }
    printf("%s\n",s);
}
