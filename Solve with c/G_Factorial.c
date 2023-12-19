#include <stdio.h>

int main()
{
    long long int n, fac;
    scanf("%lld", &n);
    long long int a;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a);

        fac = 1;

        for (int i = 1; i <= a; i++)
        {
            fac = fac * i;
        }
        printf("%lld\n", fac);
    }

    return 0;
}