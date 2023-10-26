#include<stdio.h>
void capital(char s[100])
{
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]>=97)
            s[i]=s[i]-32;
    }
}
void small(char s[100])
{
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]<=90)
            s[i]=s[i]+32;
    }

}
int main()
{
    int i,l=0,u=0;
    char s[100];
    scanf("%s",s);

    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]>=97)
            l++;
        else
            u++;
    }
    if(l<u)
        capital(s);
    else
        small(s);
    printf("%s",s);
    return 0;
}
