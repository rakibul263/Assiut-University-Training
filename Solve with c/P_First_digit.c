#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    n = n / 1000;
    if (n % 2 == 0)
        printf("EVEN\n");
    else
        printf("ODD\n");

    return 0;
}