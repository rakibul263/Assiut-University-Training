#include <stdio.h>

int main()
{
    int n, m, e = 0, o = 0, p = 0, ne = 0, count = 0;
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        scanf("%d", &m);
        if (m % 2 == 0)
            e++;
        if (m % 2 != 0)
            o++;
        if (m > 0)
            p++;
        if (m < 0)
            ne++;
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", e, o, p, ne);

    return 0;
}