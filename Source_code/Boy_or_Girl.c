#include<string.h>
#include<stdio.h>

int main()
{
    char s[100];
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0; i<len; i++)
    {
        for(int j=i+1; j<len;)
        {
            if(s[i]==s[j])
            {
                for(int k=j; k<len; k++)
                {
                    s[k]=s[k+1];
                }
                len--;

            }
            else
                j++;

        }
    }
    len=strlen(s);
    if(len%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
}
