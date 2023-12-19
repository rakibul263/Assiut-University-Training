#include <stdio.h>

int main()
{
    long long int m, n, x, y, result;
    scanf("%lld %lld", &m, &n);
    x = m % 10;
    y = n % 10;
    printf("%lld\n", x + y);

    return 0;
}