#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char ch[101];
        scanf("%s", ch);
        int len;
        for (int i = 0; ch[i] != '\0'; i++)
        {
            len++;
        }
        int l = strlen(ch);
        if (len > 10)
        {
            printf("%c%d%c\n", ch[0], l - 2, ch[l - 1]);
        }
        else
        {
            printf("%s\n", ch);
        }
    }

    return 0;
}