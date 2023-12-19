#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    while (n--)
    {
        long  long int value, a, b, c, x;
        scanf("%lld %lld %lld %lld", &value, &a, &b, &c);
        if (value == 0)
        {
            printf("0\n");
        }
        else if (value % (a * b * c) == 0)
        {
            x = value / (a * b * c);
            printf("%lld\n", x);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}