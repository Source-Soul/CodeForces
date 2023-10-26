#include <stdio.h>
#include <string.h>

int main()
{
    int n, x = 0;
    scanf("%d", &n);
    char s[4];

    while (n--)
    {
        scanf("%s", s);
        if (strcmp(s, "++x") == 0 || strcmp(s, "x++") == 0)
            x++;
        else
            x--;
    }
    printf("%d\n", x);

    return 0;
}
