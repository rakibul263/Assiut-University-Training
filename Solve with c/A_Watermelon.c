#include <stdio.h>

int main()
{
    int weight;
    scanf("%d", &weight);
    if (weight<=2 || weight % 2 != 0)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}