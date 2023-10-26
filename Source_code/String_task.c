#include <stdio.h>
#include <string.h>

int main()
{
    char s[100],a[200];
    scanf("%s",s);
    int i,j,len;
    len=strlen(s);
    for(i=0,j=0; i<len; i++)
    {
        if(s[i]!='a'&&s[i]!='A'&&s[i]!='e'&&s[i]!='E'&&s[i]!='i'&&s[i]!='I'&&s[i]!='o'&&s[i]!='O'&&s[i]!='u'&&s[i]!='U'&&s[i]!='y'&&s[i]!='Y')
        {
            a[j]='.';
            j++;
            if(s[i]>=65&&s[i]<=90)
        {
            a[j]=s[i]+32;
                j++;
            }
            else
            {
                a[j]=s[i];
                j++;
            }

        }
    }
    a[j]='\0';
    printf("%s",a);
    return 0;
}
