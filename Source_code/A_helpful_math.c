#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    char s[100];
    scanf("%s", s);

    int i, j;
    int length = strlen(s);

    for (i = 0; i < length; i += 2)
    {
        for (j = 0; j < length - 1; j += 2)
        {
            if (s[j] > s[j + 2])
            {
                swap(&s[j], &s[j + 2]);
            }
        }
    }

    printf("%s\n", s);
    return 0;
}
