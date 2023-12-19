#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char name[101];
        scanf("%s", name);
        if (strlen(name) > 10)
        {
            int len = strlen(name);
            printf("%c%d%c\n", name[0], len - 2, name[len - 1]);
        }
        else
        {
            printf("%s\n", name);
        }
    }

    return 0;
}