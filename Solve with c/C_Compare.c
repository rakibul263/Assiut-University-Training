#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];
    scanf("%s", a);
    scanf("%s", b);

    int ans = strcmp(a, b);
    if (ans > 0)
        printf("%s", b);
    else if (ans < 0)
        printf("%s", a);
    else
        printf("%s", b);

    return 0;
}