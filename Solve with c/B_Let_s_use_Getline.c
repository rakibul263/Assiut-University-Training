#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ara[1000000];
    int i = 0;
    int sz = sizeof(ara);
    fgets(ara, sz, stdin);

    while (ara[i] != '\0' && ara[i] != '\\')
    {
        printf("%c", ara[i]);
        i++;
    }

    printf("\n");

    return 0;
}
