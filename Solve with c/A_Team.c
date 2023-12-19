#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    while (n--)
    {

        int p, v, t;
        scanf("%d %d %d", &p, &v, &t);
        int sum = p + v + t;
        if (sum >= 2)
            count++;
    }
    printf("%d\n", count);

    return 0;
}