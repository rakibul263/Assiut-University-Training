#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int a, sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a);
        sum += a;
    }
    printf("%lld", llabs(sum));
    return 0;
}