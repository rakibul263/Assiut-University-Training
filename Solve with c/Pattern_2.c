#include <stdio.h>

int main()
{
    int length;
    scanf("%d", &length);
    int space = length - 1;
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
