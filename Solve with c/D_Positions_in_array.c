#include <stdio.h>

int main()
{
    int n, j;
    scanf("%d", &n);
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for (int j = 0; j < n; j++)
    {
        if (10 >= ara[j])
            printf("A[%d] = %d\n", j, ara[j]);
    }

    return 0;
}