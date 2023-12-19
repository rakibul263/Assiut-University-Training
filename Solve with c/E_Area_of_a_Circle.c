#include <stdio.h>
#define pi 3.141592653

int main()
{
    double r;
    scanf("%lf", &r);

    double area = pi * (r * r);

    printf("%.9lf\n", area);

    return 0;
}