#include <stdio.h>

int main()
{
    int length;
    scanf("%d", &length);
    int star = length;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        star--;
        printf("\n");
    }

    return 0;
}