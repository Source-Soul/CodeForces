#include<stdio.h>
#include<string.h>
int main()
{
    long int n,a=0,d=0;
    scanf("%ld",&n);
    char s[n];
    scanf("%s",s);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
            a++;
        if(s[i]=='D')
            d++;

    }
    if(a>d)
        printf("Anton");
    else if(a==d)
        printf("Friendship\n");
    else
        printf("Danik");
    return 0;
}
