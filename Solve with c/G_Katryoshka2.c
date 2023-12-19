#include <stdio.h>

int main()
{
    long long int x, y, z, min;
    scanf("%lld %lld %lld", &x, &y, &z);

    if (x <= y && x <= z)
        min = x;
    else if (y <= x && y <= z)
        min = y;
    else
        min = z;

    x = x - min;
    y = y - min;
    z = z - min;
    x = x / 2;


    if (x <= z)
        min = min + x;
    else
        min = min + z;

    printf("%lld\n",min);

    return 0;
}