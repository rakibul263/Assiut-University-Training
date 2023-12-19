#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    int max = ara[0];
    int min = ara[0];
    for (int i = 0; i < n; i++)
    {
        if (ara[i] > max)
        {
            max = ara[i];
        }
        else if (ara[i] < min)
        {
            min = ara[i];
        }
    }

    int temp = ara[0];
    ara[0] = max;
    max = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ara[i]);
    }
    return 0;
}