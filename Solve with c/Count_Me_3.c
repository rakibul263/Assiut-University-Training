#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char ara[10001];
        scanf("%s", ara);

        int cap = 0, sm = 0, dig = 0;

        for (int i = 0; ara[i] != '\0'; i++)
        {
            if (ara[i] >= 'A' && ara[i] <= 'Z')
            {
                cap++;
            }
            else if (ara[i] >= 'a' && ara[i] <= 'z')
            {
                sm++;
            }
            if (ara[i] >= '0' && ara[i] <= '9')
            {
                dig++;
            }
        }
        printf("%d %d %d\n", cap, sm, dig);
    }

    return 0;
}