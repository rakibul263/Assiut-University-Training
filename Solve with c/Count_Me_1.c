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
    int num2 = 0, num3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (ara[i] % 2 == 0 && ara[i] % 3 == 0)
        {
            num2++;
        }
        else if (ara[i] % 2 == 0)
        {
            num2++;
        }
        else if (ara[i] % 3 == 0)
        {
            num3++;
        }
    }
    printf("%d %d\n", num2, num3);

    return 0;
}