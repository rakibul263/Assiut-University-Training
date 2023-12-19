#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001], t[1001];
    scanf("%s %s", s, t);
    int lenS = strlen(s);
    int lent = strlen(t);
    printf("%d %d\n", lenS, lent);
    printf("%s %s\n", s, t);

    return 0;
}