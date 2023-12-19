#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    int max = INT_MAX, position;
    for (int i = 0; i < n; i++)
    {
        if (ara[i] < max)
        {
            max = ara[i];
            position = i + 1;
        }
    }
    printf("%d %d\n", max, position);

    return 0;
}