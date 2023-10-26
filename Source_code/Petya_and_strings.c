#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char a[100], b[100];
    int i;

    scanf("%s %s", a, b);

    for (i = 0; a[i] != '\0' && b[i] != '\0'; i++) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }

    if (strcmp(a, b) == 0)
        printf("0\n");
    else {
        for (i = 0; a[i] != '\0' && b[i] != '\0'; i++) {
            if (a[i] < b[i]) {
                printf("-1\n");
                break;
            }
            if (a[i] > b[i]) {
                printf("1\n");
                break;
            }
        }
    }
    return 0;
}
