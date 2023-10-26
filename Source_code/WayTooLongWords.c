#include<stdio.h>
#include<string.h>

int main()

{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int count = 0;
        char ch[100];
        scanf("%s",&ch);

        count = strlen(ch);

        if(count<=10)
        {
            printf("%s\n",ch);
        }
        else
        {

            printf("%c%d%c\n",ch[0],count-2,ch[count-1]);

        }
    }

    return 0;
}
