#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    int rem = number % 10;
    int quo = number / 10;

    if (rem == 0 || quo == 0)
    {
        printf("YES\n");
    }
    else if (quo % rem == 0 || rem % quo == 0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");

    return 0;
}