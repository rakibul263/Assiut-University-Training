#include <stdio.h>

int main()
{
    long long int n, m, a, height, weight;
    scanf("%lld %lld %lld", &n, &m, &a);

    height = n / a;
    weight = m / a;
    if (n % a != 0)
        height++;
    if (m % a != 0)
        weight++;
    printf("%lld",height*weight);
    return 0;
}